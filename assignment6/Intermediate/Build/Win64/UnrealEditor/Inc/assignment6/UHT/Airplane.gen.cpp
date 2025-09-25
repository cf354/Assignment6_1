// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "assignment6/Public/Airplane.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirplane() {}

// Begin Cross Module References
ASSIGNMENT6_API UClass* Z_Construct_UClass_AAirplane();
ASSIGNMENT6_API UClass* Z_Construct_UClass_AAirplane_NoRegister();
ASSIGNMENT6_API UClass* Z_Construct_UClass_ASpartaCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_assignment6();
// End Cross Module References

// Begin Class AAirplane Function ExitAirplane
struct Z_Construct_UFunction_AAirplane_ExitAirplane_Statics
{
	struct Airplane_eventExitAirplane_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Airplane_eventExitAirplane_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirplane, nullptr, "ExitAirplane", nullptr, nullptr, Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::Airplane_eventExitAirplane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::Airplane_eventExitAirplane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirplane_ExitAirplane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirplane_ExitAirplane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirplane::execExitAirplane)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExitAirplane(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AAirplane Function ExitAirplane

// Begin Class AAirplane Function GoForward
struct Z_Construct_UFunction_AAirplane_GoForward_Statics
{
	struct Airplane_eventGoForward_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAirplane_GoForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Airplane_eventGoForward_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirplane_GoForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirplane_GoForward_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_GoForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirplane_GoForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirplane, nullptr, "GoForward", nullptr, nullptr, Z_Construct_UFunction_AAirplane_GoForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_GoForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirplane_GoForward_Statics::Airplane_eventGoForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_GoForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirplane_GoForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAirplane_GoForward_Statics::Airplane_eventGoForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirplane_GoForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirplane_GoForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirplane::execGoForward)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GoForward(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AAirplane Function GoForward

// Begin Class AAirplane Function StopForward
struct Z_Construct_UFunction_AAirplane_StopForward_Statics
{
	struct Airplane_eventStopForward_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAirplane_StopForward_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Airplane_eventStopForward_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirplane_StopForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirplane_StopForward_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_StopForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirplane_StopForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirplane, nullptr, "StopForward", nullptr, nullptr, Z_Construct_UFunction_AAirplane_StopForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_StopForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirplane_StopForward_Statics::Airplane_eventStopForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_StopForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirplane_StopForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAirplane_StopForward_Statics::Airplane_eventStopForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirplane_StopForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirplane_StopForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirplane::execStopForward)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopForward(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AAirplane Function StopForward

// Begin Class AAirplane Function TurnEnd
struct Z_Construct_UFunction_AAirplane_TurnEnd_Statics
{
	struct Airplane_eventTurnEnd_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAirplane_TurnEnd_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Airplane_eventTurnEnd_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirplane_TurnEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirplane_TurnEnd_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_TurnEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirplane_TurnEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirplane, nullptr, "TurnEnd", nullptr, nullptr, Z_Construct_UFunction_AAirplane_TurnEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_TurnEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirplane_TurnEnd_Statics::Airplane_eventTurnEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_TurnEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirplane_TurnEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAirplane_TurnEnd_Statics::Airplane_eventTurnEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirplane_TurnEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirplane_TurnEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirplane::execTurnEnd)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TurnEnd(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AAirplane Function TurnEnd

// Begin Class AAirplane Function TurnStart
struct Z_Construct_UFunction_AAirplane_TurnStart_Statics
{
	struct Airplane_eventTurnStart_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAirplane_TurnStart_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Airplane_eventTurnStart_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAirplane_TurnStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAirplane_TurnStart_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_TurnStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAirplane_TurnStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAirplane, nullptr, "TurnStart", nullptr, nullptr, Z_Construct_UFunction_AAirplane_TurnStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_TurnStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAirplane_TurnStart_Statics::Airplane_eventTurnStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAirplane_TurnStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAirplane_TurnStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAirplane_TurnStart_Statics::Airplane_eventTurnStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAirplane_TurnStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAirplane_TurnStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAirplane::execTurnStart)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TurnStart(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AAirplane Function TurnStart

// Begin Class AAirplane
void AAirplane::StaticRegisterNativesAAirplane()
{
	UClass* Class = AAirplane::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExitAirplane", &AAirplane::execExitAirplane },
		{ "GoForward", &AAirplane::execGoForward },
		{ "StopForward", &AAirplane::execStopForward },
		{ "TurnEnd", &AAirplane::execTurnEnd },
		{ "TurnStart", &AAirplane::execTurnStart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAirplane);
UClass* Z_Construct_UClass_AAirplane_NoRegister()
{
	return AAirplane::StaticClass();
}
struct Z_Construct_UClass_AAirplane_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Airplane.h" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PilotCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Airplane" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Airplane" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComp_MetaData[] = {
		{ "Category", "Airplane|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[] = {
		{ "Category", "Airplane|Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpeed_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentVerticalSpeed_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VerticalSpeed_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TurnSpeed_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRollAngle_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchAngle_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PitchInterpSpeed_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollInterpSpeed_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiftFactor_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DragCoefficient_MetaData[] = {
		{ "Category", "Airplane|Properties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StallSpeed_MetaData[] = {
		{ "Category", "Airplane|ProPerties" },
		{ "ModuleRelativePath", "Public/Airplane.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PilotCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentVerticalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VerticalSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRollAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LiftFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DragCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StallSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAirplane_ExitAirplane, "ExitAirplane" }, // 681949588
		{ &Z_Construct_UFunction_AAirplane_GoForward, "GoForward" }, // 2020020961
		{ &Z_Construct_UFunction_AAirplane_StopForward, "StopForward" }, // 1123039485
		{ &Z_Construct_UFunction_AAirplane_TurnEnd, "TurnEnd" }, // 1155874540
		{ &Z_Construct_UFunction_AAirplane_TurnStart, "TurnStart" }, // 4183767060
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirplane>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_PilotCharacter = { "PilotCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, PilotCharacter), Z_Construct_UClass_ASpartaCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PilotCharacter_MetaData), NewProp_PilotCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_StaticMeshComp = { "StaticMeshComp", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, StaticMeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComp_MetaData), NewProp_StaticMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TriggerBox_MetaData), NewProp_TriggerBox_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_CurrentSpeed = { "CurrentSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, CurrentSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpeed_MetaData), NewProp_CurrentSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, Acceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Acceleration_MetaData), NewProp_Acceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_CurrentVerticalSpeed = { "CurrentVerticalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, CurrentVerticalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentVerticalSpeed_MetaData), NewProp_CurrentVerticalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_VerticalSpeed = { "VerticalSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, VerticalSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VerticalSpeed_MetaData), NewProp_VerticalSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_TurnSpeed = { "TurnSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, TurnSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TurnSpeed_MetaData), NewProp_TurnSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_MaxRollAngle = { "MaxRollAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, MaxRollAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRollAngle_MetaData), NewProp_MaxRollAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_MaxPitchAngle = { "MaxPitchAngle", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, MaxPitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitchAngle_MetaData), NewProp_MaxPitchAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_PitchInterpSpeed = { "PitchInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, PitchInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PitchInterpSpeed_MetaData), NewProp_PitchInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_RollInterpSpeed = { "RollInterpSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, RollInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollInterpSpeed_MetaData), NewProp_RollInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_LiftFactor = { "LiftFactor", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, LiftFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiftFactor_MetaData), NewProp_LiftFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_DragCoefficient = { "DragCoefficient", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, DragCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DragCoefficient_MetaData), NewProp_DragCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirplane_Statics::NewProp_StallSpeed = { "StallSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAirplane, StallSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StallSpeed_MetaData), NewProp_StallSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAirplane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_PilotCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_StaticMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_TriggerBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_CurrentSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_Acceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_CurrentVerticalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_VerticalSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_TurnSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_MaxRollAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_MaxPitchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_PitchInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_RollInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_LiftFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_DragCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirplane_Statics::NewProp_StallSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirplane_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAirplane_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_assignment6,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAirplane_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAirplane_Statics::ClassParams = {
	&AAirplane::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAirplane_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAirplane_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAirplane_Statics::Class_MetaDataParams), Z_Construct_UClass_AAirplane_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAirplane()
{
	if (!Z_Registration_Info_UClass_AAirplane.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAirplane.OuterSingleton, Z_Construct_UClass_AAirplane_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAirplane.OuterSingleton;
}
template<> ASSIGNMENT6_API UClass* StaticClass<AAirplane>()
{
	return AAirplane::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAirplane);
AAirplane::~AAirplane() {}
// End Class AAirplane

// Begin Registration
struct Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_Airplane_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAirplane, AAirplane::StaticClass, TEXT("AAirplane"), &Z_Registration_Info_UClass_AAirplane, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAirplane), 2953523484U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_Airplane_h_3017786423(TEXT("/Script/assignment6"),
	Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_Airplane_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_assignment6_Source_assignment6_Public_Airplane_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTP_DllTest_generated_h
#error "DllTest.generated.h already included, missing '#pragma once' in DllTest.h"
#endif
#define TESTP_DllTest_generated_h

#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_SPARSE_DATA
#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHelloDll);


#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHelloDll);


#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADllTest(); \
	friend struct Z_Construct_UClass_ADllTest_Statics; \
public: \
	DECLARE_CLASS(ADllTest, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/testP"), NO_API) \
	DECLARE_SERIALIZER(ADllTest)


#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_INCLASS \
private: \
	static void StaticRegisterNativesADllTest(); \
	friend struct Z_Construct_UClass_ADllTest_Statics; \
public: \
	DECLARE_CLASS(ADllTest, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/testP"), NO_API) \
	DECLARE_SERIALIZER(ADllTest)


#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADllTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADllTest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADllTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADllTest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADllTest(ADllTest&&); \
	NO_API ADllTest(const ADllTest&); \
public:


#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADllTest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADllTest(ADllTest&&); \
	NO_API ADllTest(const ADllTest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADllTest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADllTest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADllTest)


#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_PRIVATE_PROPERTY_OFFSET
#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_12_PROLOG
#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_PRIVATE_PROPERTY_OFFSET \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_SPARSE_DATA \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_RPC_WRAPPERS \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_INCLASS \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_PRIVATE_PROPERTY_OFFSET \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_SPARSE_DATA \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_INCLASS_NO_PURE_DECLS \
	PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTP_API UClass* StaticClass<class ADllTest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PluginAndSlate_Plugins_testP_Source_testP_Public_DllTest_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

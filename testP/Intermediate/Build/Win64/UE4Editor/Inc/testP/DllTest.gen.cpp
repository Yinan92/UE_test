// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "testP/Public/DllTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDllTest() {}
// Cross Module References
	TESTP_API UClass* Z_Construct_UClass_ADllTest_NoRegister();
	TESTP_API UClass* Z_Construct_UClass_ADllTest();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_testP();
// End Cross Module References
	DEFINE_FUNCTION(ADllTest::execHelloDll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HelloDll();
		P_NATIVE_END;
	}
	void ADllTest::StaticRegisterNativesADllTest()
	{
		UClass* Class = ADllTest::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HelloDll", &ADllTest::execHelloDll },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADllTest_HelloDll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADllTest_HelloDll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dll" },
		{ "Comment", "//\xe5\xb0\x86\xe5\x87\xbd\xe6\x95\xb0\xe5\x85\xac\xe5\xbc\x80\n" },
		{ "ModuleRelativePath", "Public/DllTest.h" },
		{ "ToolTip", "\xe5\xb0\x86\xe5\x87\xbd\xe6\x95\xb0\xe5\x85\xac\xe5\xbc\x80" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADllTest_HelloDll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADllTest, nullptr, "HelloDll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADllTest_HelloDll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADllTest_HelloDll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADllTest_HelloDll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADllTest_HelloDll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADllTest_NoRegister()
	{
		return ADllTest::StaticClass();
	}
	struct Z_Construct_UClass_ADllTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADllTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_testP,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADllTest_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADllTest_HelloDll, "HelloDll" }, // 737128351
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADllTest_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "DllTest.h" },
		{ "ModuleRelativePath", "Public/DllTest.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADllTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADllTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADllTest_Statics::ClassParams = {
		&ADllTest::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADllTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADllTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADllTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADllTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADllTest, 79351628);
	template<> TESTP_API UClass* StaticClass<ADllTest>()
	{
		return ADllTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADllTest(Z_Construct_UClass_ADllTest, &ADllTest::StaticClass, TEXT("/Script/testP"), TEXT("ADllTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADllTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

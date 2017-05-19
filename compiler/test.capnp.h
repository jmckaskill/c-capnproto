#ifndef CAPN_D508EEBDC2DC42B8
#define CAPN_D508EEBDC2DC42B8
/* AUTO GENERATED - DO NOT EDIT */
#include <capnp_c.h>

#if CAPN_VERSION != 1
#error "version mismatch between capnp_c.h and generated code"
#endif

#ifndef capnp_nowarn
# ifdef __GNUC__
#  define capnp_nowarn __extension__
# else
#  define capnp_nowarn
# endif
#endif

#include "c++.capnp.h"
#include "c.capnp.h"

#ifdef __cplusplus
extern "C" {
#endif

struct TestAllTypes;
struct TestDefaults;
struct TestAnyPointer;
struct TestOutOfOrder;
struct TestUnion;
struct TestUnnamedUnion;
struct TestUnionInUnion;
struct TestGroups;
struct TestInterleavedGroups;
struct TestUnionDefaults;
struct TestNestedTypes;
struct TestNestedTypes_NestedStruct;
struct TestUsing;
struct TestLists;
struct TestLists_Struct0;
struct TestLists_Struct1;
struct TestLists_Struct8;
struct TestLists_Struct16;
struct TestLists_Struct32;
struct TestLists_Struct64;
struct TestLists_StructP;
struct TestLists_Struct0c;
struct TestLists_Struct1c;
struct TestLists_Struct8c;
struct TestLists_Struct16c;
struct TestLists_Struct32c;
struct TestLists_Struct64c;
struct TestLists_StructPc;
struct TestFieldZeroIsBit;
struct TestListDefaults;
struct TestLateUnion;
struct TestOldVersion;
struct TestNewVersion;
struct TestStructUnion;
struct TestStructUnion_SomeStruct;
struct TestPrintInlineStructs;
struct TestPrintInlineStructs_InlineStruct;
struct TestWholeFloatDefault;
struct TestEmptyStruct;
struct TestConstants;
struct TestSturdyRef;
struct TestSturdyRefHostId;
struct TestSturdyRefObjectId;
struct TestProvisionId;
struct TestRecipientId;
struct TestThirdPartyCapId;
struct TestJoinResult;
struct TestNameAnnotation;
struct TestNameAnnotation_NestedStruct;

typedef struct {capn_ptr p;} TestAllTypes_ptr;
typedef struct {capn_ptr p;} TestDefaults_ptr;
typedef struct {capn_ptr p;} TestAnyPointer_ptr;
typedef struct {capn_ptr p;} TestOutOfOrder_ptr;
typedef struct {capn_ptr p;} TestUnion_ptr;
typedef struct {capn_ptr p;} TestUnnamedUnion_ptr;
typedef struct {capn_ptr p;} TestUnionInUnion_ptr;
typedef struct {capn_ptr p;} TestGroups_ptr;
typedef struct {capn_ptr p;} TestInterleavedGroups_ptr;
typedef struct {capn_ptr p;} TestUnionDefaults_ptr;
typedef struct {capn_ptr p;} TestNestedTypes_ptr;
typedef struct {capn_ptr p;} TestNestedTypes_NestedStruct_ptr;
typedef struct {capn_ptr p;} TestUsing_ptr;
typedef struct {capn_ptr p;} TestLists_ptr;
typedef struct {capn_ptr p;} TestLists_Struct0_ptr;
typedef struct {capn_ptr p;} TestLists_Struct1_ptr;
typedef struct {capn_ptr p;} TestLists_Struct8_ptr;
typedef struct {capn_ptr p;} TestLists_Struct16_ptr;
typedef struct {capn_ptr p;} TestLists_Struct32_ptr;
typedef struct {capn_ptr p;} TestLists_Struct64_ptr;
typedef struct {capn_ptr p;} TestLists_StructP_ptr;
typedef struct {capn_ptr p;} TestLists_Struct0c_ptr;
typedef struct {capn_ptr p;} TestLists_Struct1c_ptr;
typedef struct {capn_ptr p;} TestLists_Struct8c_ptr;
typedef struct {capn_ptr p;} TestLists_Struct16c_ptr;
typedef struct {capn_ptr p;} TestLists_Struct32c_ptr;
typedef struct {capn_ptr p;} TestLists_Struct64c_ptr;
typedef struct {capn_ptr p;} TestLists_StructPc_ptr;
typedef struct {capn_ptr p;} TestFieldZeroIsBit_ptr;
typedef struct {capn_ptr p;} TestListDefaults_ptr;
typedef struct {capn_ptr p;} TestLateUnion_ptr;
typedef struct {capn_ptr p;} TestOldVersion_ptr;
typedef struct {capn_ptr p;} TestNewVersion_ptr;
typedef struct {capn_ptr p;} TestStructUnion_ptr;
typedef struct {capn_ptr p;} TestStructUnion_SomeStruct_ptr;
typedef struct {capn_ptr p;} TestPrintInlineStructs_ptr;
typedef struct {capn_ptr p;} TestPrintInlineStructs_InlineStruct_ptr;
typedef struct {capn_ptr p;} TestWholeFloatDefault_ptr;
typedef struct {capn_ptr p;} TestEmptyStruct_ptr;
typedef struct {capn_ptr p;} TestConstants_ptr;
typedef struct {capn_ptr p;} TestSturdyRef_ptr;
typedef struct {capn_ptr p;} TestSturdyRefHostId_ptr;
typedef struct {capn_ptr p;} TestSturdyRefObjectId_ptr;
typedef struct {capn_ptr p;} TestProvisionId_ptr;
typedef struct {capn_ptr p;} TestRecipientId_ptr;
typedef struct {capn_ptr p;} TestThirdPartyCapId_ptr;
typedef struct {capn_ptr p;} TestJoinResult_ptr;
typedef struct {capn_ptr p;} TestNameAnnotation_ptr;
typedef struct {capn_ptr p;} TestNameAnnotation_NestedStruct_ptr;

typedef struct {capn_ptr p;} TestAllTypes_list;
typedef struct {capn_ptr p;} TestDefaults_list;
typedef struct {capn_ptr p;} TestAnyPointer_list;
typedef struct {capn_ptr p;} TestOutOfOrder_list;
typedef struct {capn_ptr p;} TestUnion_list;
typedef struct {capn_ptr p;} TestUnnamedUnion_list;
typedef struct {capn_ptr p;} TestUnionInUnion_list;
typedef struct {capn_ptr p;} TestGroups_list;
typedef struct {capn_ptr p;} TestInterleavedGroups_list;
typedef struct {capn_ptr p;} TestUnionDefaults_list;
typedef struct {capn_ptr p;} TestNestedTypes_list;
typedef struct {capn_ptr p;} TestNestedTypes_NestedStruct_list;
typedef struct {capn_ptr p;} TestUsing_list;
typedef struct {capn_ptr p;} TestLists_list;
typedef struct {capn_ptr p;} TestLists_Struct0_list;
typedef struct {capn_ptr p;} TestLists_Struct1_list;
typedef struct {capn_ptr p;} TestLists_Struct8_list;
typedef struct {capn_ptr p;} TestLists_Struct16_list;
typedef struct {capn_ptr p;} TestLists_Struct32_list;
typedef struct {capn_ptr p;} TestLists_Struct64_list;
typedef struct {capn_ptr p;} TestLists_StructP_list;
typedef struct {capn_ptr p;} TestLists_Struct0c_list;
typedef struct {capn_ptr p;} TestLists_Struct1c_list;
typedef struct {capn_ptr p;} TestLists_Struct8c_list;
typedef struct {capn_ptr p;} TestLists_Struct16c_list;
typedef struct {capn_ptr p;} TestLists_Struct32c_list;
typedef struct {capn_ptr p;} TestLists_Struct64c_list;
typedef struct {capn_ptr p;} TestLists_StructPc_list;
typedef struct {capn_ptr p;} TestFieldZeroIsBit_list;
typedef struct {capn_ptr p;} TestListDefaults_list;
typedef struct {capn_ptr p;} TestLateUnion_list;
typedef struct {capn_ptr p;} TestOldVersion_list;
typedef struct {capn_ptr p;} TestNewVersion_list;
typedef struct {capn_ptr p;} TestStructUnion_list;
typedef struct {capn_ptr p;} TestStructUnion_SomeStruct_list;
typedef struct {capn_ptr p;} TestPrintInlineStructs_list;
typedef struct {capn_ptr p;} TestPrintInlineStructs_InlineStruct_list;
typedef struct {capn_ptr p;} TestWholeFloatDefault_list;
typedef struct {capn_ptr p;} TestEmptyStruct_list;
typedef struct {capn_ptr p;} TestConstants_list;
typedef struct {capn_ptr p;} TestSturdyRef_list;
typedef struct {capn_ptr p;} TestSturdyRefHostId_list;
typedef struct {capn_ptr p;} TestSturdyRefObjectId_list;
typedef struct {capn_ptr p;} TestProvisionId_list;
typedef struct {capn_ptr p;} TestRecipientId_list;
typedef struct {capn_ptr p;} TestThirdPartyCapId_list;
typedef struct {capn_ptr p;} TestJoinResult_list;
typedef struct {capn_ptr p;} TestNameAnnotation_list;
typedef struct {capn_ptr p;} TestNameAnnotation_NestedStruct_list;

enum TestEnum {
	TestEnum_foo = 0,
	TestEnum_bar = 1,
	TestEnum_baz = 2,
	TestEnum_qux = 3,
	TestEnum_quux = 4,
	TestEnum_corge = 5,
	TestEnum_grault = 6,
	TestEnum_garply = 7
};

enum TestNestedTypes_NestedEnum {
	TestNestedTypes_NestedEnum_foo = 0,
	TestNestedTypes_NestedEnum_bar = 1
};

enum TestNestedTypes_NestedStruct_NestedEnum {
	TestNestedTypes_NestedStruct_NestedEnum_baz = 0,
	TestNestedTypes_NestedStruct_NestedEnum_qux = 1,
	TestNestedTypes_NestedStruct_NestedEnum_quux = 2
};

enum TestSturdyRefObjectId_Tag {
	TestSturdyRefObjectId_Tag_testInterface = 0,
	TestSturdyRefObjectId_Tag_testExtends = 1,
	TestSturdyRefObjectId_Tag_testPipeline = 2,
	TestSturdyRefObjectId_Tag_testTailCallee = 3,
	TestSturdyRefObjectId_Tag_testTailCaller = 4,
	TestSturdyRefObjectId_Tag_testMoreStuff = 5
};

enum TestNameAnnotation_BadlyNamedEnum {
	TestNameAnnotation_BadlyNamedEnum_foo = 0,
	TestNameAnnotation_BadlyNamedEnum_bar = 1,
	TestNameAnnotation_BadlyNamedEnum_baz = 2
};

enum TestNameAnnotation_NestedStruct_DeeplyNestedEnum {
	TestNameAnnotation_NestedStruct_DeeplyNestedEnum_quux = 0,
	TestNameAnnotation_NestedStruct_DeeplyNestedEnum_corge = 1,
	TestNameAnnotation_NestedStruct_DeeplyNestedEnum_grault = 2
};
extern union capn_conv_f32 TestWholeFloatDefault_constant;
extern union capn_conv_f32 TestWholeFloatDefault_bigConstant;
extern unsigned TestConstants_boolConst;
extern int8_t TestConstants_int8Const;
extern int16_t TestConstants_int16Const;
extern int32_t TestConstants_int32Const;
extern int64_t TestConstants_int64Const;
extern uint8_t TestConstants_uint8Const;
extern uint16_t TestConstants_uint16Const;
extern uint32_t TestConstants_uint32Const;
extern uint64_t TestConstants_uint64Const;
extern union capn_conv_f32 TestConstants_float32Const;
extern union capn_conv_f64 TestConstants_float64Const;
extern capn_text TestConstants_textConst;
extern capn_data TestConstants_dataConst;
extern TestAllTypes_ptr TestConstants_structConst;
extern enum TestEnum TestConstants_enumConst;
extern capn_ptr TestConstants_voidListConst;
extern capn_list1 TestConstants_boolListConst;
extern capn_list8 TestConstants_int8ListConst;
extern capn_list16 TestConstants_int16ListConst;
extern capn_list32 TestConstants_int32ListConst;
extern capn_list64 TestConstants_int64ListConst;
extern capn_list8 TestConstants_uint8ListConst;
extern capn_list16 TestConstants_uint16ListConst;
extern capn_list32 TestConstants_uint32ListConst;
extern capn_list64 TestConstants_uint64ListConst;
extern capn_list32 TestConstants_float32ListConst;
extern capn_list64 TestConstants_float64ListConst;
extern capn_ptr TestConstants_textListConst;
extern capn_ptr TestConstants_dataListConst;
extern TestAllTypes_list TestConstants_structListConst;
extern capn_list16 TestConstants_enumListConst;
extern uint32_t globalInt;
extern capn_text globalText;
extern TestAllTypes_ptr globalStruct;
extern TestPrintInlineStructs_ptr globalPrintableStruct;
extern TestAllTypes_ptr derivedConstant;

struct TestAllTypes {
	unsigned boolField : 1;
	int8_t int8Field;
	int16_t int16Field;
	int32_t int32Field;
	int64_t int64Field;
	uint8_t uInt8Field;
	uint16_t uInt16Field;
	uint32_t uInt32Field;
	uint64_t uInt64Field;
	float float32Field;
	double float64Field;
	capn_text textField;
	capn_data dataField;
	TestAllTypes_ptr structField;
	enum TestEnum enumField;
	capn_ptr voidList;
	capn_list1 boolList;
	capn_list8 int8List;
	capn_list16 int16List;
	capn_list32 int32List;
	capn_list64 int64List;
	capn_list8 uInt8List;
	capn_list16 uInt16List;
	capn_list32 uInt32List;
	capn_list64 uInt64List;
	capn_list32 float32List;
	capn_list64 float64List;
	capn_ptr textList;
	capn_ptr dataList;
	TestAllTypes_list structList;
	capn_list16 enumList;
	capn_ptr interfaceList;
};

static const size_t TestAllTypes_word_count = 6;

static const size_t TestAllTypes_pointer_count = 20;

static const size_t TestAllTypes_struct_bytes_count = 208;

unsigned TestAllTypes_get_boolField(TestAllTypes_ptr p);

int8_t TestAllTypes_get_int8Field(TestAllTypes_ptr p);

int16_t TestAllTypes_get_int16Field(TestAllTypes_ptr p);

int32_t TestAllTypes_get_int32Field(TestAllTypes_ptr p);

int64_t TestAllTypes_get_int64Field(TestAllTypes_ptr p);

uint8_t TestAllTypes_get_uInt8Field(TestAllTypes_ptr p);

uint16_t TestAllTypes_get_uInt16Field(TestAllTypes_ptr p);

uint32_t TestAllTypes_get_uInt32Field(TestAllTypes_ptr p);

uint64_t TestAllTypes_get_uInt64Field(TestAllTypes_ptr p);

float TestAllTypes_get_float32Field(TestAllTypes_ptr p);

double TestAllTypes_get_float64Field(TestAllTypes_ptr p);

capn_text TestAllTypes_get_textField(TestAllTypes_ptr p);

capn_data TestAllTypes_get_dataField(TestAllTypes_ptr p);

TestAllTypes_ptr TestAllTypes_get_structField(TestAllTypes_ptr p);

enum TestEnum TestAllTypes_get_enumField(TestAllTypes_ptr p);

capn_ptr TestAllTypes_get_voidList(TestAllTypes_ptr p);

capn_list1 TestAllTypes_get_boolList(TestAllTypes_ptr p);

capn_list8 TestAllTypes_get_int8List(TestAllTypes_ptr p);

capn_list16 TestAllTypes_get_int16List(TestAllTypes_ptr p);

capn_list32 TestAllTypes_get_int32List(TestAllTypes_ptr p);

capn_list64 TestAllTypes_get_int64List(TestAllTypes_ptr p);

capn_list8 TestAllTypes_get_uInt8List(TestAllTypes_ptr p);

capn_list16 TestAllTypes_get_uInt16List(TestAllTypes_ptr p);

capn_list32 TestAllTypes_get_uInt32List(TestAllTypes_ptr p);

capn_list64 TestAllTypes_get_uInt64List(TestAllTypes_ptr p);

capn_list32 TestAllTypes_get_float32List(TestAllTypes_ptr p);

capn_list64 TestAllTypes_get_float64List(TestAllTypes_ptr p);

capn_ptr TestAllTypes_get_textList(TestAllTypes_ptr p);

capn_ptr TestAllTypes_get_dataList(TestAllTypes_ptr p);

TestAllTypes_list TestAllTypes_get_structList(TestAllTypes_ptr p);

capn_list16 TestAllTypes_get_enumList(TestAllTypes_ptr p);

capn_ptr TestAllTypes_get_interfaceList(TestAllTypes_ptr p);

void TestAllTypes_set_boolField(TestAllTypes_ptr p, unsigned boolField);

void TestAllTypes_set_int8Field(TestAllTypes_ptr p, int8_t int8Field);

void TestAllTypes_set_int16Field(TestAllTypes_ptr p, int16_t int16Field);

void TestAllTypes_set_int32Field(TestAllTypes_ptr p, int32_t int32Field);

void TestAllTypes_set_int64Field(TestAllTypes_ptr p, int64_t int64Field);

void TestAllTypes_set_uInt8Field(TestAllTypes_ptr p, uint8_t uInt8Field);

void TestAllTypes_set_uInt16Field(TestAllTypes_ptr p, uint16_t uInt16Field);

void TestAllTypes_set_uInt32Field(TestAllTypes_ptr p, uint32_t uInt32Field);

void TestAllTypes_set_uInt64Field(TestAllTypes_ptr p, uint64_t uInt64Field);

void TestAllTypes_set_float32Field(TestAllTypes_ptr p, float float32Field);

void TestAllTypes_set_float64Field(TestAllTypes_ptr p, double float64Field);

void TestAllTypes_set_textField(TestAllTypes_ptr p, capn_text textField);

void TestAllTypes_set_dataField(TestAllTypes_ptr p, capn_data dataField);

void TestAllTypes_set_structField(TestAllTypes_ptr p, TestAllTypes_ptr structField);

void TestAllTypes_set_enumField(TestAllTypes_ptr p, enum TestEnum enumField);

void TestAllTypes_set_voidList(TestAllTypes_ptr p, capn_ptr voidList);

void TestAllTypes_set_boolList(TestAllTypes_ptr p, capn_list1 boolList);

void TestAllTypes_set_int8List(TestAllTypes_ptr p, capn_list8 int8List);

void TestAllTypes_set_int16List(TestAllTypes_ptr p, capn_list16 int16List);

void TestAllTypes_set_int32List(TestAllTypes_ptr p, capn_list32 int32List);

void TestAllTypes_set_int64List(TestAllTypes_ptr p, capn_list64 int64List);

void TestAllTypes_set_uInt8List(TestAllTypes_ptr p, capn_list8 uInt8List);

void TestAllTypes_set_uInt16List(TestAllTypes_ptr p, capn_list16 uInt16List);

void TestAllTypes_set_uInt32List(TestAllTypes_ptr p, capn_list32 uInt32List);

void TestAllTypes_set_uInt64List(TestAllTypes_ptr p, capn_list64 uInt64List);

void TestAllTypes_set_float32List(TestAllTypes_ptr p, capn_list32 float32List);

void TestAllTypes_set_float64List(TestAllTypes_ptr p, capn_list64 float64List);

void TestAllTypes_set_textList(TestAllTypes_ptr p, capn_ptr textList);

void TestAllTypes_set_dataList(TestAllTypes_ptr p, capn_ptr dataList);

void TestAllTypes_set_structList(TestAllTypes_ptr p, TestAllTypes_list structList);

void TestAllTypes_set_enumList(TestAllTypes_ptr p, capn_list16 enumList);

void TestAllTypes_set_interfaceList(TestAllTypes_ptr p, capn_ptr interfaceList);

struct TestDefaults {
	unsigned boolField : 1;
	int8_t int8Field;
	int16_t int16Field;
	int32_t int32Field;
	int64_t int64Field;
	uint8_t uInt8Field;
	uint16_t uInt16Field;
	uint32_t uInt32Field;
	uint64_t uInt64Field;
	float float32Field;
	double float64Field;
	capn_text textField;
	capn_data dataField;
	TestAllTypes_ptr structField;
	enum TestEnum enumField;
	capn_ptr voidList;
	capn_list1 boolList;
	capn_list8 int8List;
	capn_list16 int16List;
	capn_list32 int32List;
	capn_list64 int64List;
	capn_list8 uInt8List;
	capn_list16 uInt16List;
	capn_list32 uInt32List;
	capn_list64 uInt64List;
	capn_list32 float32List;
	capn_list64 float64List;
	capn_ptr textList;
	capn_ptr dataList;
	TestAllTypes_list structList;
	capn_list16 enumList;
	capn_ptr interfaceList;
};

static const size_t TestDefaults_word_count = 6;

static const size_t TestDefaults_pointer_count = 20;

static const size_t TestDefaults_struct_bytes_count = 208;

unsigned TestDefaults_get_boolField(TestDefaults_ptr p);

int8_t TestDefaults_get_int8Field(TestDefaults_ptr p);

int16_t TestDefaults_get_int16Field(TestDefaults_ptr p);

int32_t TestDefaults_get_int32Field(TestDefaults_ptr p);

int64_t TestDefaults_get_int64Field(TestDefaults_ptr p);

uint8_t TestDefaults_get_uInt8Field(TestDefaults_ptr p);

uint16_t TestDefaults_get_uInt16Field(TestDefaults_ptr p);

uint32_t TestDefaults_get_uInt32Field(TestDefaults_ptr p);

uint64_t TestDefaults_get_uInt64Field(TestDefaults_ptr p);

float TestDefaults_get_float32Field(TestDefaults_ptr p);

double TestDefaults_get_float64Field(TestDefaults_ptr p);

capn_text TestDefaults_get_textField(TestDefaults_ptr p);

capn_data TestDefaults_get_dataField(TestDefaults_ptr p);

TestAllTypes_ptr TestDefaults_get_structField(TestDefaults_ptr p);

enum TestEnum TestDefaults_get_enumField(TestDefaults_ptr p);

capn_ptr TestDefaults_get_voidList(TestDefaults_ptr p);

capn_list1 TestDefaults_get_boolList(TestDefaults_ptr p);

capn_list8 TestDefaults_get_int8List(TestDefaults_ptr p);

capn_list16 TestDefaults_get_int16List(TestDefaults_ptr p);

capn_list32 TestDefaults_get_int32List(TestDefaults_ptr p);

capn_list64 TestDefaults_get_int64List(TestDefaults_ptr p);

capn_list8 TestDefaults_get_uInt8List(TestDefaults_ptr p);

capn_list16 TestDefaults_get_uInt16List(TestDefaults_ptr p);

capn_list32 TestDefaults_get_uInt32List(TestDefaults_ptr p);

capn_list64 TestDefaults_get_uInt64List(TestDefaults_ptr p);

capn_list32 TestDefaults_get_float32List(TestDefaults_ptr p);

capn_list64 TestDefaults_get_float64List(TestDefaults_ptr p);

capn_ptr TestDefaults_get_textList(TestDefaults_ptr p);

capn_ptr TestDefaults_get_dataList(TestDefaults_ptr p);

TestAllTypes_list TestDefaults_get_structList(TestDefaults_ptr p);

capn_list16 TestDefaults_get_enumList(TestDefaults_ptr p);

capn_ptr TestDefaults_get_interfaceList(TestDefaults_ptr p);

void TestDefaults_set_boolField(TestDefaults_ptr p, unsigned boolField);

void TestDefaults_set_int8Field(TestDefaults_ptr p, int8_t int8Field);

void TestDefaults_set_int16Field(TestDefaults_ptr p, int16_t int16Field);

void TestDefaults_set_int32Field(TestDefaults_ptr p, int32_t int32Field);

void TestDefaults_set_int64Field(TestDefaults_ptr p, int64_t int64Field);

void TestDefaults_set_uInt8Field(TestDefaults_ptr p, uint8_t uInt8Field);

void TestDefaults_set_uInt16Field(TestDefaults_ptr p, uint16_t uInt16Field);

void TestDefaults_set_uInt32Field(TestDefaults_ptr p, uint32_t uInt32Field);

void TestDefaults_set_uInt64Field(TestDefaults_ptr p, uint64_t uInt64Field);

void TestDefaults_set_float32Field(TestDefaults_ptr p, float float32Field);

void TestDefaults_set_float64Field(TestDefaults_ptr p, double float64Field);

void TestDefaults_set_textField(TestDefaults_ptr p, capn_text textField);

void TestDefaults_set_dataField(TestDefaults_ptr p, capn_data dataField);

void TestDefaults_set_structField(TestDefaults_ptr p, TestAllTypes_ptr structField);

void TestDefaults_set_enumField(TestDefaults_ptr p, enum TestEnum enumField);

void TestDefaults_set_voidList(TestDefaults_ptr p, capn_ptr voidList);

void TestDefaults_set_boolList(TestDefaults_ptr p, capn_list1 boolList);

void TestDefaults_set_int8List(TestDefaults_ptr p, capn_list8 int8List);

void TestDefaults_set_int16List(TestDefaults_ptr p, capn_list16 int16List);

void TestDefaults_set_int32List(TestDefaults_ptr p, capn_list32 int32List);

void TestDefaults_set_int64List(TestDefaults_ptr p, capn_list64 int64List);

void TestDefaults_set_uInt8List(TestDefaults_ptr p, capn_list8 uInt8List);

void TestDefaults_set_uInt16List(TestDefaults_ptr p, capn_list16 uInt16List);

void TestDefaults_set_uInt32List(TestDefaults_ptr p, capn_list32 uInt32List);

void TestDefaults_set_uInt64List(TestDefaults_ptr p, capn_list64 uInt64List);

void TestDefaults_set_float32List(TestDefaults_ptr p, capn_list32 float32List);

void TestDefaults_set_float64List(TestDefaults_ptr p, capn_list64 float64List);

void TestDefaults_set_textList(TestDefaults_ptr p, capn_ptr textList);

void TestDefaults_set_dataList(TestDefaults_ptr p, capn_ptr dataList);

void TestDefaults_set_structList(TestDefaults_ptr p, TestAllTypes_list structList);

void TestDefaults_set_enumList(TestDefaults_ptr p, capn_list16 enumList);

void TestDefaults_set_interfaceList(TestDefaults_ptr p, capn_ptr interfaceList);

struct TestAnyPointer {
	capn_ptr anyPointerField;
};

static const size_t TestAnyPointer_word_count = 0;

static const size_t TestAnyPointer_pointer_count = 1;

static const size_t TestAnyPointer_struct_bytes_count = 8;

capn_ptr TestAnyPointer_get_anyPointerField(TestAnyPointer_ptr p);

void TestAnyPointer_set_anyPointerField(TestAnyPointer_ptr p, capn_ptr anyPointerField);

struct TestOutOfOrder {
	capn_text foo;
	capn_text bar;
	capn_text baz;
	capn_text qux;
	capn_text quux;
	capn_text corge;
	capn_text grault;
	capn_text garply;
	capn_text waldo;
};

static const size_t TestOutOfOrder_word_count = 0;

static const size_t TestOutOfOrder_pointer_count = 9;

static const size_t TestOutOfOrder_struct_bytes_count = 72;

capn_text TestOutOfOrder_get_foo(TestOutOfOrder_ptr p);

capn_text TestOutOfOrder_get_bar(TestOutOfOrder_ptr p);

capn_text TestOutOfOrder_get_baz(TestOutOfOrder_ptr p);

capn_text TestOutOfOrder_get_qux(TestOutOfOrder_ptr p);

capn_text TestOutOfOrder_get_quux(TestOutOfOrder_ptr p);

capn_text TestOutOfOrder_get_corge(TestOutOfOrder_ptr p);

capn_text TestOutOfOrder_get_grault(TestOutOfOrder_ptr p);

capn_text TestOutOfOrder_get_garply(TestOutOfOrder_ptr p);

capn_text TestOutOfOrder_get_waldo(TestOutOfOrder_ptr p);

void TestOutOfOrder_set_foo(TestOutOfOrder_ptr p, capn_text foo);

void TestOutOfOrder_set_bar(TestOutOfOrder_ptr p, capn_text bar);

void TestOutOfOrder_set_baz(TestOutOfOrder_ptr p, capn_text baz);

void TestOutOfOrder_set_qux(TestOutOfOrder_ptr p, capn_text qux);

void TestOutOfOrder_set_quux(TestOutOfOrder_ptr p, capn_text quux);

void TestOutOfOrder_set_corge(TestOutOfOrder_ptr p, capn_text corge);

void TestOutOfOrder_set_grault(TestOutOfOrder_ptr p, capn_text grault);

void TestOutOfOrder_set_garply(TestOutOfOrder_ptr p, capn_text garply);

void TestOutOfOrder_set_waldo(TestOutOfOrder_ptr p, capn_text waldo);
enum TestUnion_union0_which {
	TestUnion_union0_u0f0s0 = 0,
	TestUnion_union0_u0f0s1 = 1,
	TestUnion_union0_u0f0s8 = 2,
	TestUnion_union0_u0f0s16 = 3,
	TestUnion_union0_u0f0s32 = 4,
	TestUnion_union0_u0f0s64 = 5,
	TestUnion_union0_u0f0sp = 6,
	TestUnion_union0_u0f1s0 = 7,
	TestUnion_union0_u0f1s1 = 8,
	TestUnion_union0_u0f1s8 = 9,
	TestUnion_union0_u0f1s16 = 10,
	TestUnion_union0_u0f1s32 = 11,
	TestUnion_union0_u0f1s64 = 12,
	TestUnion_union0_u0f1sp = 13
};
enum TestUnion_union1_which {
	TestUnion_union1_u1f0s0 = 0,
	TestUnion_union1_u1f0s1 = 1,
	TestUnion_union1_u1f1s1 = 2,
	TestUnion_union1_u1f0s8 = 3,
	TestUnion_union1_u1f1s8 = 4,
	TestUnion_union1_u1f0s16 = 5,
	TestUnion_union1_u1f1s16 = 6,
	TestUnion_union1_u1f0s32 = 7,
	TestUnion_union1_u1f1s32 = 8,
	TestUnion_union1_u1f0s64 = 9,
	TestUnion_union1_u1f1s64 = 10,
	TestUnion_union1_u1f0sp = 11,
	TestUnion_union1_u1f1sp = 12,
	TestUnion_union1_u1f2s0 = 13,
	TestUnion_union1_u1f2s1 = 14,
	TestUnion_union1_u1f2s8 = 15,
	TestUnion_union1_u1f2s16 = 16,
	TestUnion_union1_u1f2s32 = 17,
	TestUnion_union1_u1f2s64 = 18,
	TestUnion_union1_u1f2sp = 19
};
enum TestUnion_union2_which {
	TestUnion_union2_u2f0s64 = 4,
	TestUnion_union2_u2f0s32 = 3,
	TestUnion_union2_u2f0s16 = 2,
	TestUnion_union2_u2f0s8 = 1,
	TestUnion_union2_u2f0s1 = 0
};
enum TestUnion_union3_which {
	TestUnion_union3_u3f0s64 = 4,
	TestUnion_union3_u3f0s32 = 3,
	TestUnion_union3_u3f0s16 = 2,
	TestUnion_union3_u3f0s8 = 1,
	TestUnion_union3_u3f0s1 = 0
};

struct TestUnion {
	enum TestUnion_union0_which union0_which;
	capnp_nowarn union {
		unsigned u0f0s1 : 1;
		int8_t u0f0s8;
		int16_t u0f0s16;
		int32_t u0f0s32;
		int64_t u0f0s64;
		capn_text u0f0sp;
		unsigned u0f1s1 : 1;
		int8_t u0f1s8;
		int16_t u0f1s16;
		int32_t u0f1s32;
		int64_t u0f1s64;
		capn_text u0f1sp;
	} union0;
	unsigned bit0 : 1;
	enum TestUnion_union1_which union1_which;
	capnp_nowarn union {
		unsigned u1f0s1 : 1;
		unsigned u1f1s1 : 1;
		int8_t u1f0s8;
		int8_t u1f1s8;
		int16_t u1f0s16;
		int16_t u1f1s16;
		int32_t u1f0s32;
		int32_t u1f1s32;
		int64_t u1f0s64;
		int64_t u1f1s64;
		capn_text u1f0sp;
		capn_text u1f1sp;
		unsigned u1f2s1 : 1;
		int8_t u1f2s8;
		int16_t u1f2s16;
		int32_t u1f2s32;
		int64_t u1f2s64;
		capn_text u1f2sp;
	} union1;
	unsigned bit2 : 1;
	unsigned bit3 : 1;
	unsigned bit4 : 1;
	unsigned bit5 : 1;
	unsigned bit6 : 1;
	unsigned bit7 : 1;
	enum TestUnion_union2_which union2_which;
	capnp_nowarn union {
		int64_t u2f0s64;
		int32_t u2f0s32;
		int16_t u2f0s16;
		int8_t u2f0s8;
		unsigned u2f0s1 : 1;
	} union2;
	enum TestUnion_union3_which union3_which;
	capnp_nowarn union {
		int64_t u3f0s64;
		int32_t u3f0s32;
		int16_t u3f0s16;
		int8_t u3f0s8;
		unsigned u3f0s1 : 1;
	} union3;
	uint8_t byte0;
};

static const size_t TestUnion_word_count = 8;

static const size_t TestUnion_pointer_count = 2;

static const size_t TestUnion_struct_bytes_count = 80;

unsigned TestUnion_get_bit0(TestUnion_ptr p);

unsigned TestUnion_get_bit2(TestUnion_ptr p);

unsigned TestUnion_get_bit3(TestUnion_ptr p);

unsigned TestUnion_get_bit4(TestUnion_ptr p);

unsigned TestUnion_get_bit5(TestUnion_ptr p);

unsigned TestUnion_get_bit6(TestUnion_ptr p);

unsigned TestUnion_get_bit7(TestUnion_ptr p);

uint8_t TestUnion_get_byte0(TestUnion_ptr p);

void TestUnion_set_bit0(TestUnion_ptr p, unsigned bit0);

void TestUnion_set_bit2(TestUnion_ptr p, unsigned bit2);

void TestUnion_set_bit3(TestUnion_ptr p, unsigned bit3);

void TestUnion_set_bit4(TestUnion_ptr p, unsigned bit4);

void TestUnion_set_bit5(TestUnion_ptr p, unsigned bit5);

void TestUnion_set_bit6(TestUnion_ptr p, unsigned bit6);

void TestUnion_set_bit7(TestUnion_ptr p, unsigned bit7);

void TestUnion_set_byte0(TestUnion_ptr p, uint8_t byte0);
enum TestUnnamedUnion_which {
	TestUnnamedUnion_foo = 0,
	TestUnnamedUnion_bar = 1
};

struct TestUnnamedUnion {
	capn_text before;
	enum TestUnnamedUnion_which which;
	capnp_nowarn union {
		uint16_t foo;
		uint32_t bar;
	};
	uint16_t middle;
	capn_text after;
};

static const size_t TestUnnamedUnion_word_count = 2;

static const size_t TestUnnamedUnion_pointer_count = 2;

static const size_t TestUnnamedUnion_struct_bytes_count = 32;

capn_text TestUnnamedUnion_get_before(TestUnnamedUnion_ptr p);

void TestUnnamedUnion_set_before(TestUnnamedUnion_ptr p, capn_text before);
enum TestUnionInUnion_outer_inner_which {
	TestUnionInUnion_outer_inner_foo = 0,
	TestUnionInUnion_outer_inner_bar = 1
};
enum TestUnionInUnion_outer_which {
	TestUnionInUnion_outer_inner = 0,
	TestUnionInUnion_outer_baz = 1
};

struct TestUnionInUnion {
	enum TestUnionInUnion_outer_which outer_which;
	capnp_nowarn union {
		enum TestUnionInUnion_outer_inner_which inner_which;
		capnp_nowarn union {
			int32_t foo;
			int32_t bar;
		} inner;
		int32_t baz;
	} outer;
};

static const size_t TestUnionInUnion_word_count = 2;

static const size_t TestUnionInUnion_pointer_count = 0;

static const size_t TestUnionInUnion_struct_bytes_count = 16;
enum TestGroups_groups_which {
	TestGroups_groups_foo = 0,
	TestGroups_groups_bar = 2,
	TestGroups_groups_baz = 1
};

struct TestGroups {
	enum TestGroups_groups_which groups_which;
	capnp_nowarn union {
		capnp_nowarn struct {
			int32_t corge;
			int64_t grault;
			capn_text garply;
		} foo;
		capnp_nowarn struct {
			int32_t corge;
			capn_text grault;
			int64_t garply;
		} bar;
		capnp_nowarn struct {
			int32_t corge;
			capn_text grault;
			capn_text garply;
		} baz;
	} groups;
};

static const size_t TestGroups_word_count = 2;

static const size_t TestGroups_pointer_count = 2;

static const size_t TestGroups_struct_bytes_count = 32;
enum TestInterleavedGroups_group1_which {
	TestInterleavedGroups_group1_qux = 0,
	TestInterleavedGroups_group1_corge = 1,
	TestInterleavedGroups_group1_fred = 2
};
enum TestInterleavedGroups_group2_which {
	TestInterleavedGroups_group2_qux = 0,
	TestInterleavedGroups_group2_corge = 1,
	TestInterleavedGroups_group2_fred = 2
};

struct TestInterleavedGroups {
	capnp_nowarn struct {
		uint32_t foo;
		uint64_t bar;
		enum TestInterleavedGroups_group1_which which;
		capnp_nowarn union {
			uint16_t qux;
			capnp_nowarn struct {
				uint64_t grault;
				uint16_t garply;
				capn_text plugh;
				capn_text xyzzy;
			} corge;
			capn_text fred;
		};
		capn_text waldo;
	} group1;
	capnp_nowarn struct {
		uint32_t foo;
		uint64_t bar;
		enum TestInterleavedGroups_group2_which which;
		capnp_nowarn union {
			uint16_t qux;
			capnp_nowarn struct {
				uint64_t grault;
				uint16_t garply;
				capn_text plugh;
				capn_text xyzzy;
			} corge;
			capn_text fred;
		};
		capn_text waldo;
	} group2;
};

static const size_t TestInterleavedGroups_word_count = 6;

static const size_t TestInterleavedGroups_pointer_count = 6;

static const size_t TestInterleavedGroups_struct_bytes_count = 96;

struct TestUnionDefaults {
	TestUnion_ptr s16s8s64s8Set;
	TestUnion_ptr s0sps1s32Set;
	TestUnnamedUnion_ptr unnamed1;
	TestUnnamedUnion_ptr unnamed2;
};

static const size_t TestUnionDefaults_word_count = 0;

static const size_t TestUnionDefaults_pointer_count = 4;

static const size_t TestUnionDefaults_struct_bytes_count = 32;

TestUnion_ptr TestUnionDefaults_get_s16s8s64s8Set(TestUnionDefaults_ptr p);

TestUnion_ptr TestUnionDefaults_get_s0sps1s32Set(TestUnionDefaults_ptr p);

TestUnnamedUnion_ptr TestUnionDefaults_get_unnamed1(TestUnionDefaults_ptr p);

TestUnnamedUnion_ptr TestUnionDefaults_get_unnamed2(TestUnionDefaults_ptr p);

void TestUnionDefaults_set_s16s8s64s8Set(TestUnionDefaults_ptr p, TestUnion_ptr s16s8s64s8Set);

void TestUnionDefaults_set_s0sps1s32Set(TestUnionDefaults_ptr p, TestUnion_ptr s0sps1s32Set);

void TestUnionDefaults_set_unnamed1(TestUnionDefaults_ptr p, TestUnnamedUnion_ptr unnamed1);

void TestUnionDefaults_set_unnamed2(TestUnionDefaults_ptr p, TestUnnamedUnion_ptr unnamed2);

struct TestNestedTypes {
	TestNestedTypes_NestedStruct_ptr nestedStruct;
	enum TestNestedTypes_NestedEnum outerNestedEnum;
	enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum;
};

static const size_t TestNestedTypes_word_count = 1;

static const size_t TestNestedTypes_pointer_count = 1;

static const size_t TestNestedTypes_struct_bytes_count = 16;

TestNestedTypes_NestedStruct_ptr TestNestedTypes_get_nestedStruct(TestNestedTypes_ptr p);

enum TestNestedTypes_NestedEnum TestNestedTypes_get_outerNestedEnum(TestNestedTypes_ptr p);

enum TestNestedTypes_NestedStruct_NestedEnum TestNestedTypes_get_innerNestedEnum(TestNestedTypes_ptr p);

void TestNestedTypes_set_nestedStruct(TestNestedTypes_ptr p, TestNestedTypes_NestedStruct_ptr nestedStruct);

void TestNestedTypes_set_outerNestedEnum(TestNestedTypes_ptr p, enum TestNestedTypes_NestedEnum outerNestedEnum);

void TestNestedTypes_set_innerNestedEnum(TestNestedTypes_ptr p, enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum);

struct TestNestedTypes_NestedStruct {
	enum TestNestedTypes_NestedEnum outerNestedEnum;
	enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum;
};

static const size_t TestNestedTypes_NestedStruct_word_count = 1;

static const size_t TestNestedTypes_NestedStruct_pointer_count = 0;

static const size_t TestNestedTypes_NestedStruct_struct_bytes_count = 8;

enum TestNestedTypes_NestedEnum TestNestedTypes_NestedStruct_get_outerNestedEnum(TestNestedTypes_NestedStruct_ptr p);

enum TestNestedTypes_NestedStruct_NestedEnum TestNestedTypes_NestedStruct_get_innerNestedEnum(TestNestedTypes_NestedStruct_ptr p);

void TestNestedTypes_NestedStruct_set_outerNestedEnum(TestNestedTypes_NestedStruct_ptr p, enum TestNestedTypes_NestedEnum outerNestedEnum);

void TestNestedTypes_NestedStruct_set_innerNestedEnum(TestNestedTypes_NestedStruct_ptr p, enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum);

struct TestUsing {
	enum TestNestedTypes_NestedEnum outerNestedEnum;
	enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum;
};

static const size_t TestUsing_word_count = 1;

static const size_t TestUsing_pointer_count = 0;

static const size_t TestUsing_struct_bytes_count = 8;

enum TestNestedTypes_NestedEnum TestUsing_get_outerNestedEnum(TestUsing_ptr p);

enum TestNestedTypes_NestedStruct_NestedEnum TestUsing_get_innerNestedEnum(TestUsing_ptr p);

void TestUsing_set_outerNestedEnum(TestUsing_ptr p, enum TestNestedTypes_NestedEnum outerNestedEnum);

void TestUsing_set_innerNestedEnum(TestUsing_ptr p, enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum);

struct TestLists {
	TestLists_Struct0_list list0;
	TestLists_Struct1_list list1;
	TestLists_Struct8_list list8;
	TestLists_Struct16_list list16;
	TestLists_Struct32_list list32;
	TestLists_Struct64_list list64;
	TestLists_StructP_list listP;
	capn_ptr int32ListList;
	capn_ptr textListList;
	capn_ptr structListList;
};

static const size_t TestLists_word_count = 0;

static const size_t TestLists_pointer_count = 10;

static const size_t TestLists_struct_bytes_count = 80;

TestLists_Struct0_list TestLists_get_list0(TestLists_ptr p);

TestLists_Struct1_list TestLists_get_list1(TestLists_ptr p);

TestLists_Struct8_list TestLists_get_list8(TestLists_ptr p);

TestLists_Struct16_list TestLists_get_list16(TestLists_ptr p);

TestLists_Struct32_list TestLists_get_list32(TestLists_ptr p);

TestLists_Struct64_list TestLists_get_list64(TestLists_ptr p);

TestLists_StructP_list TestLists_get_listP(TestLists_ptr p);

capn_ptr TestLists_get_int32ListList(TestLists_ptr p);

capn_ptr TestLists_get_textListList(TestLists_ptr p);

capn_ptr TestLists_get_structListList(TestLists_ptr p);

void TestLists_set_list0(TestLists_ptr p, TestLists_Struct0_list list0);

void TestLists_set_list1(TestLists_ptr p, TestLists_Struct1_list list1);

void TestLists_set_list8(TestLists_ptr p, TestLists_Struct8_list list8);

void TestLists_set_list16(TestLists_ptr p, TestLists_Struct16_list list16);

void TestLists_set_list32(TestLists_ptr p, TestLists_Struct32_list list32);

void TestLists_set_list64(TestLists_ptr p, TestLists_Struct64_list list64);

void TestLists_set_listP(TestLists_ptr p, TestLists_StructP_list listP);

void TestLists_set_int32ListList(TestLists_ptr p, capn_ptr int32ListList);

void TestLists_set_textListList(TestLists_ptr p, capn_ptr textListList);

void TestLists_set_structListList(TestLists_ptr p, capn_ptr structListList);

capnp_nowarn struct TestLists_Struct0 {
};

static const size_t TestLists_Struct0_word_count = 0;

static const size_t TestLists_Struct0_pointer_count = 0;

static const size_t TestLists_Struct0_struct_bytes_count = 0;

struct TestLists_Struct1 {
	unsigned f : 1;
};

static const size_t TestLists_Struct1_word_count = 1;

static const size_t TestLists_Struct1_pointer_count = 0;

static const size_t TestLists_Struct1_struct_bytes_count = 8;

unsigned TestLists_Struct1_get_f(TestLists_Struct1_ptr p);

void TestLists_Struct1_set_f(TestLists_Struct1_ptr p, unsigned f);

struct TestLists_Struct8 {
	uint8_t f;
};

static const size_t TestLists_Struct8_word_count = 1;

static const size_t TestLists_Struct8_pointer_count = 0;

static const size_t TestLists_Struct8_struct_bytes_count = 8;

uint8_t TestLists_Struct8_get_f(TestLists_Struct8_ptr p);

void TestLists_Struct8_set_f(TestLists_Struct8_ptr p, uint8_t f);

struct TestLists_Struct16 {
	uint16_t f;
};

static const size_t TestLists_Struct16_word_count = 1;

static const size_t TestLists_Struct16_pointer_count = 0;

static const size_t TestLists_Struct16_struct_bytes_count = 8;

uint16_t TestLists_Struct16_get_f(TestLists_Struct16_ptr p);

void TestLists_Struct16_set_f(TestLists_Struct16_ptr p, uint16_t f);

struct TestLists_Struct32 {
	uint32_t f;
};

static const size_t TestLists_Struct32_word_count = 1;

static const size_t TestLists_Struct32_pointer_count = 0;

static const size_t TestLists_Struct32_struct_bytes_count = 8;

uint32_t TestLists_Struct32_get_f(TestLists_Struct32_ptr p);

void TestLists_Struct32_set_f(TestLists_Struct32_ptr p, uint32_t f);

struct TestLists_Struct64 {
	uint64_t f;
};

static const size_t TestLists_Struct64_word_count = 1;

static const size_t TestLists_Struct64_pointer_count = 0;

static const size_t TestLists_Struct64_struct_bytes_count = 8;

uint64_t TestLists_Struct64_get_f(TestLists_Struct64_ptr p);

void TestLists_Struct64_set_f(TestLists_Struct64_ptr p, uint64_t f);

struct TestLists_StructP {
	capn_text f;
};

static const size_t TestLists_StructP_word_count = 0;

static const size_t TestLists_StructP_pointer_count = 1;

static const size_t TestLists_StructP_struct_bytes_count = 8;

capn_text TestLists_StructP_get_f(TestLists_StructP_ptr p);

void TestLists_StructP_set_f(TestLists_StructP_ptr p, capn_text f);

struct TestLists_Struct0c {
	capn_text pad;
};

static const size_t TestLists_Struct0c_word_count = 0;

static const size_t TestLists_Struct0c_pointer_count = 1;

static const size_t TestLists_Struct0c_struct_bytes_count = 8;

capn_text TestLists_Struct0c_get_pad(TestLists_Struct0c_ptr p);

void TestLists_Struct0c_set_pad(TestLists_Struct0c_ptr p, capn_text pad);

struct TestLists_Struct1c {
	unsigned f : 1;
	capn_text pad;
};

static const size_t TestLists_Struct1c_word_count = 1;

static const size_t TestLists_Struct1c_pointer_count = 1;

static const size_t TestLists_Struct1c_struct_bytes_count = 16;

unsigned TestLists_Struct1c_get_f(TestLists_Struct1c_ptr p);

capn_text TestLists_Struct1c_get_pad(TestLists_Struct1c_ptr p);

void TestLists_Struct1c_set_f(TestLists_Struct1c_ptr p, unsigned f);

void TestLists_Struct1c_set_pad(TestLists_Struct1c_ptr p, capn_text pad);

struct TestLists_Struct8c {
	uint8_t f;
	capn_text pad;
};

static const size_t TestLists_Struct8c_word_count = 1;

static const size_t TestLists_Struct8c_pointer_count = 1;

static const size_t TestLists_Struct8c_struct_bytes_count = 16;

uint8_t TestLists_Struct8c_get_f(TestLists_Struct8c_ptr p);

capn_text TestLists_Struct8c_get_pad(TestLists_Struct8c_ptr p);

void TestLists_Struct8c_set_f(TestLists_Struct8c_ptr p, uint8_t f);

void TestLists_Struct8c_set_pad(TestLists_Struct8c_ptr p, capn_text pad);

struct TestLists_Struct16c {
	uint16_t f;
	capn_text pad;
};

static const size_t TestLists_Struct16c_word_count = 1;

static const size_t TestLists_Struct16c_pointer_count = 1;

static const size_t TestLists_Struct16c_struct_bytes_count = 16;

uint16_t TestLists_Struct16c_get_f(TestLists_Struct16c_ptr p);

capn_text TestLists_Struct16c_get_pad(TestLists_Struct16c_ptr p);

void TestLists_Struct16c_set_f(TestLists_Struct16c_ptr p, uint16_t f);

void TestLists_Struct16c_set_pad(TestLists_Struct16c_ptr p, capn_text pad);

struct TestLists_Struct32c {
	uint32_t f;
	capn_text pad;
};

static const size_t TestLists_Struct32c_word_count = 1;

static const size_t TestLists_Struct32c_pointer_count = 1;

static const size_t TestLists_Struct32c_struct_bytes_count = 16;

uint32_t TestLists_Struct32c_get_f(TestLists_Struct32c_ptr p);

capn_text TestLists_Struct32c_get_pad(TestLists_Struct32c_ptr p);

void TestLists_Struct32c_set_f(TestLists_Struct32c_ptr p, uint32_t f);

void TestLists_Struct32c_set_pad(TestLists_Struct32c_ptr p, capn_text pad);

struct TestLists_Struct64c {
	uint64_t f;
	capn_text pad;
};

static const size_t TestLists_Struct64c_word_count = 1;

static const size_t TestLists_Struct64c_pointer_count = 1;

static const size_t TestLists_Struct64c_struct_bytes_count = 16;

uint64_t TestLists_Struct64c_get_f(TestLists_Struct64c_ptr p);

capn_text TestLists_Struct64c_get_pad(TestLists_Struct64c_ptr p);

void TestLists_Struct64c_set_f(TestLists_Struct64c_ptr p, uint64_t f);

void TestLists_Struct64c_set_pad(TestLists_Struct64c_ptr p, capn_text pad);

struct TestLists_StructPc {
	capn_text f;
	uint64_t pad;
};

static const size_t TestLists_StructPc_word_count = 1;

static const size_t TestLists_StructPc_pointer_count = 1;

static const size_t TestLists_StructPc_struct_bytes_count = 16;

capn_text TestLists_StructPc_get_f(TestLists_StructPc_ptr p);

uint64_t TestLists_StructPc_get_pad(TestLists_StructPc_ptr p);

void TestLists_StructPc_set_f(TestLists_StructPc_ptr p, capn_text f);

void TestLists_StructPc_set_pad(TestLists_StructPc_ptr p, uint64_t pad);

struct TestFieldZeroIsBit {
	unsigned bit : 1;
	unsigned secondBit : 1;
	uint8_t thirdField;
};

static const size_t TestFieldZeroIsBit_word_count = 1;

static const size_t TestFieldZeroIsBit_pointer_count = 0;

static const size_t TestFieldZeroIsBit_struct_bytes_count = 8;

unsigned TestFieldZeroIsBit_get_bit(TestFieldZeroIsBit_ptr p);

unsigned TestFieldZeroIsBit_get_secondBit(TestFieldZeroIsBit_ptr p);

uint8_t TestFieldZeroIsBit_get_thirdField(TestFieldZeroIsBit_ptr p);

void TestFieldZeroIsBit_set_bit(TestFieldZeroIsBit_ptr p, unsigned bit);

void TestFieldZeroIsBit_set_secondBit(TestFieldZeroIsBit_ptr p, unsigned secondBit);

void TestFieldZeroIsBit_set_thirdField(TestFieldZeroIsBit_ptr p, uint8_t thirdField);

struct TestListDefaults {
	TestLists_ptr lists;
};

static const size_t TestListDefaults_word_count = 0;

static const size_t TestListDefaults_pointer_count = 1;

static const size_t TestListDefaults_struct_bytes_count = 8;

TestLists_ptr TestListDefaults_get_lists(TestListDefaults_ptr p);

void TestListDefaults_set_lists(TestListDefaults_ptr p, TestLists_ptr lists);
enum TestLateUnion_theUnion_which {
	TestLateUnion_theUnion_qux = 0,
	TestLateUnion_theUnion_corge = 1,
	TestLateUnion_theUnion_grault = 2
};
enum TestLateUnion_anotherUnion_which {
	TestLateUnion_anotherUnion_qux = 0,
	TestLateUnion_anotherUnion_corge = 1,
	TestLateUnion_anotherUnion_grault = 2
};

struct TestLateUnion {
	int32_t foo;
	capn_text bar;
	int16_t baz;
	enum TestLateUnion_theUnion_which theUnion_which;
	capnp_nowarn union {
		capn_text qux;
		capn_list32 corge;
		float grault;
	} theUnion;
	enum TestLateUnion_anotherUnion_which anotherUnion_which;
	capnp_nowarn union {
		capn_text qux;
		capn_list32 corge;
		float grault;
	} anotherUnion;
};

static const size_t TestLateUnion_word_count = 3;

static const size_t TestLateUnion_pointer_count = 3;

static const size_t TestLateUnion_struct_bytes_count = 48;

int32_t TestLateUnion_get_foo(TestLateUnion_ptr p);

capn_text TestLateUnion_get_bar(TestLateUnion_ptr p);

int16_t TestLateUnion_get_baz(TestLateUnion_ptr p);

void TestLateUnion_set_foo(TestLateUnion_ptr p, int32_t foo);

void TestLateUnion_set_bar(TestLateUnion_ptr p, capn_text bar);

void TestLateUnion_set_baz(TestLateUnion_ptr p, int16_t baz);

struct TestOldVersion {
	int64_t old1;
	capn_text old2;
	TestOldVersion_ptr old3;
};

static const size_t TestOldVersion_word_count = 1;

static const size_t TestOldVersion_pointer_count = 2;

static const size_t TestOldVersion_struct_bytes_count = 24;

int64_t TestOldVersion_get_old1(TestOldVersion_ptr p);

capn_text TestOldVersion_get_old2(TestOldVersion_ptr p);

TestOldVersion_ptr TestOldVersion_get_old3(TestOldVersion_ptr p);

void TestOldVersion_set_old1(TestOldVersion_ptr p, int64_t old1);

void TestOldVersion_set_old2(TestOldVersion_ptr p, capn_text old2);

void TestOldVersion_set_old3(TestOldVersion_ptr p, TestOldVersion_ptr old3);

struct TestNewVersion {
	int64_t old1;
	capn_text old2;
	TestNewVersion_ptr old3;
	int64_t new1;
	capn_text new2;
};

static const size_t TestNewVersion_word_count = 2;

static const size_t TestNewVersion_pointer_count = 3;

static const size_t TestNewVersion_struct_bytes_count = 40;

int64_t TestNewVersion_get_old1(TestNewVersion_ptr p);

capn_text TestNewVersion_get_old2(TestNewVersion_ptr p);

TestNewVersion_ptr TestNewVersion_get_old3(TestNewVersion_ptr p);

int64_t TestNewVersion_get_new1(TestNewVersion_ptr p);

capn_text TestNewVersion_get_new2(TestNewVersion_ptr p);

void TestNewVersion_set_old1(TestNewVersion_ptr p, int64_t old1);

void TestNewVersion_set_old2(TestNewVersion_ptr p, capn_text old2);

void TestNewVersion_set_old3(TestNewVersion_ptr p, TestNewVersion_ptr old3);

void TestNewVersion_set_new1(TestNewVersion_ptr p, int64_t new1);

void TestNewVersion_set_new2(TestNewVersion_ptr p, capn_text new2);
enum TestStructUnion_un_which {
	TestStructUnion_un__struct = 0,
	TestStructUnion_un_object = 1
};

struct TestStructUnion {
	enum TestStructUnion_un_which un_which;
	capnp_nowarn union {
		TestStructUnion_SomeStruct_ptr _struct;
		TestAnyPointer_ptr object;
	} un;
};

static const size_t TestStructUnion_word_count = 1;

static const size_t TestStructUnion_pointer_count = 1;

static const size_t TestStructUnion_struct_bytes_count = 16;

struct TestStructUnion_SomeStruct {
	capn_text someText;
	capn_text moreText;
};

static const size_t TestStructUnion_SomeStruct_word_count = 0;

static const size_t TestStructUnion_SomeStruct_pointer_count = 2;

static const size_t TestStructUnion_SomeStruct_struct_bytes_count = 16;

capn_text TestStructUnion_SomeStruct_get_someText(TestStructUnion_SomeStruct_ptr p);

capn_text TestStructUnion_SomeStruct_get_moreText(TestStructUnion_SomeStruct_ptr p);

void TestStructUnion_SomeStruct_set_someText(TestStructUnion_SomeStruct_ptr p, capn_text someText);

void TestStructUnion_SomeStruct_set_moreText(TestStructUnion_SomeStruct_ptr p, capn_text moreText);

struct TestPrintInlineStructs {
	capn_text someText;
	TestPrintInlineStructs_InlineStruct_list structList;
};

static const size_t TestPrintInlineStructs_word_count = 0;

static const size_t TestPrintInlineStructs_pointer_count = 2;

static const size_t TestPrintInlineStructs_struct_bytes_count = 16;

capn_text TestPrintInlineStructs_get_someText(TestPrintInlineStructs_ptr p);

TestPrintInlineStructs_InlineStruct_list TestPrintInlineStructs_get_structList(TestPrintInlineStructs_ptr p);

void TestPrintInlineStructs_set_someText(TestPrintInlineStructs_ptr p, capn_text someText);

void TestPrintInlineStructs_set_structList(TestPrintInlineStructs_ptr p, TestPrintInlineStructs_InlineStruct_list structList);

struct TestPrintInlineStructs_InlineStruct {
	int32_t int32Field;
	capn_text textField;
};

static const size_t TestPrintInlineStructs_InlineStruct_word_count = 1;

static const size_t TestPrintInlineStructs_InlineStruct_pointer_count = 1;

static const size_t TestPrintInlineStructs_InlineStruct_struct_bytes_count = 16;

int32_t TestPrintInlineStructs_InlineStruct_get_int32Field(TestPrintInlineStructs_InlineStruct_ptr p);

capn_text TestPrintInlineStructs_InlineStruct_get_textField(TestPrintInlineStructs_InlineStruct_ptr p);

void TestPrintInlineStructs_InlineStruct_set_int32Field(TestPrintInlineStructs_InlineStruct_ptr p, int32_t int32Field);

void TestPrintInlineStructs_InlineStruct_set_textField(TestPrintInlineStructs_InlineStruct_ptr p, capn_text textField);

struct TestWholeFloatDefault {
	float field;
	float bigField;
};

static const size_t TestWholeFloatDefault_word_count = 1;

static const size_t TestWholeFloatDefault_pointer_count = 0;

static const size_t TestWholeFloatDefault_struct_bytes_count = 8;

float TestWholeFloatDefault_get_field(TestWholeFloatDefault_ptr p);

float TestWholeFloatDefault_get_bigField(TestWholeFloatDefault_ptr p);

void TestWholeFloatDefault_set_field(TestWholeFloatDefault_ptr p, float field);

void TestWholeFloatDefault_set_bigField(TestWholeFloatDefault_ptr p, float bigField);

capnp_nowarn struct TestEmptyStruct {
};

static const size_t TestEmptyStruct_word_count = 0;

static const size_t TestEmptyStruct_pointer_count = 0;

static const size_t TestEmptyStruct_struct_bytes_count = 0;

capnp_nowarn struct TestConstants {
};

static const size_t TestConstants_word_count = 0;

static const size_t TestConstants_pointer_count = 0;

static const size_t TestConstants_struct_bytes_count = 0;

struct TestSturdyRef {
	TestSturdyRefHostId_ptr hostId;
	capn_ptr objectId;
};

static const size_t TestSturdyRef_word_count = 0;

static const size_t TestSturdyRef_pointer_count = 2;

static const size_t TestSturdyRef_struct_bytes_count = 16;

TestSturdyRefHostId_ptr TestSturdyRef_get_hostId(TestSturdyRef_ptr p);

capn_ptr TestSturdyRef_get_objectId(TestSturdyRef_ptr p);

void TestSturdyRef_set_hostId(TestSturdyRef_ptr p, TestSturdyRefHostId_ptr hostId);

void TestSturdyRef_set_objectId(TestSturdyRef_ptr p, capn_ptr objectId);

struct TestSturdyRefHostId {
	capn_text host;
};

static const size_t TestSturdyRefHostId_word_count = 0;

static const size_t TestSturdyRefHostId_pointer_count = 1;

static const size_t TestSturdyRefHostId_struct_bytes_count = 8;

capn_text TestSturdyRefHostId_get_host(TestSturdyRefHostId_ptr p);

void TestSturdyRefHostId_set_host(TestSturdyRefHostId_ptr p, capn_text host);

struct TestSturdyRefObjectId {
	enum TestSturdyRefObjectId_Tag tag;
};

static const size_t TestSturdyRefObjectId_word_count = 1;

static const size_t TestSturdyRefObjectId_pointer_count = 0;

static const size_t TestSturdyRefObjectId_struct_bytes_count = 8;

enum TestSturdyRefObjectId_Tag TestSturdyRefObjectId_get_tag(TestSturdyRefObjectId_ptr p);

void TestSturdyRefObjectId_set_tag(TestSturdyRefObjectId_ptr p, enum TestSturdyRefObjectId_Tag tag);

capnp_nowarn struct TestProvisionId {
};

static const size_t TestProvisionId_word_count = 0;

static const size_t TestProvisionId_pointer_count = 0;

static const size_t TestProvisionId_struct_bytes_count = 0;

capnp_nowarn struct TestRecipientId {
};

static const size_t TestRecipientId_word_count = 0;

static const size_t TestRecipientId_pointer_count = 0;

static const size_t TestRecipientId_struct_bytes_count = 0;

capnp_nowarn struct TestThirdPartyCapId {
};

static const size_t TestThirdPartyCapId_word_count = 0;

static const size_t TestThirdPartyCapId_pointer_count = 0;

static const size_t TestThirdPartyCapId_struct_bytes_count = 0;

capnp_nowarn struct TestJoinResult {
};

static const size_t TestJoinResult_word_count = 0;

static const size_t TestJoinResult_pointer_count = 0;

static const size_t TestJoinResult_struct_bytes_count = 0;
enum TestNameAnnotation_which {
	TestNameAnnotation_badFieldName = 0,
	TestNameAnnotation_bar = 1
};
enum TestNameAnnotation_badlyNamedUnion_which {
	TestNameAnnotation_badlyNamedUnion_badlyNamedGroup = 0,
	TestNameAnnotation_badlyNamedUnion_baz = 1
};

struct TestNameAnnotation {
	enum TestNameAnnotation_which which;
	capnp_nowarn union {
		unsigned badFieldName : 1;
		int8_t bar;
	};
	enum TestNameAnnotation_BadlyNamedEnum anotherBadFieldName;
	enum TestNameAnnotation_badlyNamedUnion_which badlyNamedUnion_which;
	capnp_nowarn union {
		/* struct { -empty- } badlyNamedGroup; */
		TestNameAnnotation_NestedStruct_ptr baz;
	} badlyNamedUnion;
};

static const size_t TestNameAnnotation_word_count = 1;

static const size_t TestNameAnnotation_pointer_count = 1;

static const size_t TestNameAnnotation_struct_bytes_count = 16;

struct TestNameAnnotation_NestedStruct {
	unsigned badNestedFieldName : 1;
	TestNameAnnotation_NestedStruct_ptr anotherBadNestedFieldName;
};

static const size_t TestNameAnnotation_NestedStruct_word_count = 1;

static const size_t TestNameAnnotation_NestedStruct_pointer_count = 1;

static const size_t TestNameAnnotation_NestedStruct_struct_bytes_count = 16;

unsigned TestNameAnnotation_NestedStruct_get_badNestedFieldName(TestNameAnnotation_NestedStruct_ptr p);

TestNameAnnotation_NestedStruct_ptr TestNameAnnotation_NestedStruct_get_anotherBadNestedFieldName(TestNameAnnotation_NestedStruct_ptr p);

void TestNameAnnotation_NestedStruct_set_badNestedFieldName(TestNameAnnotation_NestedStruct_ptr p, unsigned badNestedFieldName);

void TestNameAnnotation_NestedStruct_set_anotherBadNestedFieldName(TestNameAnnotation_NestedStruct_ptr p, TestNameAnnotation_NestedStruct_ptr anotherBadNestedFieldName);

TestAllTypes_ptr new_TestAllTypes(struct capn_segment*);
TestDefaults_ptr new_TestDefaults(struct capn_segment*);
TestAnyPointer_ptr new_TestAnyPointer(struct capn_segment*);
TestOutOfOrder_ptr new_TestOutOfOrder(struct capn_segment*);
TestUnion_ptr new_TestUnion(struct capn_segment*);
TestUnnamedUnion_ptr new_TestUnnamedUnion(struct capn_segment*);
TestUnionInUnion_ptr new_TestUnionInUnion(struct capn_segment*);
TestGroups_ptr new_TestGroups(struct capn_segment*);
TestInterleavedGroups_ptr new_TestInterleavedGroups(struct capn_segment*);
TestUnionDefaults_ptr new_TestUnionDefaults(struct capn_segment*);
TestNestedTypes_ptr new_TestNestedTypes(struct capn_segment*);
TestNestedTypes_NestedStruct_ptr new_TestNestedTypes_NestedStruct(struct capn_segment*);
TestUsing_ptr new_TestUsing(struct capn_segment*);
TestLists_ptr new_TestLists(struct capn_segment*);
TestLists_Struct0_ptr new_TestLists_Struct0(struct capn_segment*);
TestLists_Struct1_ptr new_TestLists_Struct1(struct capn_segment*);
TestLists_Struct8_ptr new_TestLists_Struct8(struct capn_segment*);
TestLists_Struct16_ptr new_TestLists_Struct16(struct capn_segment*);
TestLists_Struct32_ptr new_TestLists_Struct32(struct capn_segment*);
TestLists_Struct64_ptr new_TestLists_Struct64(struct capn_segment*);
TestLists_StructP_ptr new_TestLists_StructP(struct capn_segment*);
TestLists_Struct0c_ptr new_TestLists_Struct0c(struct capn_segment*);
TestLists_Struct1c_ptr new_TestLists_Struct1c(struct capn_segment*);
TestLists_Struct8c_ptr new_TestLists_Struct8c(struct capn_segment*);
TestLists_Struct16c_ptr new_TestLists_Struct16c(struct capn_segment*);
TestLists_Struct32c_ptr new_TestLists_Struct32c(struct capn_segment*);
TestLists_Struct64c_ptr new_TestLists_Struct64c(struct capn_segment*);
TestLists_StructPc_ptr new_TestLists_StructPc(struct capn_segment*);
TestFieldZeroIsBit_ptr new_TestFieldZeroIsBit(struct capn_segment*);
TestListDefaults_ptr new_TestListDefaults(struct capn_segment*);
TestLateUnion_ptr new_TestLateUnion(struct capn_segment*);
TestOldVersion_ptr new_TestOldVersion(struct capn_segment*);
TestNewVersion_ptr new_TestNewVersion(struct capn_segment*);
TestStructUnion_ptr new_TestStructUnion(struct capn_segment*);
TestStructUnion_SomeStruct_ptr new_TestStructUnion_SomeStruct(struct capn_segment*);
TestPrintInlineStructs_ptr new_TestPrintInlineStructs(struct capn_segment*);
TestPrintInlineStructs_InlineStruct_ptr new_TestPrintInlineStructs_InlineStruct(struct capn_segment*);
TestWholeFloatDefault_ptr new_TestWholeFloatDefault(struct capn_segment*);
TestEmptyStruct_ptr new_TestEmptyStruct(struct capn_segment*);
TestConstants_ptr new_TestConstants(struct capn_segment*);
TestSturdyRef_ptr new_TestSturdyRef(struct capn_segment*);
TestSturdyRefHostId_ptr new_TestSturdyRefHostId(struct capn_segment*);
TestSturdyRefObjectId_ptr new_TestSturdyRefObjectId(struct capn_segment*);
TestProvisionId_ptr new_TestProvisionId(struct capn_segment*);
TestRecipientId_ptr new_TestRecipientId(struct capn_segment*);
TestThirdPartyCapId_ptr new_TestThirdPartyCapId(struct capn_segment*);
TestJoinResult_ptr new_TestJoinResult(struct capn_segment*);
TestNameAnnotation_ptr new_TestNameAnnotation(struct capn_segment*);
TestNameAnnotation_NestedStruct_ptr new_TestNameAnnotation_NestedStruct(struct capn_segment*);

TestAllTypes_list new_TestAllTypes_list(struct capn_segment*, int len);
TestDefaults_list new_TestDefaults_list(struct capn_segment*, int len);
TestAnyPointer_list new_TestAnyPointer_list(struct capn_segment*, int len);
TestOutOfOrder_list new_TestOutOfOrder_list(struct capn_segment*, int len);
TestUnion_list new_TestUnion_list(struct capn_segment*, int len);
TestUnnamedUnion_list new_TestUnnamedUnion_list(struct capn_segment*, int len);
TestUnionInUnion_list new_TestUnionInUnion_list(struct capn_segment*, int len);
TestGroups_list new_TestGroups_list(struct capn_segment*, int len);
TestInterleavedGroups_list new_TestInterleavedGroups_list(struct capn_segment*, int len);
TestUnionDefaults_list new_TestUnionDefaults_list(struct capn_segment*, int len);
TestNestedTypes_list new_TestNestedTypes_list(struct capn_segment*, int len);
TestNestedTypes_NestedStruct_list new_TestNestedTypes_NestedStruct_list(struct capn_segment*, int len);
TestUsing_list new_TestUsing_list(struct capn_segment*, int len);
TestLists_list new_TestLists_list(struct capn_segment*, int len);
TestLists_Struct0_list new_TestLists_Struct0_list(struct capn_segment*, int len);
TestLists_Struct1_list new_TestLists_Struct1_list(struct capn_segment*, int len);
TestLists_Struct8_list new_TestLists_Struct8_list(struct capn_segment*, int len);
TestLists_Struct16_list new_TestLists_Struct16_list(struct capn_segment*, int len);
TestLists_Struct32_list new_TestLists_Struct32_list(struct capn_segment*, int len);
TestLists_Struct64_list new_TestLists_Struct64_list(struct capn_segment*, int len);
TestLists_StructP_list new_TestLists_StructP_list(struct capn_segment*, int len);
TestLists_Struct0c_list new_TestLists_Struct0c_list(struct capn_segment*, int len);
TestLists_Struct1c_list new_TestLists_Struct1c_list(struct capn_segment*, int len);
TestLists_Struct8c_list new_TestLists_Struct8c_list(struct capn_segment*, int len);
TestLists_Struct16c_list new_TestLists_Struct16c_list(struct capn_segment*, int len);
TestLists_Struct32c_list new_TestLists_Struct32c_list(struct capn_segment*, int len);
TestLists_Struct64c_list new_TestLists_Struct64c_list(struct capn_segment*, int len);
TestLists_StructPc_list new_TestLists_StructPc_list(struct capn_segment*, int len);
TestFieldZeroIsBit_list new_TestFieldZeroIsBit_list(struct capn_segment*, int len);
TestListDefaults_list new_TestListDefaults_list(struct capn_segment*, int len);
TestLateUnion_list new_TestLateUnion_list(struct capn_segment*, int len);
TestOldVersion_list new_TestOldVersion_list(struct capn_segment*, int len);
TestNewVersion_list new_TestNewVersion_list(struct capn_segment*, int len);
TestStructUnion_list new_TestStructUnion_list(struct capn_segment*, int len);
TestStructUnion_SomeStruct_list new_TestStructUnion_SomeStruct_list(struct capn_segment*, int len);
TestPrintInlineStructs_list new_TestPrintInlineStructs_list(struct capn_segment*, int len);
TestPrintInlineStructs_InlineStruct_list new_TestPrintInlineStructs_InlineStruct_list(struct capn_segment*, int len);
TestWholeFloatDefault_list new_TestWholeFloatDefault_list(struct capn_segment*, int len);
TestEmptyStruct_list new_TestEmptyStruct_list(struct capn_segment*, int len);
TestConstants_list new_TestConstants_list(struct capn_segment*, int len);
TestSturdyRef_list new_TestSturdyRef_list(struct capn_segment*, int len);
TestSturdyRefHostId_list new_TestSturdyRefHostId_list(struct capn_segment*, int len);
TestSturdyRefObjectId_list new_TestSturdyRefObjectId_list(struct capn_segment*, int len);
TestProvisionId_list new_TestProvisionId_list(struct capn_segment*, int len);
TestRecipientId_list new_TestRecipientId_list(struct capn_segment*, int len);
TestThirdPartyCapId_list new_TestThirdPartyCapId_list(struct capn_segment*, int len);
TestJoinResult_list new_TestJoinResult_list(struct capn_segment*, int len);
TestNameAnnotation_list new_TestNameAnnotation_list(struct capn_segment*, int len);
TestNameAnnotation_NestedStruct_list new_TestNameAnnotation_NestedStruct_list(struct capn_segment*, int len);

void read_TestAllTypes(struct TestAllTypes*, TestAllTypes_ptr);
void read_TestDefaults(struct TestDefaults*, TestDefaults_ptr);
void read_TestAnyPointer(struct TestAnyPointer*, TestAnyPointer_ptr);
void read_TestOutOfOrder(struct TestOutOfOrder*, TestOutOfOrder_ptr);
void read_TestUnion(struct TestUnion*, TestUnion_ptr);
void read_TestUnnamedUnion(struct TestUnnamedUnion*, TestUnnamedUnion_ptr);
void read_TestUnionInUnion(struct TestUnionInUnion*, TestUnionInUnion_ptr);
void read_TestGroups(struct TestGroups*, TestGroups_ptr);
void read_TestInterleavedGroups(struct TestInterleavedGroups*, TestInterleavedGroups_ptr);
void read_TestUnionDefaults(struct TestUnionDefaults*, TestUnionDefaults_ptr);
void read_TestNestedTypes(struct TestNestedTypes*, TestNestedTypes_ptr);
void read_TestNestedTypes_NestedStruct(struct TestNestedTypes_NestedStruct*, TestNestedTypes_NestedStruct_ptr);
void read_TestUsing(struct TestUsing*, TestUsing_ptr);
void read_TestLists(struct TestLists*, TestLists_ptr);
void read_TestLists_Struct0(struct TestLists_Struct0*, TestLists_Struct0_ptr);
void read_TestLists_Struct1(struct TestLists_Struct1*, TestLists_Struct1_ptr);
void read_TestLists_Struct8(struct TestLists_Struct8*, TestLists_Struct8_ptr);
void read_TestLists_Struct16(struct TestLists_Struct16*, TestLists_Struct16_ptr);
void read_TestLists_Struct32(struct TestLists_Struct32*, TestLists_Struct32_ptr);
void read_TestLists_Struct64(struct TestLists_Struct64*, TestLists_Struct64_ptr);
void read_TestLists_StructP(struct TestLists_StructP*, TestLists_StructP_ptr);
void read_TestLists_Struct0c(struct TestLists_Struct0c*, TestLists_Struct0c_ptr);
void read_TestLists_Struct1c(struct TestLists_Struct1c*, TestLists_Struct1c_ptr);
void read_TestLists_Struct8c(struct TestLists_Struct8c*, TestLists_Struct8c_ptr);
void read_TestLists_Struct16c(struct TestLists_Struct16c*, TestLists_Struct16c_ptr);
void read_TestLists_Struct32c(struct TestLists_Struct32c*, TestLists_Struct32c_ptr);
void read_TestLists_Struct64c(struct TestLists_Struct64c*, TestLists_Struct64c_ptr);
void read_TestLists_StructPc(struct TestLists_StructPc*, TestLists_StructPc_ptr);
void read_TestFieldZeroIsBit(struct TestFieldZeroIsBit*, TestFieldZeroIsBit_ptr);
void read_TestListDefaults(struct TestListDefaults*, TestListDefaults_ptr);
void read_TestLateUnion(struct TestLateUnion*, TestLateUnion_ptr);
void read_TestOldVersion(struct TestOldVersion*, TestOldVersion_ptr);
void read_TestNewVersion(struct TestNewVersion*, TestNewVersion_ptr);
void read_TestStructUnion(struct TestStructUnion*, TestStructUnion_ptr);
void read_TestStructUnion_SomeStruct(struct TestStructUnion_SomeStruct*, TestStructUnion_SomeStruct_ptr);
void read_TestPrintInlineStructs(struct TestPrintInlineStructs*, TestPrintInlineStructs_ptr);
void read_TestPrintInlineStructs_InlineStruct(struct TestPrintInlineStructs_InlineStruct*, TestPrintInlineStructs_InlineStruct_ptr);
void read_TestWholeFloatDefault(struct TestWholeFloatDefault*, TestWholeFloatDefault_ptr);
void read_TestEmptyStruct(struct TestEmptyStruct*, TestEmptyStruct_ptr);
void read_TestConstants(struct TestConstants*, TestConstants_ptr);
void read_TestSturdyRef(struct TestSturdyRef*, TestSturdyRef_ptr);
void read_TestSturdyRefHostId(struct TestSturdyRefHostId*, TestSturdyRefHostId_ptr);
void read_TestSturdyRefObjectId(struct TestSturdyRefObjectId*, TestSturdyRefObjectId_ptr);
void read_TestProvisionId(struct TestProvisionId*, TestProvisionId_ptr);
void read_TestRecipientId(struct TestRecipientId*, TestRecipientId_ptr);
void read_TestThirdPartyCapId(struct TestThirdPartyCapId*, TestThirdPartyCapId_ptr);
void read_TestJoinResult(struct TestJoinResult*, TestJoinResult_ptr);
void read_TestNameAnnotation(struct TestNameAnnotation*, TestNameAnnotation_ptr);
void read_TestNameAnnotation_NestedStruct(struct TestNameAnnotation_NestedStruct*, TestNameAnnotation_NestedStruct_ptr);

void write_TestAllTypes(const struct TestAllTypes*, TestAllTypes_ptr);
void write_TestDefaults(const struct TestDefaults*, TestDefaults_ptr);
void write_TestAnyPointer(const struct TestAnyPointer*, TestAnyPointer_ptr);
void write_TestOutOfOrder(const struct TestOutOfOrder*, TestOutOfOrder_ptr);
void write_TestUnion(const struct TestUnion*, TestUnion_ptr);
void write_TestUnnamedUnion(const struct TestUnnamedUnion*, TestUnnamedUnion_ptr);
void write_TestUnionInUnion(const struct TestUnionInUnion*, TestUnionInUnion_ptr);
void write_TestGroups(const struct TestGroups*, TestGroups_ptr);
void write_TestInterleavedGroups(const struct TestInterleavedGroups*, TestInterleavedGroups_ptr);
void write_TestUnionDefaults(const struct TestUnionDefaults*, TestUnionDefaults_ptr);
void write_TestNestedTypes(const struct TestNestedTypes*, TestNestedTypes_ptr);
void write_TestNestedTypes_NestedStruct(const struct TestNestedTypes_NestedStruct*, TestNestedTypes_NestedStruct_ptr);
void write_TestUsing(const struct TestUsing*, TestUsing_ptr);
void write_TestLists(const struct TestLists*, TestLists_ptr);
void write_TestLists_Struct0(const struct TestLists_Struct0*, TestLists_Struct0_ptr);
void write_TestLists_Struct1(const struct TestLists_Struct1*, TestLists_Struct1_ptr);
void write_TestLists_Struct8(const struct TestLists_Struct8*, TestLists_Struct8_ptr);
void write_TestLists_Struct16(const struct TestLists_Struct16*, TestLists_Struct16_ptr);
void write_TestLists_Struct32(const struct TestLists_Struct32*, TestLists_Struct32_ptr);
void write_TestLists_Struct64(const struct TestLists_Struct64*, TestLists_Struct64_ptr);
void write_TestLists_StructP(const struct TestLists_StructP*, TestLists_StructP_ptr);
void write_TestLists_Struct0c(const struct TestLists_Struct0c*, TestLists_Struct0c_ptr);
void write_TestLists_Struct1c(const struct TestLists_Struct1c*, TestLists_Struct1c_ptr);
void write_TestLists_Struct8c(const struct TestLists_Struct8c*, TestLists_Struct8c_ptr);
void write_TestLists_Struct16c(const struct TestLists_Struct16c*, TestLists_Struct16c_ptr);
void write_TestLists_Struct32c(const struct TestLists_Struct32c*, TestLists_Struct32c_ptr);
void write_TestLists_Struct64c(const struct TestLists_Struct64c*, TestLists_Struct64c_ptr);
void write_TestLists_StructPc(const struct TestLists_StructPc*, TestLists_StructPc_ptr);
void write_TestFieldZeroIsBit(const struct TestFieldZeroIsBit*, TestFieldZeroIsBit_ptr);
void write_TestListDefaults(const struct TestListDefaults*, TestListDefaults_ptr);
void write_TestLateUnion(const struct TestLateUnion*, TestLateUnion_ptr);
void write_TestOldVersion(const struct TestOldVersion*, TestOldVersion_ptr);
void write_TestNewVersion(const struct TestNewVersion*, TestNewVersion_ptr);
void write_TestStructUnion(const struct TestStructUnion*, TestStructUnion_ptr);
void write_TestStructUnion_SomeStruct(const struct TestStructUnion_SomeStruct*, TestStructUnion_SomeStruct_ptr);
void write_TestPrintInlineStructs(const struct TestPrintInlineStructs*, TestPrintInlineStructs_ptr);
void write_TestPrintInlineStructs_InlineStruct(const struct TestPrintInlineStructs_InlineStruct*, TestPrintInlineStructs_InlineStruct_ptr);
void write_TestWholeFloatDefault(const struct TestWholeFloatDefault*, TestWholeFloatDefault_ptr);
void write_TestEmptyStruct(const struct TestEmptyStruct*, TestEmptyStruct_ptr);
void write_TestConstants(const struct TestConstants*, TestConstants_ptr);
void write_TestSturdyRef(const struct TestSturdyRef*, TestSturdyRef_ptr);
void write_TestSturdyRefHostId(const struct TestSturdyRefHostId*, TestSturdyRefHostId_ptr);
void write_TestSturdyRefObjectId(const struct TestSturdyRefObjectId*, TestSturdyRefObjectId_ptr);
void write_TestProvisionId(const struct TestProvisionId*, TestProvisionId_ptr);
void write_TestRecipientId(const struct TestRecipientId*, TestRecipientId_ptr);
void write_TestThirdPartyCapId(const struct TestThirdPartyCapId*, TestThirdPartyCapId_ptr);
void write_TestJoinResult(const struct TestJoinResult*, TestJoinResult_ptr);
void write_TestNameAnnotation(const struct TestNameAnnotation*, TestNameAnnotation_ptr);
void write_TestNameAnnotation_NestedStruct(const struct TestNameAnnotation_NestedStruct*, TestNameAnnotation_NestedStruct_ptr);

void get_TestAllTypes(struct TestAllTypes*, TestAllTypes_list, int i);
void get_TestDefaults(struct TestDefaults*, TestDefaults_list, int i);
void get_TestAnyPointer(struct TestAnyPointer*, TestAnyPointer_list, int i);
void get_TestOutOfOrder(struct TestOutOfOrder*, TestOutOfOrder_list, int i);
void get_TestUnion(struct TestUnion*, TestUnion_list, int i);
void get_TestUnnamedUnion(struct TestUnnamedUnion*, TestUnnamedUnion_list, int i);
void get_TestUnionInUnion(struct TestUnionInUnion*, TestUnionInUnion_list, int i);
void get_TestGroups(struct TestGroups*, TestGroups_list, int i);
void get_TestInterleavedGroups(struct TestInterleavedGroups*, TestInterleavedGroups_list, int i);
void get_TestUnionDefaults(struct TestUnionDefaults*, TestUnionDefaults_list, int i);
void get_TestNestedTypes(struct TestNestedTypes*, TestNestedTypes_list, int i);
void get_TestNestedTypes_NestedStruct(struct TestNestedTypes_NestedStruct*, TestNestedTypes_NestedStruct_list, int i);
void get_TestUsing(struct TestUsing*, TestUsing_list, int i);
void get_TestLists(struct TestLists*, TestLists_list, int i);
void get_TestLists_Struct0(struct TestLists_Struct0*, TestLists_Struct0_list, int i);
void get_TestLists_Struct1(struct TestLists_Struct1*, TestLists_Struct1_list, int i);
void get_TestLists_Struct8(struct TestLists_Struct8*, TestLists_Struct8_list, int i);
void get_TestLists_Struct16(struct TestLists_Struct16*, TestLists_Struct16_list, int i);
void get_TestLists_Struct32(struct TestLists_Struct32*, TestLists_Struct32_list, int i);
void get_TestLists_Struct64(struct TestLists_Struct64*, TestLists_Struct64_list, int i);
void get_TestLists_StructP(struct TestLists_StructP*, TestLists_StructP_list, int i);
void get_TestLists_Struct0c(struct TestLists_Struct0c*, TestLists_Struct0c_list, int i);
void get_TestLists_Struct1c(struct TestLists_Struct1c*, TestLists_Struct1c_list, int i);
void get_TestLists_Struct8c(struct TestLists_Struct8c*, TestLists_Struct8c_list, int i);
void get_TestLists_Struct16c(struct TestLists_Struct16c*, TestLists_Struct16c_list, int i);
void get_TestLists_Struct32c(struct TestLists_Struct32c*, TestLists_Struct32c_list, int i);
void get_TestLists_Struct64c(struct TestLists_Struct64c*, TestLists_Struct64c_list, int i);
void get_TestLists_StructPc(struct TestLists_StructPc*, TestLists_StructPc_list, int i);
void get_TestFieldZeroIsBit(struct TestFieldZeroIsBit*, TestFieldZeroIsBit_list, int i);
void get_TestListDefaults(struct TestListDefaults*, TestListDefaults_list, int i);
void get_TestLateUnion(struct TestLateUnion*, TestLateUnion_list, int i);
void get_TestOldVersion(struct TestOldVersion*, TestOldVersion_list, int i);
void get_TestNewVersion(struct TestNewVersion*, TestNewVersion_list, int i);
void get_TestStructUnion(struct TestStructUnion*, TestStructUnion_list, int i);
void get_TestStructUnion_SomeStruct(struct TestStructUnion_SomeStruct*, TestStructUnion_SomeStruct_list, int i);
void get_TestPrintInlineStructs(struct TestPrintInlineStructs*, TestPrintInlineStructs_list, int i);
void get_TestPrintInlineStructs_InlineStruct(struct TestPrintInlineStructs_InlineStruct*, TestPrintInlineStructs_InlineStruct_list, int i);
void get_TestWholeFloatDefault(struct TestWholeFloatDefault*, TestWholeFloatDefault_list, int i);
void get_TestEmptyStruct(struct TestEmptyStruct*, TestEmptyStruct_list, int i);
void get_TestConstants(struct TestConstants*, TestConstants_list, int i);
void get_TestSturdyRef(struct TestSturdyRef*, TestSturdyRef_list, int i);
void get_TestSturdyRefHostId(struct TestSturdyRefHostId*, TestSturdyRefHostId_list, int i);
void get_TestSturdyRefObjectId(struct TestSturdyRefObjectId*, TestSturdyRefObjectId_list, int i);
void get_TestProvisionId(struct TestProvisionId*, TestProvisionId_list, int i);
void get_TestRecipientId(struct TestRecipientId*, TestRecipientId_list, int i);
void get_TestThirdPartyCapId(struct TestThirdPartyCapId*, TestThirdPartyCapId_list, int i);
void get_TestJoinResult(struct TestJoinResult*, TestJoinResult_list, int i);
void get_TestNameAnnotation(struct TestNameAnnotation*, TestNameAnnotation_list, int i);
void get_TestNameAnnotation_NestedStruct(struct TestNameAnnotation_NestedStruct*, TestNameAnnotation_NestedStruct_list, int i);

void set_TestAllTypes(const struct TestAllTypes*, TestAllTypes_list, int i);
void set_TestDefaults(const struct TestDefaults*, TestDefaults_list, int i);
void set_TestAnyPointer(const struct TestAnyPointer*, TestAnyPointer_list, int i);
void set_TestOutOfOrder(const struct TestOutOfOrder*, TestOutOfOrder_list, int i);
void set_TestUnion(const struct TestUnion*, TestUnion_list, int i);
void set_TestUnnamedUnion(const struct TestUnnamedUnion*, TestUnnamedUnion_list, int i);
void set_TestUnionInUnion(const struct TestUnionInUnion*, TestUnionInUnion_list, int i);
void set_TestGroups(const struct TestGroups*, TestGroups_list, int i);
void set_TestInterleavedGroups(const struct TestInterleavedGroups*, TestInterleavedGroups_list, int i);
void set_TestUnionDefaults(const struct TestUnionDefaults*, TestUnionDefaults_list, int i);
void set_TestNestedTypes(const struct TestNestedTypes*, TestNestedTypes_list, int i);
void set_TestNestedTypes_NestedStruct(const struct TestNestedTypes_NestedStruct*, TestNestedTypes_NestedStruct_list, int i);
void set_TestUsing(const struct TestUsing*, TestUsing_list, int i);
void set_TestLists(const struct TestLists*, TestLists_list, int i);
void set_TestLists_Struct0(const struct TestLists_Struct0*, TestLists_Struct0_list, int i);
void set_TestLists_Struct1(const struct TestLists_Struct1*, TestLists_Struct1_list, int i);
void set_TestLists_Struct8(const struct TestLists_Struct8*, TestLists_Struct8_list, int i);
void set_TestLists_Struct16(const struct TestLists_Struct16*, TestLists_Struct16_list, int i);
void set_TestLists_Struct32(const struct TestLists_Struct32*, TestLists_Struct32_list, int i);
void set_TestLists_Struct64(const struct TestLists_Struct64*, TestLists_Struct64_list, int i);
void set_TestLists_StructP(const struct TestLists_StructP*, TestLists_StructP_list, int i);
void set_TestLists_Struct0c(const struct TestLists_Struct0c*, TestLists_Struct0c_list, int i);
void set_TestLists_Struct1c(const struct TestLists_Struct1c*, TestLists_Struct1c_list, int i);
void set_TestLists_Struct8c(const struct TestLists_Struct8c*, TestLists_Struct8c_list, int i);
void set_TestLists_Struct16c(const struct TestLists_Struct16c*, TestLists_Struct16c_list, int i);
void set_TestLists_Struct32c(const struct TestLists_Struct32c*, TestLists_Struct32c_list, int i);
void set_TestLists_Struct64c(const struct TestLists_Struct64c*, TestLists_Struct64c_list, int i);
void set_TestLists_StructPc(const struct TestLists_StructPc*, TestLists_StructPc_list, int i);
void set_TestFieldZeroIsBit(const struct TestFieldZeroIsBit*, TestFieldZeroIsBit_list, int i);
void set_TestListDefaults(const struct TestListDefaults*, TestListDefaults_list, int i);
void set_TestLateUnion(const struct TestLateUnion*, TestLateUnion_list, int i);
void set_TestOldVersion(const struct TestOldVersion*, TestOldVersion_list, int i);
void set_TestNewVersion(const struct TestNewVersion*, TestNewVersion_list, int i);
void set_TestStructUnion(const struct TestStructUnion*, TestStructUnion_list, int i);
void set_TestStructUnion_SomeStruct(const struct TestStructUnion_SomeStruct*, TestStructUnion_SomeStruct_list, int i);
void set_TestPrintInlineStructs(const struct TestPrintInlineStructs*, TestPrintInlineStructs_list, int i);
void set_TestPrintInlineStructs_InlineStruct(const struct TestPrintInlineStructs_InlineStruct*, TestPrintInlineStructs_InlineStruct_list, int i);
void set_TestWholeFloatDefault(const struct TestWholeFloatDefault*, TestWholeFloatDefault_list, int i);
void set_TestEmptyStruct(const struct TestEmptyStruct*, TestEmptyStruct_list, int i);
void set_TestConstants(const struct TestConstants*, TestConstants_list, int i);
void set_TestSturdyRef(const struct TestSturdyRef*, TestSturdyRef_list, int i);
void set_TestSturdyRefHostId(const struct TestSturdyRefHostId*, TestSturdyRefHostId_list, int i);
void set_TestSturdyRefObjectId(const struct TestSturdyRefObjectId*, TestSturdyRefObjectId_list, int i);
void set_TestProvisionId(const struct TestProvisionId*, TestProvisionId_list, int i);
void set_TestRecipientId(const struct TestRecipientId*, TestRecipientId_list, int i);
void set_TestThirdPartyCapId(const struct TestThirdPartyCapId*, TestThirdPartyCapId_list, int i);
void set_TestJoinResult(const struct TestJoinResult*, TestJoinResult_list, int i);
void set_TestNameAnnotation(const struct TestNameAnnotation*, TestNameAnnotation_list, int i);
void set_TestNameAnnotation_NestedStruct(const struct TestNameAnnotation_NestedStruct*, TestNameAnnotation_NestedStruct_list, int i);

#ifdef __cplusplus
}
#endif
#endif

#ifndef CAPN_D508EEBDC2DC42B8
#define CAPN_D508EEBDC2DC42B8
/* AUTO GENERATED - DO NOT EDIT */
#include <capnp_c.h>

#if CAPN_VERSION != 1
#error "version mismatch between capnp_c.h and generated code"
#endif

#include "c++.capnp.h"

#ifdef __cplusplus
extern "C" {
#endif

struct TestAllTypes;
struct TestDefaults;
struct TestObject;
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
struct TestEmptyStruct;
struct TestConstants;

typedef struct {capn_ptr p;} TestAllTypes_ptr;
typedef struct {capn_ptr p;} TestDefaults_ptr;
typedef struct {capn_ptr p;} TestObject_ptr;
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
typedef struct {capn_ptr p;} TestEmptyStruct_ptr;
typedef struct {capn_ptr p;} TestConstants_ptr;

typedef struct {capn_ptr p;} TestAllTypes_list;
typedef struct {capn_ptr p;} TestDefaults_list;
typedef struct {capn_ptr p;} TestObject_list;
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
typedef struct {capn_ptr p;} TestEmptyStruct_list;
typedef struct {capn_ptr p;} TestConstants_list;

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

struct TestObject {
	capn_ptr objectField;
};

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
	union {
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
	union {
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
	union {
		int64_t u2f0s64;
		int32_t u2f0s32;
		int16_t u2f0s16;
		int8_t u2f0s8;
		unsigned u2f0s1 : 1;
	} union2;
	enum TestUnion_union3_which union3_which;
	union {
		int64_t u3f0s64;
		int32_t u3f0s32;
		int16_t u3f0s16;
		int8_t u3f0s8;
		unsigned u3f0s1 : 1;
	} union3;
	uint8_t byte0;
};
enum TestUnnamedUnion_which {
	TestUnnamedUnion_foo = 0,
	TestUnnamedUnion_bar = 1
};

struct TestUnnamedUnion {
	capn_text before;
	enum TestUnnamedUnion_which which;
	union {
		uint16_t foo;
		uint32_t bar;
	};
	uint16_t middle;
	capn_text after;
};
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
	union {
		enum TestUnionInUnion_outer_inner_which inner_which;
		union {
			int32_t foo;
			int32_t bar;
		} inner;
		int32_t baz;
	} outer;
};
enum TestGroups_groups_which {
	TestGroups_groups_foo = 0,
	TestGroups_groups_bar = 2,
	TestGroups_groups_baz = 1
};

struct TestGroups {
	enum TestGroups_groups_which groups_which;
	union {
		struct {
			int32_t corge;
			int64_t grault;
			capn_text garply;
		} foo;
		struct {
			int32_t corge;
			capn_text grault;
			int64_t garply;
		} bar;
		struct {
			int32_t corge;
			capn_text grault;
			capn_text garply;
		} baz;
	} groups;
};
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
	struct {
		uint32_t foo;
		uint64_t bar;
		enum TestInterleavedGroups_group1_which which;
		union {
			uint16_t qux;
			struct {
				uint64_t grault;
				uint16_t garply;
				capn_text plugh;
				capn_text xyzzy;
			} corge;
			capn_text fred;
		};
		capn_text waldo;
	} group1;
	struct {
		uint32_t foo;
		uint64_t bar;
		enum TestInterleavedGroups_group2_which which;
		union {
			uint16_t qux;
			struct {
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

struct TestUnionDefaults {
	TestUnion_ptr s16s8s64s8Set;
	TestUnion_ptr s0sps1s32Set;
	TestUnnamedUnion_ptr unnamed1;
	TestUnnamedUnion_ptr unnamed2;
};

struct TestNestedTypes {
	TestNestedTypes_NestedStruct_ptr nestedStruct;
	enum TestNestedTypes_NestedEnum outerNestedEnum;
	enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum;
};

struct TestNestedTypes_NestedStruct {
	enum TestNestedTypes_NestedEnum outerNestedEnum;
	enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum;
};

struct TestUsing {
	enum TestNestedTypes_NestedEnum outerNestedEnum;
	enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum;
};

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

struct TestLists_Struct0 {
};

struct TestLists_Struct1 {
	unsigned f : 1;
};

struct TestLists_Struct8 {
	uint8_t f;
};

struct TestLists_Struct16 {
	uint16_t f;
};

struct TestLists_Struct32 {
	uint32_t f;
};

struct TestLists_Struct64 {
	uint64_t f;
};

struct TestLists_StructP {
	capn_text f;
};

struct TestLists_Struct0c {
	capn_text pad;
};

struct TestLists_Struct1c {
	unsigned f : 1;
	capn_text pad;
};

struct TestLists_Struct8c {
	uint8_t f;
	capn_text pad;
};

struct TestLists_Struct16c {
	uint16_t f;
	capn_text pad;
};

struct TestLists_Struct32c {
	uint32_t f;
	capn_text pad;
};

struct TestLists_Struct64c {
	uint64_t f;
	capn_text pad;
};

struct TestLists_StructPc {
	capn_text f;
	uint64_t pad;
};

struct TestFieldZeroIsBit {
	unsigned bit : 1;
	unsigned secondBit : 1;
	uint8_t thirdField;
};

struct TestListDefaults {
	TestLists_ptr lists;
};
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
	union {
		capn_text qux;
		capn_list32 corge;
		float grault;
	} theUnion;
	enum TestLateUnion_anotherUnion_which anotherUnion_which;
	union {
		capn_text qux;
		capn_list32 corge;
		float grault;
	} anotherUnion;
};

struct TestOldVersion {
	int64_t old1;
	capn_text old2;
	TestOldVersion_ptr old3;
};

struct TestNewVersion {
	int64_t old1;
	capn_text old2;
	TestNewVersion_ptr old3;
	int64_t new1;
	capn_text new2;
};
enum TestStructUnion_un_which {
	TestStructUnion_un_allTypes = 0,
	TestStructUnion_un_object = 1
};

struct TestStructUnion {
	enum TestStructUnion_un_which un_which;
	union {
		TestAllTypes_ptr allTypes;
		TestObject_ptr object;
	} un;
};

struct TestEmptyStruct {
};

struct TestConstants {
};

TestAllTypes_ptr new_TestAllTypes(struct capn_segment*);
TestDefaults_ptr new_TestDefaults(struct capn_segment*);
TestObject_ptr new_TestObject(struct capn_segment*);
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
TestEmptyStruct_ptr new_TestEmptyStruct(struct capn_segment*);
TestConstants_ptr new_TestConstants(struct capn_segment*);

TestAllTypes_list new_TestAllTypes_list(struct capn_segment*, int len);
TestDefaults_list new_TestDefaults_list(struct capn_segment*, int len);
TestObject_list new_TestObject_list(struct capn_segment*, int len);
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
TestEmptyStruct_list new_TestEmptyStruct_list(struct capn_segment*, int len);
TestConstants_list new_TestConstants_list(struct capn_segment*, int len);

void read_TestAllTypes(struct TestAllTypes*, TestAllTypes_ptr);
void read_TestDefaults(struct TestDefaults*, TestDefaults_ptr);
void read_TestObject(struct TestObject*, TestObject_ptr);
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
void read_TestEmptyStruct(struct TestEmptyStruct*, TestEmptyStruct_ptr);
void read_TestConstants(struct TestConstants*, TestConstants_ptr);

void write_TestAllTypes(const struct TestAllTypes*, TestAllTypes_ptr);
void write_TestDefaults(const struct TestDefaults*, TestDefaults_ptr);
void write_TestObject(const struct TestObject*, TestObject_ptr);
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
void write_TestEmptyStruct(const struct TestEmptyStruct*, TestEmptyStruct_ptr);
void write_TestConstants(const struct TestConstants*, TestConstants_ptr);

void get_TestAllTypes(struct TestAllTypes*, TestAllTypes_list, int i);
void get_TestDefaults(struct TestDefaults*, TestDefaults_list, int i);
void get_TestObject(struct TestObject*, TestObject_list, int i);
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
void get_TestEmptyStruct(struct TestEmptyStruct*, TestEmptyStruct_list, int i);
void get_TestConstants(struct TestConstants*, TestConstants_list, int i);

void set_TestAllTypes(const struct TestAllTypes*, TestAllTypes_list, int i);
void set_TestDefaults(const struct TestDefaults*, TestDefaults_list, int i);
void set_TestObject(const struct TestObject*, TestObject_list, int i);
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
void set_TestEmptyStruct(const struct TestEmptyStruct*, TestEmptyStruct_list, int i);
void set_TestConstants(const struct TestConstants*, TestConstants_list, int i);

#ifdef __cplusplus
}
#endif
#endif

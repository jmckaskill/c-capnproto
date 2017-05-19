#include "test.capnp.h"
/* AUTO GENERATED - DO NOT EDIT */
#ifdef __GNUC__
# define capnp_unused __attribute__((unused))
# define capnp_use(x) (void) x;
#else
# define capnp_unused
# define capnp_use(x)
#endif

static const capn_text capn_val0 = {0,"",0};
static const capn_ptr capn_null = {CAPN_NULL};
static const uint8_t capn_buf[72] = {
	102,111,111,0,0,0,0,0,
	98,97,114,0,0,0,0,0,
	9,0,0,0,0,0,0,0,
	111,145,0,0,0,0,0,0,
	103,43,153,212,0,0,0,0,
	199,107,159,6,57,148,96,249,
	199,113,196,43,171,117,107,15,
	57,142,59,212,84,138,148,240,
	111,222,0,0,0,0,0,0
};
static const struct capn_segment capn_seg = {{0},0,0,0,(char*)&capn_buf[0],72,72,0};
union capn_conv_f32 TestWholeFloatDefault_constant = {0x43e40000u};
union capn_conv_f32 TestWholeFloatDefault_bigConstant = {0x7249f2cau};
unsigned TestConstants_boolConst = 1;
int8_t TestConstants_int8Const = -123;
int16_t TestConstants_int16Const = -12345;
int32_t TestConstants_int32Const = -12345678;
int64_t TestConstants_int64Const = ((uint64_t) 0xffff8fb7u << 32) | 0x79f22087u;
uint8_t TestConstants_uint8Const = 234;
uint16_t TestConstants_uint16Const = 45678;
uint32_t TestConstants_uint32Const = 3456789012u;
uint64_t TestConstants_uint64Const = ((uint64_t) 0xab54a98cu << 32) | 0xeb1f0ad2u;
union capn_conv_f32 TestConstants_float32Const = {0x449a5000u};
union capn_conv_f64 TestConstants_float64Const = {((uint64_t) 0xc9b58b82u << 32) | 0xc0e0bb00u};
capn_text TestConstants_textConst = {3,(char*)&capn_buf[0],(struct capn_segment*)&capn_seg};
capn_data TestConstants_dataConst = {{2,0,0,0,1,0,3,(char*)&capn_buf[8],(struct capn_segment*)&capn_seg}};
TestAllTypes_ptr TestConstants_structConst = {{1,1,0,0,48,20,0,(char*)&capn_buf[0],(struct capn_segment*)&capn_seg}};
enum TestEnum TestConstants_enumConst = (enum TestEnum) 5u;
capn_ptr TestConstants_voidListConst = {2,0,0,0,0,0,6,(char*)&capn_buf[16],(struct capn_segment*)&capn_seg};
capn_list1 TestConstants_boolListConst = {{4,0,0,0,1,0,4,(char*)&capn_buf[16],(struct capn_segment*)&capn_seg}};
capn_list8 TestConstants_int8ListConst = {{2,0,0,0,1,0,2,(char*)&capn_buf[24],(struct capn_segment*)&capn_seg}};
capn_list16 TestConstants_int16ListConst = {{2,0,0,0,2,0,2,(char*)&capn_buf[32],(struct capn_segment*)&capn_seg}};
capn_list32 TestConstants_int32ListConst = {{2,0,0,0,4,0,2,(char*)&capn_buf[40],(struct capn_segment*)&capn_seg}};
capn_list64 TestConstants_int64ListConst = {{2,0,0,0,8,0,2,(char*)&capn_buf[48],(struct capn_segment*)&capn_seg}};
capn_list8 TestConstants_uint8ListConst = {{2,0,0,0,1,0,2,(char*)&capn_buf[64],(struct capn_segment*)&capn_seg}};
capn_list16 TestConstants_uint16ListConst = {{2,1,0,0,2,0,2,(char*)&capn_buf[1664],(struct capn_segment*)&capn_seg}};
capn_list32 TestConstants_uint32ListConst = {{2,1,0,0,4,0,1,(char*)&capn_buf[1680],(struct capn_segment*)&capn_seg}};
capn_list64 TestConstants_uint64ListConst = {{2,1,0,0,8,0,1,(char*)&capn_buf[1696],(struct capn_segment*)&capn_seg}};
capn_list32 TestConstants_float32ListConst = {{2,1,0,0,4,0,4,(char*)&capn_buf[1712],(struct capn_segment*)&capn_seg}};
capn_list64 TestConstants_float64ListConst = {{2,1,0,0,8,0,4,(char*)&capn_buf[1736],(struct capn_segment*)&capn_seg}};
capn_ptr TestConstants_textListConst = {3,1,0,0,0,0,3,(char*)&capn_buf[1776],(struct capn_segment*)&capn_seg};
capn_ptr TestConstants_dataListConst = {3,1,0,0,0,0,3,(char*)&capn_buf[1832],(struct capn_segment*)&capn_seg};
TestAllTypes_list TestConstants_structListConst = {{2,1,0,1,48,20,3,(char*)&capn_buf[1904],(struct capn_segment*)&capn_seg}};
capn_list16 TestConstants_enumListConst = {{2,1,0,0,2,0,2,(char*)&capn_buf[2584],(struct capn_segment*)&capn_seg}};
uint32_t globalInt = 12345u;
capn_text globalText = {6,(char*)&capn_buf[2600],(struct capn_segment*)&capn_seg};
TestAllTypes_ptr globalStruct = {{1,1,0,0,48,20,0,(char*)&capn_buf[2616],(struct capn_segment*)&capn_seg}};
TestPrintInlineStructs_ptr globalPrintableStruct = {{1,1,0,0,0,2,0,(char*)&capn_buf[2832],(struct capn_segment*)&capn_seg}};
TestAllTypes_ptr derivedConstant = {{1,1,0,0,48,20,0,(char*)&capn_buf[2864],(struct capn_segment*)&capn_seg}};

TestAllTypes_ptr new_TestAllTypes(struct capn_segment *s) {
	TestAllTypes_ptr p;
	p.p = capn_new_struct(s, 48, 20);
	return p;
}
TestAllTypes_list new_TestAllTypes_list(struct capn_segment *s, int len) {
	TestAllTypes_list p;
	p.p = capn_new_list(s, len, 48, 20);
	return p;
}
void read_TestAllTypes(struct TestAllTypes *s capnp_unused, TestAllTypes_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->boolField = (capn_read8(p.p, 0) & 1) != 0;
	s->int8Field = (int8_t) ((int8_t)capn_read8(p.p, 1));
	s->int16Field = (int16_t) ((int16_t)capn_read16(p.p, 2));
	s->int32Field = (int32_t) ((int32_t)capn_read32(p.p, 4));
	s->int64Field = (int64_t) ((int64_t)(capn_read64(p.p, 8)));
	s->uInt8Field = capn_read8(p.p, 16);
	s->uInt16Field = capn_read16(p.p, 18);
	s->uInt32Field = capn_read32(p.p, 20);
	s->uInt64Field = capn_read64(p.p, 24);
	s->float32Field = capn_to_f32(capn_read32(p.p, 32));
	s->float64Field = capn_to_f64(capn_read64(p.p, 40));
	s->textField = capn_get_text(p.p, 0, capn_val0);
	s->dataField = capn_get_data(p.p, 1);
	s->structField.p = capn_getp(p.p, 2, 0);
	s->enumField = (enum TestEnum)(int) capn_read16(p.p, 36);
	s->voidList = capn_getp(p.p, 3, 0);
	s->boolList.p = capn_getp(p.p, 4, 0);
	s->int8List.p = capn_getp(p.p, 5, 0);
	s->int16List.p = capn_getp(p.p, 6, 0);
	s->int32List.p = capn_getp(p.p, 7, 0);
	s->int64List.p = capn_getp(p.p, 8, 0);
	s->uInt8List.p = capn_getp(p.p, 9, 0);
	s->uInt16List.p = capn_getp(p.p, 10, 0);
	s->uInt32List.p = capn_getp(p.p, 11, 0);
	s->uInt64List.p = capn_getp(p.p, 12, 0);
	s->float32List.p = capn_getp(p.p, 13, 0);
	s->float64List.p = capn_getp(p.p, 14, 0);
	s->textList = capn_getp(p.p, 15, 0);
	s->dataList = capn_getp(p.p, 16, 0);
	s->structList.p = capn_getp(p.p, 17, 0);
	s->enumList.p = capn_getp(p.p, 18, 0);
	s->interfaceList = capn_getp(p.p, 19, 0);
}
void write_TestAllTypes(const struct TestAllTypes *s capnp_unused, TestAllTypes_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write1(p.p, 0, s->boolField != 0);
	capn_write8(p.p, 1, (uint8_t) (s->int8Field));
	capn_write16(p.p, 2, (uint16_t) (s->int16Field));
	capn_write32(p.p, 4, (uint32_t) (s->int32Field));
	capn_write64(p.p, 8, (uint64_t) (s->int64Field));
	capn_write8(p.p, 16, s->uInt8Field);
	capn_write16(p.p, 18, s->uInt16Field);
	capn_write32(p.p, 20, s->uInt32Field);
	capn_write64(p.p, 24, s->uInt64Field);
	capn_write32(p.p, 32, capn_from_f32(s->float32Field));
	capn_write64(p.p, 40, capn_from_f64(s->float64Field));
	capn_set_text(p.p, 0, s->textField);
	capn_setp(p.p, 1, s->dataField.p);
	capn_setp(p.p, 2, s->structField.p);
	capn_write16(p.p, 36, (uint16_t) (s->enumField));
	capn_setp(p.p, 3, s->voidList);
	capn_setp(p.p, 4, s->boolList.p);
	capn_setp(p.p, 5, s->int8List.p);
	capn_setp(p.p, 6, s->int16List.p);
	capn_setp(p.p, 7, s->int32List.p);
	capn_setp(p.p, 8, s->int64List.p);
	capn_setp(p.p, 9, s->uInt8List.p);
	capn_setp(p.p, 10, s->uInt16List.p);
	capn_setp(p.p, 11, s->uInt32List.p);
	capn_setp(p.p, 12, s->uInt64List.p);
	capn_setp(p.p, 13, s->float32List.p);
	capn_setp(p.p, 14, s->float64List.p);
	capn_setp(p.p, 15, s->textList);
	capn_setp(p.p, 16, s->dataList);
	capn_setp(p.p, 17, s->structList.p);
	capn_setp(p.p, 18, s->enumList.p);
	capn_setp(p.p, 19, s->interfaceList);
}
void get_TestAllTypes(struct TestAllTypes *s, TestAllTypes_list l, int i) {
	TestAllTypes_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestAllTypes(s, p);
}
void set_TestAllTypes(const struct TestAllTypes *s, TestAllTypes_list l, int i) {
	TestAllTypes_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestAllTypes(s, p);
}

unsigned TestAllTypes_get_boolField(TestAllTypes_ptr p)
{
	unsigned boolField;
	boolField = (capn_read8(p.p, 0) & 1) != 0;
	return boolField;
}

int8_t TestAllTypes_get_int8Field(TestAllTypes_ptr p)
{
	int8_t int8Field;
	int8Field = (int8_t) ((int8_t)capn_read8(p.p, 1));
	return int8Field;
}

int16_t TestAllTypes_get_int16Field(TestAllTypes_ptr p)
{
	int16_t int16Field;
	int16Field = (int16_t) ((int16_t)capn_read16(p.p, 2));
	return int16Field;
}

int32_t TestAllTypes_get_int32Field(TestAllTypes_ptr p)
{
	int32_t int32Field;
	int32Field = (int32_t) ((int32_t)capn_read32(p.p, 4));
	return int32Field;
}

int64_t TestAllTypes_get_int64Field(TestAllTypes_ptr p)
{
	int64_t int64Field;
	int64Field = (int64_t) ((int64_t)(capn_read64(p.p, 8)));
	return int64Field;
}

uint8_t TestAllTypes_get_uInt8Field(TestAllTypes_ptr p)
{
	uint8_t uInt8Field;
	uInt8Field = capn_read8(p.p, 16);
	return uInt8Field;
}

uint16_t TestAllTypes_get_uInt16Field(TestAllTypes_ptr p)
{
	uint16_t uInt16Field;
	uInt16Field = capn_read16(p.p, 18);
	return uInt16Field;
}

uint32_t TestAllTypes_get_uInt32Field(TestAllTypes_ptr p)
{
	uint32_t uInt32Field;
	uInt32Field = capn_read32(p.p, 20);
	return uInt32Field;
}

uint64_t TestAllTypes_get_uInt64Field(TestAllTypes_ptr p)
{
	uint64_t uInt64Field;
	uInt64Field = capn_read64(p.p, 24);
	return uInt64Field;
}

float TestAllTypes_get_float32Field(TestAllTypes_ptr p)
{
	float float32Field;
	float32Field = capn_to_f32(capn_read32(p.p, 32));
	return float32Field;
}

double TestAllTypes_get_float64Field(TestAllTypes_ptr p)
{
	double float64Field;
	float64Field = capn_to_f64(capn_read64(p.p, 40));
	return float64Field;
}

capn_text TestAllTypes_get_textField(TestAllTypes_ptr p)
{
	capn_text textField;
	textField = capn_get_text(p.p, 0, capn_val0);
	return textField;
}

capn_data TestAllTypes_get_dataField(TestAllTypes_ptr p)
{
	capn_data dataField;
	dataField = capn_get_data(p.p, 1);
	return dataField;
}

TestAllTypes_ptr TestAllTypes_get_structField(TestAllTypes_ptr p)
{
	TestAllTypes_ptr structField;
	structField.p = capn_getp(p.p, 2, 0);
	return structField;
}

enum TestEnum TestAllTypes_get_enumField(TestAllTypes_ptr p)
{
	enum TestEnum enumField;
	enumField = (enum TestEnum)(int) capn_read16(p.p, 36);
	return enumField;
}

capn_ptr TestAllTypes_get_voidList(TestAllTypes_ptr p)
{
	capn_ptr voidList;
	voidList = capn_getp(p.p, 3, 0);
	return voidList;
}

capn_list1 TestAllTypes_get_boolList(TestAllTypes_ptr p)
{
	capn_list1 boolList;
	boolList.p = capn_getp(p.p, 4, 0);
	return boolList;
}

capn_list8 TestAllTypes_get_int8List(TestAllTypes_ptr p)
{
	capn_list8 int8List;
	int8List.p = capn_getp(p.p, 5, 0);
	return int8List;
}

capn_list16 TestAllTypes_get_int16List(TestAllTypes_ptr p)
{
	capn_list16 int16List;
	int16List.p = capn_getp(p.p, 6, 0);
	return int16List;
}

capn_list32 TestAllTypes_get_int32List(TestAllTypes_ptr p)
{
	capn_list32 int32List;
	int32List.p = capn_getp(p.p, 7, 0);
	return int32List;
}

capn_list64 TestAllTypes_get_int64List(TestAllTypes_ptr p)
{
	capn_list64 int64List;
	int64List.p = capn_getp(p.p, 8, 0);
	return int64List;
}

capn_list8 TestAllTypes_get_uInt8List(TestAllTypes_ptr p)
{
	capn_list8 uInt8List;
	uInt8List.p = capn_getp(p.p, 9, 0);
	return uInt8List;
}

capn_list16 TestAllTypes_get_uInt16List(TestAllTypes_ptr p)
{
	capn_list16 uInt16List;
	uInt16List.p = capn_getp(p.p, 10, 0);
	return uInt16List;
}

capn_list32 TestAllTypes_get_uInt32List(TestAllTypes_ptr p)
{
	capn_list32 uInt32List;
	uInt32List.p = capn_getp(p.p, 11, 0);
	return uInt32List;
}

capn_list64 TestAllTypes_get_uInt64List(TestAllTypes_ptr p)
{
	capn_list64 uInt64List;
	uInt64List.p = capn_getp(p.p, 12, 0);
	return uInt64List;
}

capn_list32 TestAllTypes_get_float32List(TestAllTypes_ptr p)
{
	capn_list32 float32List;
	float32List.p = capn_getp(p.p, 13, 0);
	return float32List;
}

capn_list64 TestAllTypes_get_float64List(TestAllTypes_ptr p)
{
	capn_list64 float64List;
	float64List.p = capn_getp(p.p, 14, 0);
	return float64List;
}

capn_ptr TestAllTypes_get_textList(TestAllTypes_ptr p)
{
	capn_ptr textList;
	textList = capn_getp(p.p, 15, 0);
	return textList;
}

capn_ptr TestAllTypes_get_dataList(TestAllTypes_ptr p)
{
	capn_ptr dataList;
	dataList = capn_getp(p.p, 16, 0);
	return dataList;
}

TestAllTypes_list TestAllTypes_get_structList(TestAllTypes_ptr p)
{
	TestAllTypes_list structList;
	structList.p = capn_getp(p.p, 17, 0);
	return structList;
}

capn_list16 TestAllTypes_get_enumList(TestAllTypes_ptr p)
{
	capn_list16 enumList;
	enumList.p = capn_getp(p.p, 18, 0);
	return enumList;
}

capn_ptr TestAllTypes_get_interfaceList(TestAllTypes_ptr p)
{
	capn_ptr interfaceList;
	interfaceList = capn_getp(p.p, 19, 0);
	return interfaceList;
}

void TestAllTypes_set_boolField(TestAllTypes_ptr p, unsigned boolField)
{
	capn_write1(p.p, 0, boolField != 0);
}

void TestAllTypes_set_int8Field(TestAllTypes_ptr p, int8_t int8Field)
{
	capn_write8(p.p, 1, (uint8_t) (int8Field));
}

void TestAllTypes_set_int16Field(TestAllTypes_ptr p, int16_t int16Field)
{
	capn_write16(p.p, 2, (uint16_t) (int16Field));
}

void TestAllTypes_set_int32Field(TestAllTypes_ptr p, int32_t int32Field)
{
	capn_write32(p.p, 4, (uint32_t) (int32Field));
}

void TestAllTypes_set_int64Field(TestAllTypes_ptr p, int64_t int64Field)
{
	capn_write64(p.p, 8, (uint64_t) (int64Field));
}

void TestAllTypes_set_uInt8Field(TestAllTypes_ptr p, uint8_t uInt8Field)
{
	capn_write8(p.p, 16, uInt8Field);
}

void TestAllTypes_set_uInt16Field(TestAllTypes_ptr p, uint16_t uInt16Field)
{
	capn_write16(p.p, 18, uInt16Field);
}

void TestAllTypes_set_uInt32Field(TestAllTypes_ptr p, uint32_t uInt32Field)
{
	capn_write32(p.p, 20, uInt32Field);
}

void TestAllTypes_set_uInt64Field(TestAllTypes_ptr p, uint64_t uInt64Field)
{
	capn_write64(p.p, 24, uInt64Field);
}

void TestAllTypes_set_float32Field(TestAllTypes_ptr p, float float32Field)
{
	capn_write32(p.p, 32, capn_from_f32(float32Field));
}

void TestAllTypes_set_float64Field(TestAllTypes_ptr p, double float64Field)
{
	capn_write64(p.p, 40, capn_from_f64(float64Field));
}

void TestAllTypes_set_textField(TestAllTypes_ptr p, capn_text textField)
{
	capn_set_text(p.p, 0, textField);
}

void TestAllTypes_set_dataField(TestAllTypes_ptr p, capn_data dataField)
{
	capn_setp(p.p, 1, dataField.p);
}

void TestAllTypes_set_structField(TestAllTypes_ptr p, TestAllTypes_ptr structField)
{
	capn_setp(p.p, 2, structField.p);
}

void TestAllTypes_set_enumField(TestAllTypes_ptr p, enum TestEnum enumField)
{
	capn_write16(p.p, 36, (uint16_t) (enumField));
}

void TestAllTypes_set_voidList(TestAllTypes_ptr p, capn_ptr voidList)
{
	capn_setp(p.p, 3, voidList);
}

void TestAllTypes_set_boolList(TestAllTypes_ptr p, capn_list1 boolList)
{
	capn_setp(p.p, 4, boolList.p);
}

void TestAllTypes_set_int8List(TestAllTypes_ptr p, capn_list8 int8List)
{
	capn_setp(p.p, 5, int8List.p);
}

void TestAllTypes_set_int16List(TestAllTypes_ptr p, capn_list16 int16List)
{
	capn_setp(p.p, 6, int16List.p);
}

void TestAllTypes_set_int32List(TestAllTypes_ptr p, capn_list32 int32List)
{
	capn_setp(p.p, 7, int32List.p);
}

void TestAllTypes_set_int64List(TestAllTypes_ptr p, capn_list64 int64List)
{
	capn_setp(p.p, 8, int64List.p);
}

void TestAllTypes_set_uInt8List(TestAllTypes_ptr p, capn_list8 uInt8List)
{
	capn_setp(p.p, 9, uInt8List.p);
}

void TestAllTypes_set_uInt16List(TestAllTypes_ptr p, capn_list16 uInt16List)
{
	capn_setp(p.p, 10, uInt16List.p);
}

void TestAllTypes_set_uInt32List(TestAllTypes_ptr p, capn_list32 uInt32List)
{
	capn_setp(p.p, 11, uInt32List.p);
}

void TestAllTypes_set_uInt64List(TestAllTypes_ptr p, capn_list64 uInt64List)
{
	capn_setp(p.p, 12, uInt64List.p);
}

void TestAllTypes_set_float32List(TestAllTypes_ptr p, capn_list32 float32List)
{
	capn_setp(p.p, 13, float32List.p);
}

void TestAllTypes_set_float64List(TestAllTypes_ptr p, capn_list64 float64List)
{
	capn_setp(p.p, 14, float64List.p);
}

void TestAllTypes_set_textList(TestAllTypes_ptr p, capn_ptr textList)
{
	capn_setp(p.p, 15, textList);
}

void TestAllTypes_set_dataList(TestAllTypes_ptr p, capn_ptr dataList)
{
	capn_setp(p.p, 16, dataList);
}

void TestAllTypes_set_structList(TestAllTypes_ptr p, TestAllTypes_list structList)
{
	capn_setp(p.p, 17, structList.p);
}

void TestAllTypes_set_enumList(TestAllTypes_ptr p, capn_list16 enumList)
{
	capn_setp(p.p, 18, enumList.p);
}

void TestAllTypes_set_interfaceList(TestAllTypes_ptr p, capn_ptr interfaceList)
{
	capn_setp(p.p, 19, interfaceList);
}
static capn_text capn_val1 = {3,(char*)&capn_buf[1464],(struct capn_segment*)&capn_seg};
static capn_data capn_val2 = {{2,1,0,0,1,0,3,(char*)&capn_buf[1480],(struct capn_segment*)&capn_seg}};
static TestAllTypes_ptr capn_val3 = {{1,1,0,0,48,20,0,(char*)&capn_buf[1496],(struct capn_segment*)&capn_seg}};
static capn_ptr capn_val4 = {2,0,0,0,0,0,6,(char*)&capn_buf[72],(struct capn_segment*)&capn_seg};
static capn_list1 capn_val5 = {{4,1,0,0,1,0,4,(char*)&capn_buf[3160],(struct capn_segment*)&capn_seg}};
static capn_list8 capn_val6 = {{2,1,0,0,1,0,2,(char*)&capn_buf[3176],(struct capn_segment*)&capn_seg}};
static capn_list16 capn_val7 = {{2,1,0,0,2,0,2,(char*)&capn_buf[3192],(struct capn_segment*)&capn_seg}};
static capn_list32 capn_val8 = {{2,1,0,0,4,0,2,(char*)&capn_buf[3208],(struct capn_segment*)&capn_seg}};
static capn_list64 capn_val9 = {{2,1,0,0,8,0,2,(char*)&capn_buf[3224],(struct capn_segment*)&capn_seg}};
static capn_list8 capn_val10 = {{2,1,0,0,1,0,2,(char*)&capn_buf[3248],(struct capn_segment*)&capn_seg}};
static capn_list16 capn_val11 = {{2,1,0,0,2,0,2,(char*)&capn_buf[3264],(struct capn_segment*)&capn_seg}};
static capn_list32 capn_val12 = {{2,1,0,0,4,0,1,(char*)&capn_buf[3280],(struct capn_segment*)&capn_seg}};
static capn_list64 capn_val13 = {{2,1,0,0,8,0,1,(char*)&capn_buf[3296],(struct capn_segment*)&capn_seg}};
static capn_list32 capn_val14 = {{2,1,0,0,4,0,4,(char*)&capn_buf[3312],(struct capn_segment*)&capn_seg}};
static capn_list64 capn_val15 = {{2,1,0,0,8,0,4,(char*)&capn_buf[3336],(struct capn_segment*)&capn_seg}};
static capn_ptr capn_val16 = {3,1,0,0,0,0,3,(char*)&capn_buf[3376],(struct capn_segment*)&capn_seg};
static capn_ptr capn_val17 = {3,1,0,0,0,0,3,(char*)&capn_buf[3432],(struct capn_segment*)&capn_seg};
static TestAllTypes_list capn_val18 = {{2,1,0,1,48,20,3,(char*)&capn_buf[8],(struct capn_segment*)&capn_seg}};
static capn_list16 capn_val19 = {{2,1,0,0,2,0,2,(char*)&capn_buf[3496],(struct capn_segment*)&capn_seg}};

TestDefaults_ptr new_TestDefaults(struct capn_segment *s) {
	TestDefaults_ptr p;
	p.p = capn_new_struct(s, 48, 20);
	return p;
}
TestDefaults_list new_TestDefaults_list(struct capn_segment *s, int len) {
	TestDefaults_list p;
	p.p = capn_new_list(s, len, 48, 20);
	return p;
}
void read_TestDefaults(struct TestDefaults *s capnp_unused, TestDefaults_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->boolField = (capn_read8(p.p, 0) & 1) != 1;
	s->int8Field = (int8_t) ((int8_t)capn_read8(p.p, 1)) ^ -123;
	s->int16Field = (int16_t) ((int16_t)capn_read16(p.p, 2)) ^ -12345;
	s->int32Field = (int32_t) ((int32_t)capn_read32(p.p, 4)) ^ -12345678;
	s->int64Field = (int64_t) ((int64_t)(capn_read64(p.p, 8)) ^ ((int64_t)((uint64_t) 0xffff8fb7u << 32) ^ 0x79f22087u));
	s->uInt8Field = capn_read8(p.p, 16) ^ 234u;
	s->uInt16Field = capn_read16(p.p, 18) ^ 45678u;
	s->uInt32Field = capn_read32(p.p, 20) ^ 3456789012u;
	s->uInt64Field = capn_read64(p.p, 24) ^ ((uint64_t) 0xab54a98cu << 32) ^ 0xeb1f0ad2u;
	s->float32Field = capn_to_f32(capn_read32(p.p, 32) ^ 0x449a5000u);
	s->float64Field = capn_to_f64(capn_read64(p.p, 40) ^ ((uint64_t) 0xc9b58b82u << 32) ^ 0xc0e0bb00u);
	s->textField = capn_get_text(p.p, 0, capn_val1);
	s->dataField = capn_get_data(p.p, 1);
	if (!s->dataField.p.type) {
		s->dataField = capn_val2;
	}
	s->structField.p = capn_getp(p.p, 2, 0);
	if (!s->structField.p.type) {
		s->structField = capn_val3;
	}
	s->enumField = (enum TestEnum)(int) capn_read16(p.p, 36) ^ 5u;
	s->voidList = capn_getp(p.p, 3, 0);
	if (!s->voidList.type) {
		s->voidList = capn_val4;
	}
	s->boolList.p = capn_getp(p.p, 4, 0);
	if (!s->boolList.p.type) {
		s->boolList = capn_val5;
	}
	s->int8List.p = capn_getp(p.p, 5, 0);
	if (!s->int8List.p.type) {
		s->int8List = capn_val6;
	}
	s->int16List.p = capn_getp(p.p, 6, 0);
	if (!s->int16List.p.type) {
		s->int16List = capn_val7;
	}
	s->int32List.p = capn_getp(p.p, 7, 0);
	if (!s->int32List.p.type) {
		s->int32List = capn_val8;
	}
	s->int64List.p = capn_getp(p.p, 8, 0);
	if (!s->int64List.p.type) {
		s->int64List = capn_val9;
	}
	s->uInt8List.p = capn_getp(p.p, 9, 0);
	if (!s->uInt8List.p.type) {
		s->uInt8List = capn_val10;
	}
	s->uInt16List.p = capn_getp(p.p, 10, 0);
	if (!s->uInt16List.p.type) {
		s->uInt16List = capn_val11;
	}
	s->uInt32List.p = capn_getp(p.p, 11, 0);
	if (!s->uInt32List.p.type) {
		s->uInt32List = capn_val12;
	}
	s->uInt64List.p = capn_getp(p.p, 12, 0);
	if (!s->uInt64List.p.type) {
		s->uInt64List = capn_val13;
	}
	s->float32List.p = capn_getp(p.p, 13, 0);
	if (!s->float32List.p.type) {
		s->float32List = capn_val14;
	}
	s->float64List.p = capn_getp(p.p, 14, 0);
	if (!s->float64List.p.type) {
		s->float64List = capn_val15;
	}
	s->textList = capn_getp(p.p, 15, 0);
	if (!s->textList.type) {
		s->textList = capn_val16;
	}
	s->dataList = capn_getp(p.p, 16, 0);
	if (!s->dataList.type) {
		s->dataList = capn_val17;
	}
	s->structList.p = capn_getp(p.p, 17, 0);
	if (!s->structList.p.type) {
		s->structList = capn_val18;
	}
	s->enumList.p = capn_getp(p.p, 18, 0);
	if (!s->enumList.p.type) {
		s->enumList = capn_val19;
	}
	s->interfaceList = capn_getp(p.p, 19, 0);
}
void write_TestDefaults(const struct TestDefaults *s capnp_unused, TestDefaults_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write1(p.p, 0, s->boolField != 1);
	capn_write8(p.p, 1, (uint8_t) (s->int8Field ^ -123));
	capn_write16(p.p, 2, (uint16_t) (s->int16Field ^ -12345));
	capn_write32(p.p, 4, (uint32_t) (s->int32Field ^ -12345678));
	capn_write64(p.p, 8, (uint64_t) (s->int64Field ^ ((int64_t)((uint64_t) 0xffff8fb7u << 32) ^ 0x79f22087u)));
	capn_write8(p.p, 16, s->uInt8Field ^ 234u);
	capn_write16(p.p, 18, s->uInt16Field ^ 45678u);
	capn_write32(p.p, 20, s->uInt32Field ^ 3456789012u);
	capn_write64(p.p, 24, s->uInt64Field ^ ((uint64_t) 0xab54a98cu << 32) ^ 0xeb1f0ad2u);
	capn_write32(p.p, 32, capn_from_f32(s->float32Field) ^ 0x449a5000u);
	capn_write64(p.p, 40, capn_from_f64(s->float64Field) ^ ((uint64_t) 0xc9b58b82u << 32) ^ 0xc0e0bb00u);
	capn_set_text(p.p, 0, (s->textField.str != capn_val1.str) ? s->textField : capn_val0);
	capn_setp(p.p, 1, (s->dataField.p.data != capn_val2.p.data) ? s->dataField.p : capn_null);
	capn_setp(p.p, 2, (s->structField.p.data != capn_val3.p.data) ? s->structField.p : capn_null);
	capn_write16(p.p, 36, (uint16_t) (s->enumField ^ 5u));
	capn_setp(p.p, 3, (s->voidList.data != capn_val4.data) ? s->voidList : capn_null);
	capn_setp(p.p, 4, (s->boolList.p.data != capn_val5.p.data) ? s->boolList.p : capn_null);
	capn_setp(p.p, 5, (s->int8List.p.data != capn_val6.p.data) ? s->int8List.p : capn_null);
	capn_setp(p.p, 6, (s->int16List.p.data != capn_val7.p.data) ? s->int16List.p : capn_null);
	capn_setp(p.p, 7, (s->int32List.p.data != capn_val8.p.data) ? s->int32List.p : capn_null);
	capn_setp(p.p, 8, (s->int64List.p.data != capn_val9.p.data) ? s->int64List.p : capn_null);
	capn_setp(p.p, 9, (s->uInt8List.p.data != capn_val10.p.data) ? s->uInt8List.p : capn_null);
	capn_setp(p.p, 10, (s->uInt16List.p.data != capn_val11.p.data) ? s->uInt16List.p : capn_null);
	capn_setp(p.p, 11, (s->uInt32List.p.data != capn_val12.p.data) ? s->uInt32List.p : capn_null);
	capn_setp(p.p, 12, (s->uInt64List.p.data != capn_val13.p.data) ? s->uInt64List.p : capn_null);
	capn_setp(p.p, 13, (s->float32List.p.data != capn_val14.p.data) ? s->float32List.p : capn_null);
	capn_setp(p.p, 14, (s->float64List.p.data != capn_val15.p.data) ? s->float64List.p : capn_null);
	capn_setp(p.p, 15, (s->textList.data != capn_val16.data) ? s->textList : capn_null);
	capn_setp(p.p, 16, (s->dataList.data != capn_val17.data) ? s->dataList : capn_null);
	capn_setp(p.p, 17, (s->structList.p.data != capn_val18.p.data) ? s->structList.p : capn_null);
	capn_setp(p.p, 18, (s->enumList.p.data != capn_val19.p.data) ? s->enumList.p : capn_null);
	capn_setp(p.p, 19, s->interfaceList);
}
void get_TestDefaults(struct TestDefaults *s, TestDefaults_list l, int i) {
	TestDefaults_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestDefaults(s, p);
}
void set_TestDefaults(const struct TestDefaults *s, TestDefaults_list l, int i) {
	TestDefaults_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestDefaults(s, p);
}

unsigned TestDefaults_get_boolField(TestDefaults_ptr p)
{
	unsigned boolField;
	boolField = (capn_read8(p.p, 0) & 1) != 1;
	return boolField;
}

int8_t TestDefaults_get_int8Field(TestDefaults_ptr p)
{
	int8_t int8Field;
	int8Field = (int8_t) ((int8_t)capn_read8(p.p, 1)) ^ -123;
	return int8Field;
}

int16_t TestDefaults_get_int16Field(TestDefaults_ptr p)
{
	int16_t int16Field;
	int16Field = (int16_t) ((int16_t)capn_read16(p.p, 2)) ^ -12345;
	return int16Field;
}

int32_t TestDefaults_get_int32Field(TestDefaults_ptr p)
{
	int32_t int32Field;
	int32Field = (int32_t) ((int32_t)capn_read32(p.p, 4)) ^ -12345678;
	return int32Field;
}

int64_t TestDefaults_get_int64Field(TestDefaults_ptr p)
{
	int64_t int64Field;
	int64Field = (int64_t) ((int64_t)(capn_read64(p.p, 8)) ^ ((int64_t)((uint64_t) 0xffff8fb7u << 32) ^ 0x79f22087u));
	return int64Field;
}

uint8_t TestDefaults_get_uInt8Field(TestDefaults_ptr p)
{
	uint8_t uInt8Field;
	uInt8Field = capn_read8(p.p, 16) ^ 234u;
	return uInt8Field;
}

uint16_t TestDefaults_get_uInt16Field(TestDefaults_ptr p)
{
	uint16_t uInt16Field;
	uInt16Field = capn_read16(p.p, 18) ^ 45678u;
	return uInt16Field;
}

uint32_t TestDefaults_get_uInt32Field(TestDefaults_ptr p)
{
	uint32_t uInt32Field;
	uInt32Field = capn_read32(p.p, 20) ^ 3456789012u;
	return uInt32Field;
}

uint64_t TestDefaults_get_uInt64Field(TestDefaults_ptr p)
{
	uint64_t uInt64Field;
	uInt64Field = capn_read64(p.p, 24) ^ ((uint64_t) 0xab54a98cu << 32) ^ 0xeb1f0ad2u;
	return uInt64Field;
}

float TestDefaults_get_float32Field(TestDefaults_ptr p)
{
	float float32Field;
	float32Field = capn_to_f32(capn_read32(p.p, 32) ^ 0x449a5000u);
	return float32Field;
}

double TestDefaults_get_float64Field(TestDefaults_ptr p)
{
	double float64Field;
	float64Field = capn_to_f64(capn_read64(p.p, 40) ^ ((uint64_t) 0xc9b58b82u << 32) ^ 0xc0e0bb00u);
	return float64Field;
}

capn_text TestDefaults_get_textField(TestDefaults_ptr p)
{
	capn_text textField;
	textField = capn_get_text(p.p, 0, capn_val1);
	return textField;
}

capn_data TestDefaults_get_dataField(TestDefaults_ptr p)
{
	capn_data dataField;
	dataField = capn_get_data(p.p, 1);
if (!dataField.p.type) {
	dataField = capn_val2;
}
	return dataField;
}

TestAllTypes_ptr TestDefaults_get_structField(TestDefaults_ptr p)
{
	TestAllTypes_ptr structField;
	structField.p = capn_getp(p.p, 2, 0);
if (!structField.p.type) {
	structField = capn_val3;
}
	return structField;
}

enum TestEnum TestDefaults_get_enumField(TestDefaults_ptr p)
{
	enum TestEnum enumField;
	enumField = (enum TestEnum)(int) capn_read16(p.p, 36) ^ 5u;
	return enumField;
}

capn_ptr TestDefaults_get_voidList(TestDefaults_ptr p)
{
	capn_ptr voidList;
	voidList = capn_getp(p.p, 3, 0);
if (!voidList.type) {
	voidList = capn_val4;
}
	return voidList;
}

capn_list1 TestDefaults_get_boolList(TestDefaults_ptr p)
{
	capn_list1 boolList;
	boolList.p = capn_getp(p.p, 4, 0);
if (!boolList.p.type) {
	boolList = capn_val5;
}
	return boolList;
}

capn_list8 TestDefaults_get_int8List(TestDefaults_ptr p)
{
	capn_list8 int8List;
	int8List.p = capn_getp(p.p, 5, 0);
if (!int8List.p.type) {
	int8List = capn_val6;
}
	return int8List;
}

capn_list16 TestDefaults_get_int16List(TestDefaults_ptr p)
{
	capn_list16 int16List;
	int16List.p = capn_getp(p.p, 6, 0);
if (!int16List.p.type) {
	int16List = capn_val7;
}
	return int16List;
}

capn_list32 TestDefaults_get_int32List(TestDefaults_ptr p)
{
	capn_list32 int32List;
	int32List.p = capn_getp(p.p, 7, 0);
if (!int32List.p.type) {
	int32List = capn_val8;
}
	return int32List;
}

capn_list64 TestDefaults_get_int64List(TestDefaults_ptr p)
{
	capn_list64 int64List;
	int64List.p = capn_getp(p.p, 8, 0);
if (!int64List.p.type) {
	int64List = capn_val9;
}
	return int64List;
}

capn_list8 TestDefaults_get_uInt8List(TestDefaults_ptr p)
{
	capn_list8 uInt8List;
	uInt8List.p = capn_getp(p.p, 9, 0);
if (!uInt8List.p.type) {
	uInt8List = capn_val10;
}
	return uInt8List;
}

capn_list16 TestDefaults_get_uInt16List(TestDefaults_ptr p)
{
	capn_list16 uInt16List;
	uInt16List.p = capn_getp(p.p, 10, 0);
if (!uInt16List.p.type) {
	uInt16List = capn_val11;
}
	return uInt16List;
}

capn_list32 TestDefaults_get_uInt32List(TestDefaults_ptr p)
{
	capn_list32 uInt32List;
	uInt32List.p = capn_getp(p.p, 11, 0);
if (!uInt32List.p.type) {
	uInt32List = capn_val12;
}
	return uInt32List;
}

capn_list64 TestDefaults_get_uInt64List(TestDefaults_ptr p)
{
	capn_list64 uInt64List;
	uInt64List.p = capn_getp(p.p, 12, 0);
if (!uInt64List.p.type) {
	uInt64List = capn_val13;
}
	return uInt64List;
}

capn_list32 TestDefaults_get_float32List(TestDefaults_ptr p)
{
	capn_list32 float32List;
	float32List.p = capn_getp(p.p, 13, 0);
if (!float32List.p.type) {
	float32List = capn_val14;
}
	return float32List;
}

capn_list64 TestDefaults_get_float64List(TestDefaults_ptr p)
{
	capn_list64 float64List;
	float64List.p = capn_getp(p.p, 14, 0);
if (!float64List.p.type) {
	float64List = capn_val15;
}
	return float64List;
}

capn_ptr TestDefaults_get_textList(TestDefaults_ptr p)
{
	capn_ptr textList;
	textList = capn_getp(p.p, 15, 0);
if (!textList.type) {
	textList = capn_val16;
}
	return textList;
}

capn_ptr TestDefaults_get_dataList(TestDefaults_ptr p)
{
	capn_ptr dataList;
	dataList = capn_getp(p.p, 16, 0);
if (!dataList.type) {
	dataList = capn_val17;
}
	return dataList;
}

TestAllTypes_list TestDefaults_get_structList(TestDefaults_ptr p)
{
	TestAllTypes_list structList;
	structList.p = capn_getp(p.p, 17, 0);
if (!structList.p.type) {
	structList = capn_val18;
}
	return structList;
}

capn_list16 TestDefaults_get_enumList(TestDefaults_ptr p)
{
	capn_list16 enumList;
	enumList.p = capn_getp(p.p, 18, 0);
if (!enumList.p.type) {
	enumList = capn_val19;
}
	return enumList;
}

capn_ptr TestDefaults_get_interfaceList(TestDefaults_ptr p)
{
	capn_ptr interfaceList;
	interfaceList = capn_getp(p.p, 19, 0);
	return interfaceList;
}

void TestDefaults_set_boolField(TestDefaults_ptr p, unsigned boolField)
{
	capn_write1(p.p, 0, boolField != 1);
}

void TestDefaults_set_int8Field(TestDefaults_ptr p, int8_t int8Field)
{
	capn_write8(p.p, 1, (uint8_t) (int8Field ^ -123));
}

void TestDefaults_set_int16Field(TestDefaults_ptr p, int16_t int16Field)
{
	capn_write16(p.p, 2, (uint16_t) (int16Field ^ -12345));
}

void TestDefaults_set_int32Field(TestDefaults_ptr p, int32_t int32Field)
{
	capn_write32(p.p, 4, (uint32_t) (int32Field ^ -12345678));
}

void TestDefaults_set_int64Field(TestDefaults_ptr p, int64_t int64Field)
{
	capn_write64(p.p, 8, (uint64_t) (int64Field ^ ((int64_t)((uint64_t) 0xffff8fb7u << 32) ^ 0x79f22087u)));
}

void TestDefaults_set_uInt8Field(TestDefaults_ptr p, uint8_t uInt8Field)
{
	capn_write8(p.p, 16, uInt8Field ^ 234u);
}

void TestDefaults_set_uInt16Field(TestDefaults_ptr p, uint16_t uInt16Field)
{
	capn_write16(p.p, 18, uInt16Field ^ 45678u);
}

void TestDefaults_set_uInt32Field(TestDefaults_ptr p, uint32_t uInt32Field)
{
	capn_write32(p.p, 20, uInt32Field ^ 3456789012u);
}

void TestDefaults_set_uInt64Field(TestDefaults_ptr p, uint64_t uInt64Field)
{
	capn_write64(p.p, 24, uInt64Field ^ ((uint64_t) 0xab54a98cu << 32) ^ 0xeb1f0ad2u);
}

void TestDefaults_set_float32Field(TestDefaults_ptr p, float float32Field)
{
	capn_write32(p.p, 32, capn_from_f32(float32Field) ^ 0x449a5000u);
}

void TestDefaults_set_float64Field(TestDefaults_ptr p, double float64Field)
{
	capn_write64(p.p, 40, capn_from_f64(float64Field) ^ ((uint64_t) 0xc9b58b82u << 32) ^ 0xc0e0bb00u);
}

void TestDefaults_set_textField(TestDefaults_ptr p, capn_text textField)
{
	capn_set_text(p.p, 0, (textField.str != capn_val1.str) ? textField : capn_val0);
}

void TestDefaults_set_dataField(TestDefaults_ptr p, capn_data dataField)
{
	capn_setp(p.p, 1, (dataField.p.data != capn_val2.p.data) ? dataField.p : capn_null);
}

void TestDefaults_set_structField(TestDefaults_ptr p, TestAllTypes_ptr structField)
{
	capn_setp(p.p, 2, (structField.p.data != capn_val3.p.data) ? structField.p : capn_null);
}

void TestDefaults_set_enumField(TestDefaults_ptr p, enum TestEnum enumField)
{
	capn_write16(p.p, 36, (uint16_t) (enumField ^ 5u));
}

void TestDefaults_set_voidList(TestDefaults_ptr p, capn_ptr voidList)
{
	capn_setp(p.p, 3, (voidList.data != capn_val4.data) ? voidList : capn_null);
}

void TestDefaults_set_boolList(TestDefaults_ptr p, capn_list1 boolList)
{
	capn_setp(p.p, 4, (boolList.p.data != capn_val5.p.data) ? boolList.p : capn_null);
}

void TestDefaults_set_int8List(TestDefaults_ptr p, capn_list8 int8List)
{
	capn_setp(p.p, 5, (int8List.p.data != capn_val6.p.data) ? int8List.p : capn_null);
}

void TestDefaults_set_int16List(TestDefaults_ptr p, capn_list16 int16List)
{
	capn_setp(p.p, 6, (int16List.p.data != capn_val7.p.data) ? int16List.p : capn_null);
}

void TestDefaults_set_int32List(TestDefaults_ptr p, capn_list32 int32List)
{
	capn_setp(p.p, 7, (int32List.p.data != capn_val8.p.data) ? int32List.p : capn_null);
}

void TestDefaults_set_int64List(TestDefaults_ptr p, capn_list64 int64List)
{
	capn_setp(p.p, 8, (int64List.p.data != capn_val9.p.data) ? int64List.p : capn_null);
}

void TestDefaults_set_uInt8List(TestDefaults_ptr p, capn_list8 uInt8List)
{
	capn_setp(p.p, 9, (uInt8List.p.data != capn_val10.p.data) ? uInt8List.p : capn_null);
}

void TestDefaults_set_uInt16List(TestDefaults_ptr p, capn_list16 uInt16List)
{
	capn_setp(p.p, 10, (uInt16List.p.data != capn_val11.p.data) ? uInt16List.p : capn_null);
}

void TestDefaults_set_uInt32List(TestDefaults_ptr p, capn_list32 uInt32List)
{
	capn_setp(p.p, 11, (uInt32List.p.data != capn_val12.p.data) ? uInt32List.p : capn_null);
}

void TestDefaults_set_uInt64List(TestDefaults_ptr p, capn_list64 uInt64List)
{
	capn_setp(p.p, 12, (uInt64List.p.data != capn_val13.p.data) ? uInt64List.p : capn_null);
}

void TestDefaults_set_float32List(TestDefaults_ptr p, capn_list32 float32List)
{
	capn_setp(p.p, 13, (float32List.p.data != capn_val14.p.data) ? float32List.p : capn_null);
}

void TestDefaults_set_float64List(TestDefaults_ptr p, capn_list64 float64List)
{
	capn_setp(p.p, 14, (float64List.p.data != capn_val15.p.data) ? float64List.p : capn_null);
}

void TestDefaults_set_textList(TestDefaults_ptr p, capn_ptr textList)
{
	capn_setp(p.p, 15, (textList.data != capn_val16.data) ? textList : capn_null);
}

void TestDefaults_set_dataList(TestDefaults_ptr p, capn_ptr dataList)
{
	capn_setp(p.p, 16, (dataList.data != capn_val17.data) ? dataList : capn_null);
}

void TestDefaults_set_structList(TestDefaults_ptr p, TestAllTypes_list structList)
{
	capn_setp(p.p, 17, (structList.p.data != capn_val18.p.data) ? structList.p : capn_null);
}

void TestDefaults_set_enumList(TestDefaults_ptr p, capn_list16 enumList)
{
	capn_setp(p.p, 18, (enumList.p.data != capn_val19.p.data) ? enumList.p : capn_null);
}

void TestDefaults_set_interfaceList(TestDefaults_ptr p, capn_ptr interfaceList)
{
	capn_setp(p.p, 19, interfaceList);
}

TestAnyPointer_ptr new_TestAnyPointer(struct capn_segment *s) {
	TestAnyPointer_ptr p;
	p.p = capn_new_struct(s, 0, 1);
	return p;
}
TestAnyPointer_list new_TestAnyPointer_list(struct capn_segment *s, int len) {
	TestAnyPointer_list p;
	p.p = capn_new_list(s, len, 0, 1);
	return p;
}
void read_TestAnyPointer(struct TestAnyPointer *s capnp_unused, TestAnyPointer_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->anyPointerField = capn_getp(p.p, 0, 0);
}
void write_TestAnyPointer(const struct TestAnyPointer *s capnp_unused, TestAnyPointer_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_setp(p.p, 0, s->anyPointerField);
}
void get_TestAnyPointer(struct TestAnyPointer *s, TestAnyPointer_list l, int i) {
	TestAnyPointer_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestAnyPointer(s, p);
}
void set_TestAnyPointer(const struct TestAnyPointer *s, TestAnyPointer_list l, int i) {
	TestAnyPointer_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestAnyPointer(s, p);
}

capn_ptr TestAnyPointer_get_anyPointerField(TestAnyPointer_ptr p)
{
	capn_ptr anyPointerField;
	anyPointerField = capn_getp(p.p, 0, 0);
	return anyPointerField;
}

void TestAnyPointer_set_anyPointerField(TestAnyPointer_ptr p, capn_ptr anyPointerField)
{
	capn_setp(p.p, 0, anyPointerField);
}

TestOutOfOrder_ptr new_TestOutOfOrder(struct capn_segment *s) {
	TestOutOfOrder_ptr p;
	p.p = capn_new_struct(s, 0, 9);
	return p;
}
TestOutOfOrder_list new_TestOutOfOrder_list(struct capn_segment *s, int len) {
	TestOutOfOrder_list p;
	p.p = capn_new_list(s, len, 0, 9);
	return p;
}
void read_TestOutOfOrder(struct TestOutOfOrder *s capnp_unused, TestOutOfOrder_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->foo = capn_get_text(p.p, 3, capn_val0);
	s->bar = capn_get_text(p.p, 2, capn_val0);
	s->baz = capn_get_text(p.p, 8, capn_val0);
	s->qux = capn_get_text(p.p, 0, capn_val0);
	s->quux = capn_get_text(p.p, 6, capn_val0);
	s->corge = capn_get_text(p.p, 4, capn_val0);
	s->grault = capn_get_text(p.p, 1, capn_val0);
	s->garply = capn_get_text(p.p, 7, capn_val0);
	s->waldo = capn_get_text(p.p, 5, capn_val0);
}
void write_TestOutOfOrder(const struct TestOutOfOrder *s capnp_unused, TestOutOfOrder_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 3, s->foo);
	capn_set_text(p.p, 2, s->bar);
	capn_set_text(p.p, 8, s->baz);
	capn_set_text(p.p, 0, s->qux);
	capn_set_text(p.p, 6, s->quux);
	capn_set_text(p.p, 4, s->corge);
	capn_set_text(p.p, 1, s->grault);
	capn_set_text(p.p, 7, s->garply);
	capn_set_text(p.p, 5, s->waldo);
}
void get_TestOutOfOrder(struct TestOutOfOrder *s, TestOutOfOrder_list l, int i) {
	TestOutOfOrder_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestOutOfOrder(s, p);
}
void set_TestOutOfOrder(const struct TestOutOfOrder *s, TestOutOfOrder_list l, int i) {
	TestOutOfOrder_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestOutOfOrder(s, p);
}

capn_text TestOutOfOrder_get_foo(TestOutOfOrder_ptr p)
{
	capn_text foo;
	foo = capn_get_text(p.p, 3, capn_val0);
	return foo;
}

capn_text TestOutOfOrder_get_bar(TestOutOfOrder_ptr p)
{
	capn_text bar;
	bar = capn_get_text(p.p, 2, capn_val0);
	return bar;
}

capn_text TestOutOfOrder_get_baz(TestOutOfOrder_ptr p)
{
	capn_text baz;
	baz = capn_get_text(p.p, 8, capn_val0);
	return baz;
}

capn_text TestOutOfOrder_get_qux(TestOutOfOrder_ptr p)
{
	capn_text qux;
	qux = capn_get_text(p.p, 0, capn_val0);
	return qux;
}

capn_text TestOutOfOrder_get_quux(TestOutOfOrder_ptr p)
{
	capn_text quux;
	quux = capn_get_text(p.p, 6, capn_val0);
	return quux;
}

capn_text TestOutOfOrder_get_corge(TestOutOfOrder_ptr p)
{
	capn_text corge;
	corge = capn_get_text(p.p, 4, capn_val0);
	return corge;
}

capn_text TestOutOfOrder_get_grault(TestOutOfOrder_ptr p)
{
	capn_text grault;
	grault = capn_get_text(p.p, 1, capn_val0);
	return grault;
}

capn_text TestOutOfOrder_get_garply(TestOutOfOrder_ptr p)
{
	capn_text garply;
	garply = capn_get_text(p.p, 7, capn_val0);
	return garply;
}

capn_text TestOutOfOrder_get_waldo(TestOutOfOrder_ptr p)
{
	capn_text waldo;
	waldo = capn_get_text(p.p, 5, capn_val0);
	return waldo;
}

void TestOutOfOrder_set_foo(TestOutOfOrder_ptr p, capn_text foo)
{
	capn_set_text(p.p, 3, foo);
}

void TestOutOfOrder_set_bar(TestOutOfOrder_ptr p, capn_text bar)
{
	capn_set_text(p.p, 2, bar);
}

void TestOutOfOrder_set_baz(TestOutOfOrder_ptr p, capn_text baz)
{
	capn_set_text(p.p, 8, baz);
}

void TestOutOfOrder_set_qux(TestOutOfOrder_ptr p, capn_text qux)
{
	capn_set_text(p.p, 0, qux);
}

void TestOutOfOrder_set_quux(TestOutOfOrder_ptr p, capn_text quux)
{
	capn_set_text(p.p, 6, quux);
}

void TestOutOfOrder_set_corge(TestOutOfOrder_ptr p, capn_text corge)
{
	capn_set_text(p.p, 4, corge);
}

void TestOutOfOrder_set_grault(TestOutOfOrder_ptr p, capn_text grault)
{
	capn_set_text(p.p, 1, grault);
}

void TestOutOfOrder_set_garply(TestOutOfOrder_ptr p, capn_text garply)
{
	capn_set_text(p.p, 7, garply);
}

void TestOutOfOrder_set_waldo(TestOutOfOrder_ptr p, capn_text waldo)
{
	capn_set_text(p.p, 5, waldo);
}

TestUnion_ptr new_TestUnion(struct capn_segment *s) {
	TestUnion_ptr p;
	p.p = capn_new_struct(s, 64, 2);
	return p;
}
TestUnion_list new_TestUnion_list(struct capn_segment *s, int len) {
	TestUnion_list p;
	p.p = capn_new_list(s, len, 64, 2);
	return p;
}
void read_TestUnion(struct TestUnion *s capnp_unused, TestUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->union0_which = (enum TestUnion_union0_which)(int) capn_read16(p.p, 0);
	switch (s->union0_which) {
	case TestUnion_union0_u0f0s1:
	case TestUnion_union0_u0f1s1:
		s->union0.u0f1s1 = (capn_read8(p.p, 8) & 1) != 0;
		break;
	case TestUnion_union0_u0f0s8:
	case TestUnion_union0_u0f1s8:
		s->union0.u0f1s8 = (int8_t) ((int8_t)capn_read8(p.p, 8));
		break;
	case TestUnion_union0_u0f0s16:
	case TestUnion_union0_u0f1s16:
		s->union0.u0f1s16 = (int16_t) ((int16_t)capn_read16(p.p, 8));
		break;
	case TestUnion_union0_u0f0s32:
	case TestUnion_union0_u0f1s32:
		s->union0.u0f1s32 = (int32_t) ((int32_t)capn_read32(p.p, 8));
		break;
	case TestUnion_union0_u0f0s64:
	case TestUnion_union0_u0f1s64:
		s->union0.u0f1s64 = (int64_t) ((int64_t)(capn_read64(p.p, 8)));
		break;
	case TestUnion_union0_u0f0sp:
	case TestUnion_union0_u0f1sp:
		s->union0.u0f1sp = capn_get_text(p.p, 0, capn_val0);
		break;
	default:
		break;
	}
	s->bit0 = (capn_read8(p.p, 16) & 1) != 0;
	s->union1_which = (enum TestUnion_union1_which)(int) capn_read16(p.p, 2);
	switch (s->union1_which) {
	case TestUnion_union1_u1f0s1:
	case TestUnion_union1_u1f1s1:
	case TestUnion_union1_u1f2s1:
		s->union1.u1f2s1 = (capn_read8(p.p, 16) & 2) != 0;
		break;
	case TestUnion_union1_u1f0s8:
	case TestUnion_union1_u1f1s8:
	case TestUnion_union1_u1f2s8:
		s->union1.u1f2s8 = (int8_t) ((int8_t)capn_read8(p.p, 17));
		break;
	case TestUnion_union1_u1f0s16:
	case TestUnion_union1_u1f1s16:
	case TestUnion_union1_u1f2s16:
		s->union1.u1f2s16 = (int16_t) ((int16_t)capn_read16(p.p, 18));
		break;
	case TestUnion_union1_u1f0s32:
	case TestUnion_union1_u1f1s32:
	case TestUnion_union1_u1f2s32:
		s->union1.u1f2s32 = (int32_t) ((int32_t)capn_read32(p.p, 20));
		break;
	case TestUnion_union1_u1f0s64:
	case TestUnion_union1_u1f1s64:
	case TestUnion_union1_u1f2s64:
		s->union1.u1f2s64 = (int64_t) ((int64_t)(capn_read64(p.p, 24)));
		break;
	case TestUnion_union1_u1f0sp:
	case TestUnion_union1_u1f1sp:
	case TestUnion_union1_u1f2sp:
		s->union1.u1f2sp = capn_get_text(p.p, 1, capn_val0);
		break;
	default:
		break;
	}
	s->bit2 = (capn_read8(p.p, 16) & 4) != 0;
	s->bit3 = (capn_read8(p.p, 16) & 8) != 0;
	s->bit4 = (capn_read8(p.p, 16) & 16) != 0;
	s->bit5 = (capn_read8(p.p, 16) & 32) != 0;
	s->bit6 = (capn_read8(p.p, 16) & 64) != 0;
	s->bit7 = (capn_read8(p.p, 16) & 128) != 0;
	s->union2_which = (enum TestUnion_union2_which)(int) capn_read16(p.p, 4);
	switch (s->union2_which) {
	case TestUnion_union2_u2f0s1:
		s->union2.u2f0s1 = (capn_read8(p.p, 32) & 1) != 0;
		break;
	case TestUnion_union2_u2f0s8:
		s->union2.u2f0s8 = (int8_t) ((int8_t)capn_read8(p.p, 33));
		break;
	case TestUnion_union2_u2f0s16:
		s->union2.u2f0s16 = (int16_t) ((int16_t)capn_read16(p.p, 36));
		break;
	case TestUnion_union2_u2f0s32:
		s->union2.u2f0s32 = (int32_t) ((int32_t)capn_read32(p.p, 40));
		break;
	case TestUnion_union2_u2f0s64:
		s->union2.u2f0s64 = (int64_t) ((int64_t)(capn_read64(p.p, 48)));
		break;
	default:
		break;
	}
	s->union3_which = (enum TestUnion_union3_which)(int) capn_read16(p.p, 6);
	switch (s->union3_which) {
	case TestUnion_union3_u3f0s1:
		s->union3.u3f0s1 = (capn_read8(p.p, 32) & 2) != 0;
		break;
	case TestUnion_union3_u3f0s8:
		s->union3.u3f0s8 = (int8_t) ((int8_t)capn_read8(p.p, 34));
		break;
	case TestUnion_union3_u3f0s16:
		s->union3.u3f0s16 = (int16_t) ((int16_t)capn_read16(p.p, 38));
		break;
	case TestUnion_union3_u3f0s32:
		s->union3.u3f0s32 = (int32_t) ((int32_t)capn_read32(p.p, 44));
		break;
	case TestUnion_union3_u3f0s64:
		s->union3.u3f0s64 = (int64_t) ((int64_t)(capn_read64(p.p, 56)));
		break;
	default:
		break;
	}
	s->byte0 = capn_read8(p.p, 35);
}
void write_TestUnion(const struct TestUnion *s capnp_unused, TestUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 0, s->union0_which);
	switch (s->union0_which) {
	case TestUnion_union0_u0f0s1:
	case TestUnion_union0_u0f1s1:
		capn_write1(p.p, 64, s->union0.u0f1s1 != 0);
		break;
	case TestUnion_union0_u0f0s8:
	case TestUnion_union0_u0f1s8:
		capn_write8(p.p, 8, (uint8_t) (s->union0.u0f1s8));
		break;
	case TestUnion_union0_u0f0s16:
	case TestUnion_union0_u0f1s16:
		capn_write16(p.p, 8, (uint16_t) (s->union0.u0f1s16));
		break;
	case TestUnion_union0_u0f0s32:
	case TestUnion_union0_u0f1s32:
		capn_write32(p.p, 8, (uint32_t) (s->union0.u0f1s32));
		break;
	case TestUnion_union0_u0f0s64:
	case TestUnion_union0_u0f1s64:
		capn_write64(p.p, 8, (uint64_t) (s->union0.u0f1s64));
		break;
	case TestUnion_union0_u0f0sp:
	case TestUnion_union0_u0f1sp:
		capn_set_text(p.p, 0, s->union0.u0f1sp);
		break;
	default:
		break;
	}
	capn_write1(p.p, 128, s->bit0 != 0);
	capn_write16(p.p, 2, s->union1_which);
	switch (s->union1_which) {
	case TestUnion_union1_u1f0s1:
	case TestUnion_union1_u1f1s1:
	case TestUnion_union1_u1f2s1:
		capn_write1(p.p, 129, s->union1.u1f2s1 != 0);
		break;
	case TestUnion_union1_u1f0s8:
	case TestUnion_union1_u1f1s8:
	case TestUnion_union1_u1f2s8:
		capn_write8(p.p, 17, (uint8_t) (s->union1.u1f2s8));
		break;
	case TestUnion_union1_u1f0s16:
	case TestUnion_union1_u1f1s16:
	case TestUnion_union1_u1f2s16:
		capn_write16(p.p, 18, (uint16_t) (s->union1.u1f2s16));
		break;
	case TestUnion_union1_u1f0s32:
	case TestUnion_union1_u1f1s32:
	case TestUnion_union1_u1f2s32:
		capn_write32(p.p, 20, (uint32_t) (s->union1.u1f2s32));
		break;
	case TestUnion_union1_u1f0s64:
	case TestUnion_union1_u1f1s64:
	case TestUnion_union1_u1f2s64:
		capn_write64(p.p, 24, (uint64_t) (s->union1.u1f2s64));
		break;
	case TestUnion_union1_u1f0sp:
	case TestUnion_union1_u1f1sp:
	case TestUnion_union1_u1f2sp:
		capn_set_text(p.p, 1, s->union1.u1f2sp);
		break;
	default:
		break;
	}
	capn_write1(p.p, 130, s->bit2 != 0);
	capn_write1(p.p, 131, s->bit3 != 0);
	capn_write1(p.p, 132, s->bit4 != 0);
	capn_write1(p.p, 133, s->bit5 != 0);
	capn_write1(p.p, 134, s->bit6 != 0);
	capn_write1(p.p, 135, s->bit7 != 0);
	capn_write16(p.p, 4, s->union2_which);
	switch (s->union2_which) {
	case TestUnion_union2_u2f0s1:
		capn_write1(p.p, 256, s->union2.u2f0s1 != 0);
		break;
	case TestUnion_union2_u2f0s8:
		capn_write8(p.p, 33, (uint8_t) (s->union2.u2f0s8));
		break;
	case TestUnion_union2_u2f0s16:
		capn_write16(p.p, 36, (uint16_t) (s->union2.u2f0s16));
		break;
	case TestUnion_union2_u2f0s32:
		capn_write32(p.p, 40, (uint32_t) (s->union2.u2f0s32));
		break;
	case TestUnion_union2_u2f0s64:
		capn_write64(p.p, 48, (uint64_t) (s->union2.u2f0s64));
		break;
	default:
		break;
	}
	capn_write16(p.p, 6, s->union3_which);
	switch (s->union3_which) {
	case TestUnion_union3_u3f0s1:
		capn_write1(p.p, 257, s->union3.u3f0s1 != 0);
		break;
	case TestUnion_union3_u3f0s8:
		capn_write8(p.p, 34, (uint8_t) (s->union3.u3f0s8));
		break;
	case TestUnion_union3_u3f0s16:
		capn_write16(p.p, 38, (uint16_t) (s->union3.u3f0s16));
		break;
	case TestUnion_union3_u3f0s32:
		capn_write32(p.p, 44, (uint32_t) (s->union3.u3f0s32));
		break;
	case TestUnion_union3_u3f0s64:
		capn_write64(p.p, 56, (uint64_t) (s->union3.u3f0s64));
		break;
	default:
		break;
	}
	capn_write8(p.p, 35, s->byte0);
}
void get_TestUnion(struct TestUnion *s, TestUnion_list l, int i) {
	TestUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestUnion(s, p);
}
void set_TestUnion(const struct TestUnion *s, TestUnion_list l, int i) {
	TestUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestUnion(s, p);
}

unsigned TestUnion_get_bit0(TestUnion_ptr p)
{
	unsigned bit0;
	bit0 = (capn_read8(p.p, 16) & 1) != 0;
	return bit0;
}

unsigned TestUnion_get_bit2(TestUnion_ptr p)
{
	unsigned bit2;
	bit2 = (capn_read8(p.p, 16) & 4) != 0;
	return bit2;
}

unsigned TestUnion_get_bit3(TestUnion_ptr p)
{
	unsigned bit3;
	bit3 = (capn_read8(p.p, 16) & 8) != 0;
	return bit3;
}

unsigned TestUnion_get_bit4(TestUnion_ptr p)
{
	unsigned bit4;
	bit4 = (capn_read8(p.p, 16) & 16) != 0;
	return bit4;
}

unsigned TestUnion_get_bit5(TestUnion_ptr p)
{
	unsigned bit5;
	bit5 = (capn_read8(p.p, 16) & 32) != 0;
	return bit5;
}

unsigned TestUnion_get_bit6(TestUnion_ptr p)
{
	unsigned bit6;
	bit6 = (capn_read8(p.p, 16) & 64) != 0;
	return bit6;
}

unsigned TestUnion_get_bit7(TestUnion_ptr p)
{
	unsigned bit7;
	bit7 = (capn_read8(p.p, 16) & 128) != 0;
	return bit7;
}

uint8_t TestUnion_get_byte0(TestUnion_ptr p)
{
	uint8_t byte0;
	byte0 = capn_read8(p.p, 35);
	return byte0;
}

void TestUnion_set_bit0(TestUnion_ptr p, unsigned bit0)
{
	capn_write1(p.p, 128, bit0 != 0);
}

void TestUnion_set_bit2(TestUnion_ptr p, unsigned bit2)
{
	capn_write1(p.p, 130, bit2 != 0);
}

void TestUnion_set_bit3(TestUnion_ptr p, unsigned bit3)
{
	capn_write1(p.p, 131, bit3 != 0);
}

void TestUnion_set_bit4(TestUnion_ptr p, unsigned bit4)
{
	capn_write1(p.p, 132, bit4 != 0);
}

void TestUnion_set_bit5(TestUnion_ptr p, unsigned bit5)
{
	capn_write1(p.p, 133, bit5 != 0);
}

void TestUnion_set_bit6(TestUnion_ptr p, unsigned bit6)
{
	capn_write1(p.p, 134, bit6 != 0);
}

void TestUnion_set_bit7(TestUnion_ptr p, unsigned bit7)
{
	capn_write1(p.p, 135, bit7 != 0);
}

void TestUnion_set_byte0(TestUnion_ptr p, uint8_t byte0)
{
	capn_write8(p.p, 35, byte0);
}

TestUnnamedUnion_ptr new_TestUnnamedUnion(struct capn_segment *s) {
	TestUnnamedUnion_ptr p;
	p.p = capn_new_struct(s, 16, 2);
	return p;
}
TestUnnamedUnion_list new_TestUnnamedUnion_list(struct capn_segment *s, int len) {
	TestUnnamedUnion_list p;
	p.p = capn_new_list(s, len, 16, 2);
	return p;
}
void read_TestUnnamedUnion(struct TestUnnamedUnion *s capnp_unused, TestUnnamedUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->before = capn_get_text(p.p, 0, capn_val0);
	s->which = (enum TestUnnamedUnion_which)(int) capn_read16(p.p, 4);
	switch (s->which) {
	case TestUnnamedUnion_foo:
		s->foo = capn_read16(p.p, 0);
		break;
	case TestUnnamedUnion_bar:
		s->bar = capn_read32(p.p, 8);
		break;
	default:
		break;
	}
	s->middle = capn_read16(p.p, 2);
	s->after = capn_get_text(p.p, 1, capn_val0);
}
void write_TestUnnamedUnion(const struct TestUnnamedUnion *s capnp_unused, TestUnnamedUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->before);
	capn_write16(p.p, 4, s->which);
	switch (s->which) {
	case TestUnnamedUnion_foo:
		capn_write16(p.p, 0, s->foo);
		break;
	case TestUnnamedUnion_bar:
		capn_write32(p.p, 8, s->bar);
		break;
	default:
		break;
	}
	capn_write16(p.p, 2, s->middle);
	capn_set_text(p.p, 1, s->after);
}
void get_TestUnnamedUnion(struct TestUnnamedUnion *s, TestUnnamedUnion_list l, int i) {
	TestUnnamedUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestUnnamedUnion(s, p);
}
void set_TestUnnamedUnion(const struct TestUnnamedUnion *s, TestUnnamedUnion_list l, int i) {
	TestUnnamedUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestUnnamedUnion(s, p);
}

capn_text TestUnnamedUnion_get_before(TestUnnamedUnion_ptr p)
{
	capn_text before;
	before = capn_get_text(p.p, 0, capn_val0);
	return before;
}

void TestUnnamedUnion_set_before(TestUnnamedUnion_ptr p, capn_text before)
{
	capn_set_text(p.p, 0, before);
}

TestUnionInUnion_ptr new_TestUnionInUnion(struct capn_segment *s) {
	TestUnionInUnion_ptr p;
	p.p = capn_new_struct(s, 16, 0);
	return p;
}
TestUnionInUnion_list new_TestUnionInUnion_list(struct capn_segment *s, int len) {
	TestUnionInUnion_list p;
	p.p = capn_new_list(s, len, 16, 0);
	return p;
}
void read_TestUnionInUnion(struct TestUnionInUnion *s capnp_unused, TestUnionInUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->outer_which = (enum TestUnionInUnion_outer_which)(int) capn_read16(p.p, 8);
	switch (s->outer_which) {
	case TestUnionInUnion_outer_baz:
		s->outer.baz = (int32_t) ((int32_t)capn_read32(p.p, 0));
		break;
	case TestUnionInUnion_outer_inner:
		s->outer.inner_which = (enum TestUnionInUnion_outer_inner_which)(int) capn_read16(p.p, 4);
		switch (s->outer.inner_which) {
		case TestUnionInUnion_outer_inner_foo:
		case TestUnionInUnion_outer_inner_bar:
			s->outer.inner.bar = (int32_t) ((int32_t)capn_read32(p.p, 0));
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
void write_TestUnionInUnion(const struct TestUnionInUnion *s capnp_unused, TestUnionInUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 8, s->outer_which);
	switch (s->outer_which) {
	case TestUnionInUnion_outer_baz:
		capn_write32(p.p, 0, (uint32_t) (s->outer.baz));
		break;
	case TestUnionInUnion_outer_inner:
		capn_write16(p.p, 4, s->outer.inner_which);
		switch (s->outer.inner_which) {
		case TestUnionInUnion_outer_inner_foo:
		case TestUnionInUnion_outer_inner_bar:
			capn_write32(p.p, 0, (uint32_t) (s->outer.inner.bar));
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
void get_TestUnionInUnion(struct TestUnionInUnion *s, TestUnionInUnion_list l, int i) {
	TestUnionInUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestUnionInUnion(s, p);
}
void set_TestUnionInUnion(const struct TestUnionInUnion *s, TestUnionInUnion_list l, int i) {
	TestUnionInUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestUnionInUnion(s, p);
}

TestGroups_ptr new_TestGroups(struct capn_segment *s) {
	TestGroups_ptr p;
	p.p = capn_new_struct(s, 16, 2);
	return p;
}
TestGroups_list new_TestGroups_list(struct capn_segment *s, int len) {
	TestGroups_list p;
	p.p = capn_new_list(s, len, 16, 2);
	return p;
}
void read_TestGroups(struct TestGroups *s capnp_unused, TestGroups_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->groups_which = (enum TestGroups_groups_which)(int) capn_read16(p.p, 4);
	switch (s->groups_which) {
	case TestGroups_groups_foo:
		s->groups.foo.corge = (int32_t) ((int32_t)capn_read32(p.p, 0));
		s->groups.foo.grault = (int64_t) ((int64_t)(capn_read64(p.p, 8)));
		s->groups.foo.garply = capn_get_text(p.p, 0, capn_val0);
		break;
	case TestGroups_groups_bar:
		s->groups.bar.corge = (int32_t) ((int32_t)capn_read32(p.p, 0));
		s->groups.bar.grault = capn_get_text(p.p, 0, capn_val0);
		s->groups.bar.garply = (int64_t) ((int64_t)(capn_read64(p.p, 8)));
		break;
	case TestGroups_groups_baz:
		s->groups.baz.corge = (int32_t) ((int32_t)capn_read32(p.p, 0));
		s->groups.baz.grault = capn_get_text(p.p, 0, capn_val0);
		s->groups.baz.garply = capn_get_text(p.p, 1, capn_val0);
		break;
	default:
		break;
	}
}
void write_TestGroups(const struct TestGroups *s capnp_unused, TestGroups_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 4, s->groups_which);
	switch (s->groups_which) {
	case TestGroups_groups_foo:
		capn_write32(p.p, 0, (uint32_t) (s->groups.foo.corge));
		capn_write64(p.p, 8, (uint64_t) (s->groups.foo.grault));
		capn_set_text(p.p, 0, s->groups.foo.garply);
		break;
	case TestGroups_groups_bar:
		capn_write32(p.p, 0, (uint32_t) (s->groups.bar.corge));
		capn_set_text(p.p, 0, s->groups.bar.grault);
		capn_write64(p.p, 8, (uint64_t) (s->groups.bar.garply));
		break;
	case TestGroups_groups_baz:
		capn_write32(p.p, 0, (uint32_t) (s->groups.baz.corge));
		capn_set_text(p.p, 0, s->groups.baz.grault);
		capn_set_text(p.p, 1, s->groups.baz.garply);
		break;
	default:
		break;
	}
}
void get_TestGroups(struct TestGroups *s, TestGroups_list l, int i) {
	TestGroups_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestGroups(s, p);
}
void set_TestGroups(const struct TestGroups *s, TestGroups_list l, int i) {
	TestGroups_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestGroups(s, p);
}

TestInterleavedGroups_ptr new_TestInterleavedGroups(struct capn_segment *s) {
	TestInterleavedGroups_ptr p;
	p.p = capn_new_struct(s, 48, 6);
	return p;
}
TestInterleavedGroups_list new_TestInterleavedGroups_list(struct capn_segment *s, int len) {
	TestInterleavedGroups_list p;
	p.p = capn_new_list(s, len, 48, 6);
	return p;
}
void read_TestInterleavedGroups(struct TestInterleavedGroups *s capnp_unused, TestInterleavedGroups_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->group1.foo = capn_read32(p.p, 0);
	s->group1.bar = capn_read64(p.p, 8);
	s->group1.which = (enum TestInterleavedGroups_group1_which)(int) capn_read16(p.p, 28);
	switch (s->group1.which) {
	case TestInterleavedGroups_group1_qux:
		s->group1.qux = capn_read16(p.p, 24);
		break;
	case TestInterleavedGroups_group1_fred:
		s->group1.fred = capn_get_text(p.p, 2, capn_val0);
		break;
	case TestInterleavedGroups_group1_corge:
		s->group1.corge.grault = capn_read64(p.p, 32);
		s->group1.corge.garply = capn_read16(p.p, 24);
		s->group1.corge.plugh = capn_get_text(p.p, 2, capn_val0);
		s->group1.corge.xyzzy = capn_get_text(p.p, 4, capn_val0);
		break;
	default:
		break;
	}
	s->group1.waldo = capn_get_text(p.p, 0, capn_val0);
	s->group2.foo = capn_read32(p.p, 4);
	s->group2.bar = capn_read64(p.p, 16);
	s->group2.which = (enum TestInterleavedGroups_group2_which)(int) capn_read16(p.p, 30);
	switch (s->group2.which) {
	case TestInterleavedGroups_group2_qux:
		s->group2.qux = capn_read16(p.p, 26);
		break;
	case TestInterleavedGroups_group2_fred:
		s->group2.fred = capn_get_text(p.p, 3, capn_val0);
		break;
	case TestInterleavedGroups_group2_corge:
		s->group2.corge.grault = capn_read64(p.p, 40);
		s->group2.corge.garply = capn_read16(p.p, 26);
		s->group2.corge.plugh = capn_get_text(p.p, 3, capn_val0);
		s->group2.corge.xyzzy = capn_get_text(p.p, 5, capn_val0);
		break;
	default:
		break;
	}
	s->group2.waldo = capn_get_text(p.p, 1, capn_val0);
}
void write_TestInterleavedGroups(const struct TestInterleavedGroups *s capnp_unused, TestInterleavedGroups_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write32(p.p, 0, s->group1.foo);
	capn_write64(p.p, 8, s->group1.bar);
	capn_write16(p.p, 28, s->group1.which);
	switch (s->group1.which) {
	case TestInterleavedGroups_group1_qux:
		capn_write16(p.p, 24, s->group1.qux);
		break;
	case TestInterleavedGroups_group1_fred:
		capn_set_text(p.p, 2, s->group1.fred);
		break;
	case TestInterleavedGroups_group1_corge:
		capn_write64(p.p, 32, s->group1.corge.grault);
		capn_write16(p.p, 24, s->group1.corge.garply);
		capn_set_text(p.p, 2, s->group1.corge.plugh);
		capn_set_text(p.p, 4, s->group1.corge.xyzzy);
		break;
	default:
		break;
	}
	capn_set_text(p.p, 0, s->group1.waldo);
	capn_write32(p.p, 4, s->group2.foo);
	capn_write64(p.p, 16, s->group2.bar);
	capn_write16(p.p, 30, s->group2.which);
	switch (s->group2.which) {
	case TestInterleavedGroups_group2_qux:
		capn_write16(p.p, 26, s->group2.qux);
		break;
	case TestInterleavedGroups_group2_fred:
		capn_set_text(p.p, 3, s->group2.fred);
		break;
	case TestInterleavedGroups_group2_corge:
		capn_write64(p.p, 40, s->group2.corge.grault);
		capn_write16(p.p, 26, s->group2.corge.garply);
		capn_set_text(p.p, 3, s->group2.corge.plugh);
		capn_set_text(p.p, 5, s->group2.corge.xyzzy);
		break;
	default:
		break;
	}
	capn_set_text(p.p, 1, s->group2.waldo);
}
void get_TestInterleavedGroups(struct TestInterleavedGroups *s, TestInterleavedGroups_list l, int i) {
	TestInterleavedGroups_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestInterleavedGroups(s, p);
}
void set_TestInterleavedGroups(const struct TestInterleavedGroups *s, TestInterleavedGroups_list l, int i) {
	TestInterleavedGroups_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestInterleavedGroups(s, p);
}
static TestUnion_ptr capn_val20 = {{1,1,0,0,64,2,0,(char*)&capn_buf[3512],(struct capn_segment*)&capn_seg}};
static TestUnion_ptr capn_val21 = {{1,1,0,0,64,2,0,(char*)&capn_buf[3600],(struct capn_segment*)&capn_seg}};
static TestUnnamedUnion_ptr capn_val22 = {{1,1,0,0,16,2,0,(char*)&capn_buf[3696],(struct capn_segment*)&capn_seg}};
static TestUnnamedUnion_ptr capn_val23 = {{1,1,0,0,16,2,0,(char*)&capn_buf[3736],(struct capn_segment*)&capn_seg}};

TestUnionDefaults_ptr new_TestUnionDefaults(struct capn_segment *s) {
	TestUnionDefaults_ptr p;
	p.p = capn_new_struct(s, 0, 4);
	return p;
}
TestUnionDefaults_list new_TestUnionDefaults_list(struct capn_segment *s, int len) {
	TestUnionDefaults_list p;
	p.p = capn_new_list(s, len, 0, 4);
	return p;
}
void read_TestUnionDefaults(struct TestUnionDefaults *s capnp_unused, TestUnionDefaults_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->s16s8s64s8Set.p = capn_getp(p.p, 0, 0);
	if (!s->s16s8s64s8Set.p.type) {
		s->s16s8s64s8Set = capn_val20;
	}
	s->s0sps1s32Set.p = capn_getp(p.p, 1, 0);
	if (!s->s0sps1s32Set.p.type) {
		s->s0sps1s32Set = capn_val21;
	}
	s->unnamed1.p = capn_getp(p.p, 2, 0);
	if (!s->unnamed1.p.type) {
		s->unnamed1 = capn_val22;
	}
	s->unnamed2.p = capn_getp(p.p, 3, 0);
	if (!s->unnamed2.p.type) {
		s->unnamed2 = capn_val23;
	}
}
void write_TestUnionDefaults(const struct TestUnionDefaults *s capnp_unused, TestUnionDefaults_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_setp(p.p, 0, (s->s16s8s64s8Set.p.data != capn_val20.p.data) ? s->s16s8s64s8Set.p : capn_null);
	capn_setp(p.p, 1, (s->s0sps1s32Set.p.data != capn_val21.p.data) ? s->s0sps1s32Set.p : capn_null);
	capn_setp(p.p, 2, (s->unnamed1.p.data != capn_val22.p.data) ? s->unnamed1.p : capn_null);
	capn_setp(p.p, 3, (s->unnamed2.p.data != capn_val23.p.data) ? s->unnamed2.p : capn_null);
}
void get_TestUnionDefaults(struct TestUnionDefaults *s, TestUnionDefaults_list l, int i) {
	TestUnionDefaults_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestUnionDefaults(s, p);
}
void set_TestUnionDefaults(const struct TestUnionDefaults *s, TestUnionDefaults_list l, int i) {
	TestUnionDefaults_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestUnionDefaults(s, p);
}

TestUnion_ptr TestUnionDefaults_get_s16s8s64s8Set(TestUnionDefaults_ptr p)
{
	TestUnion_ptr s16s8s64s8Set;
	s16s8s64s8Set.p = capn_getp(p.p, 0, 0);
if (!s16s8s64s8Set.p.type) {
	s16s8s64s8Set = capn_val20;
}
	return s16s8s64s8Set;
}

TestUnion_ptr TestUnionDefaults_get_s0sps1s32Set(TestUnionDefaults_ptr p)
{
	TestUnion_ptr s0sps1s32Set;
	s0sps1s32Set.p = capn_getp(p.p, 1, 0);
if (!s0sps1s32Set.p.type) {
	s0sps1s32Set = capn_val21;
}
	return s0sps1s32Set;
}

TestUnnamedUnion_ptr TestUnionDefaults_get_unnamed1(TestUnionDefaults_ptr p)
{
	TestUnnamedUnion_ptr unnamed1;
	unnamed1.p = capn_getp(p.p, 2, 0);
if (!unnamed1.p.type) {
	unnamed1 = capn_val22;
}
	return unnamed1;
}

TestUnnamedUnion_ptr TestUnionDefaults_get_unnamed2(TestUnionDefaults_ptr p)
{
	TestUnnamedUnion_ptr unnamed2;
	unnamed2.p = capn_getp(p.p, 3, 0);
if (!unnamed2.p.type) {
	unnamed2 = capn_val23;
}
	return unnamed2;
}

void TestUnionDefaults_set_s16s8s64s8Set(TestUnionDefaults_ptr p, TestUnion_ptr s16s8s64s8Set)
{
	capn_setp(p.p, 0, (s16s8s64s8Set.p.data != capn_val20.p.data) ? s16s8s64s8Set.p : capn_null);
}

void TestUnionDefaults_set_s0sps1s32Set(TestUnionDefaults_ptr p, TestUnion_ptr s0sps1s32Set)
{
	capn_setp(p.p, 1, (s0sps1s32Set.p.data != capn_val21.p.data) ? s0sps1s32Set.p : capn_null);
}

void TestUnionDefaults_set_unnamed1(TestUnionDefaults_ptr p, TestUnnamedUnion_ptr unnamed1)
{
	capn_setp(p.p, 2, (unnamed1.p.data != capn_val22.p.data) ? unnamed1.p : capn_null);
}

void TestUnionDefaults_set_unnamed2(TestUnionDefaults_ptr p, TestUnnamedUnion_ptr unnamed2)
{
	capn_setp(p.p, 3, (unnamed2.p.data != capn_val23.p.data) ? unnamed2.p : capn_null);
}

TestNestedTypes_ptr new_TestNestedTypes(struct capn_segment *s) {
	TestNestedTypes_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestNestedTypes_list new_TestNestedTypes_list(struct capn_segment *s, int len) {
	TestNestedTypes_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestNestedTypes(struct TestNestedTypes *s capnp_unused, TestNestedTypes_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->nestedStruct.p = capn_getp(p.p, 0, 0);
	s->outerNestedEnum = (enum TestNestedTypes_NestedEnum)(int) capn_read16(p.p, 0) ^ 1u;
	s->innerNestedEnum = (enum TestNestedTypes_NestedStruct_NestedEnum)(int) capn_read16(p.p, 2) ^ 2u;
}
void write_TestNestedTypes(const struct TestNestedTypes *s capnp_unused, TestNestedTypes_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_setp(p.p, 0, s->nestedStruct.p);
	capn_write16(p.p, 0, (uint16_t) (s->outerNestedEnum ^ 1u));
	capn_write16(p.p, 2, (uint16_t) (s->innerNestedEnum ^ 2u));
}
void get_TestNestedTypes(struct TestNestedTypes *s, TestNestedTypes_list l, int i) {
	TestNestedTypes_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestNestedTypes(s, p);
}
void set_TestNestedTypes(const struct TestNestedTypes *s, TestNestedTypes_list l, int i) {
	TestNestedTypes_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestNestedTypes(s, p);
}

TestNestedTypes_NestedStruct_ptr TestNestedTypes_get_nestedStruct(TestNestedTypes_ptr p)
{
	TestNestedTypes_NestedStruct_ptr nestedStruct;
	nestedStruct.p = capn_getp(p.p, 0, 0);
	return nestedStruct;
}

enum TestNestedTypes_NestedEnum TestNestedTypes_get_outerNestedEnum(TestNestedTypes_ptr p)
{
	enum TestNestedTypes_NestedEnum outerNestedEnum;
	outerNestedEnum = (enum TestNestedTypes_NestedEnum)(int) capn_read16(p.p, 0) ^ 1u;
	return outerNestedEnum;
}

enum TestNestedTypes_NestedStruct_NestedEnum TestNestedTypes_get_innerNestedEnum(TestNestedTypes_ptr p)
{
	enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum;
	innerNestedEnum = (enum TestNestedTypes_NestedStruct_NestedEnum)(int) capn_read16(p.p, 2) ^ 2u;
	return innerNestedEnum;
}

void TestNestedTypes_set_nestedStruct(TestNestedTypes_ptr p, TestNestedTypes_NestedStruct_ptr nestedStruct)
{
	capn_setp(p.p, 0, nestedStruct.p);
}

void TestNestedTypes_set_outerNestedEnum(TestNestedTypes_ptr p, enum TestNestedTypes_NestedEnum outerNestedEnum)
{
	capn_write16(p.p, 0, (uint16_t) (outerNestedEnum ^ 1u));
}

void TestNestedTypes_set_innerNestedEnum(TestNestedTypes_ptr p, enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum)
{
	capn_write16(p.p, 2, (uint16_t) (innerNestedEnum ^ 2u));
}

TestNestedTypes_NestedStruct_ptr new_TestNestedTypes_NestedStruct(struct capn_segment *s) {
	TestNestedTypes_NestedStruct_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestNestedTypes_NestedStruct_list new_TestNestedTypes_NestedStruct_list(struct capn_segment *s, int len) {
	TestNestedTypes_NestedStruct_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestNestedTypes_NestedStruct(struct TestNestedTypes_NestedStruct *s capnp_unused, TestNestedTypes_NestedStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->outerNestedEnum = (enum TestNestedTypes_NestedEnum)(int) capn_read16(p.p, 0) ^ 1u;
	s->innerNestedEnum = (enum TestNestedTypes_NestedStruct_NestedEnum)(int) capn_read16(p.p, 2) ^ 2u;
}
void write_TestNestedTypes_NestedStruct(const struct TestNestedTypes_NestedStruct *s capnp_unused, TestNestedTypes_NestedStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 0, (uint16_t) (s->outerNestedEnum ^ 1u));
	capn_write16(p.p, 2, (uint16_t) (s->innerNestedEnum ^ 2u));
}
void get_TestNestedTypes_NestedStruct(struct TestNestedTypes_NestedStruct *s, TestNestedTypes_NestedStruct_list l, int i) {
	TestNestedTypes_NestedStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestNestedTypes_NestedStruct(s, p);
}
void set_TestNestedTypes_NestedStruct(const struct TestNestedTypes_NestedStruct *s, TestNestedTypes_NestedStruct_list l, int i) {
	TestNestedTypes_NestedStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestNestedTypes_NestedStruct(s, p);
}

enum TestNestedTypes_NestedEnum TestNestedTypes_NestedStruct_get_outerNestedEnum(TestNestedTypes_NestedStruct_ptr p)
{
	enum TestNestedTypes_NestedEnum outerNestedEnum;
	outerNestedEnum = (enum TestNestedTypes_NestedEnum)(int) capn_read16(p.p, 0) ^ 1u;
	return outerNestedEnum;
}

enum TestNestedTypes_NestedStruct_NestedEnum TestNestedTypes_NestedStruct_get_innerNestedEnum(TestNestedTypes_NestedStruct_ptr p)
{
	enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum;
	innerNestedEnum = (enum TestNestedTypes_NestedStruct_NestedEnum)(int) capn_read16(p.p, 2) ^ 2u;
	return innerNestedEnum;
}

void TestNestedTypes_NestedStruct_set_outerNestedEnum(TestNestedTypes_NestedStruct_ptr p, enum TestNestedTypes_NestedEnum outerNestedEnum)
{
	capn_write16(p.p, 0, (uint16_t) (outerNestedEnum ^ 1u));
}

void TestNestedTypes_NestedStruct_set_innerNestedEnum(TestNestedTypes_NestedStruct_ptr p, enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum)
{
	capn_write16(p.p, 2, (uint16_t) (innerNestedEnum ^ 2u));
}

TestUsing_ptr new_TestUsing(struct capn_segment *s) {
	TestUsing_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestUsing_list new_TestUsing_list(struct capn_segment *s, int len) {
	TestUsing_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestUsing(struct TestUsing *s capnp_unused, TestUsing_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->outerNestedEnum = (enum TestNestedTypes_NestedEnum)(int) capn_read16(p.p, 2) ^ 1u;
	s->innerNestedEnum = (enum TestNestedTypes_NestedStruct_NestedEnum)(int) capn_read16(p.p, 0) ^ 2u;
}
void write_TestUsing(const struct TestUsing *s capnp_unused, TestUsing_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 2, (uint16_t) (s->outerNestedEnum ^ 1u));
	capn_write16(p.p, 0, (uint16_t) (s->innerNestedEnum ^ 2u));
}
void get_TestUsing(struct TestUsing *s, TestUsing_list l, int i) {
	TestUsing_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestUsing(s, p);
}
void set_TestUsing(const struct TestUsing *s, TestUsing_list l, int i) {
	TestUsing_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestUsing(s, p);
}

enum TestNestedTypes_NestedEnum TestUsing_get_outerNestedEnum(TestUsing_ptr p)
{
	enum TestNestedTypes_NestedEnum outerNestedEnum;
	outerNestedEnum = (enum TestNestedTypes_NestedEnum)(int) capn_read16(p.p, 2) ^ 1u;
	return outerNestedEnum;
}

enum TestNestedTypes_NestedStruct_NestedEnum TestUsing_get_innerNestedEnum(TestUsing_ptr p)
{
	enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum;
	innerNestedEnum = (enum TestNestedTypes_NestedStruct_NestedEnum)(int) capn_read16(p.p, 0) ^ 2u;
	return innerNestedEnum;
}

void TestUsing_set_outerNestedEnum(TestUsing_ptr p, enum TestNestedTypes_NestedEnum outerNestedEnum)
{
	capn_write16(p.p, 2, (uint16_t) (outerNestedEnum ^ 1u));
}

void TestUsing_set_innerNestedEnum(TestUsing_ptr p, enum TestNestedTypes_NestedStruct_NestedEnum innerNestedEnum)
{
	capn_write16(p.p, 0, (uint16_t) (innerNestedEnum ^ 2u));
}

TestLists_ptr new_TestLists(struct capn_segment *s) {
	TestLists_ptr p;
	p.p = capn_new_struct(s, 0, 10);
	return p;
}
TestLists_list new_TestLists_list(struct capn_segment *s, int len) {
	TestLists_list p;
	p.p = capn_new_list(s, len, 0, 10);
	return p;
}
void read_TestLists(struct TestLists *s capnp_unused, TestLists_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->list0.p = capn_getp(p.p, 0, 0);
	s->list1.p = capn_getp(p.p, 1, 0);
	s->list8.p = capn_getp(p.p, 2, 0);
	s->list16.p = capn_getp(p.p, 3, 0);
	s->list32.p = capn_getp(p.p, 4, 0);
	s->list64.p = capn_getp(p.p, 5, 0);
	s->listP.p = capn_getp(p.p, 6, 0);
	s->int32ListList = capn_getp(p.p, 7, 0);
	s->textListList = capn_getp(p.p, 8, 0);
	s->structListList = capn_getp(p.p, 9, 0);
}
void write_TestLists(const struct TestLists *s capnp_unused, TestLists_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_setp(p.p, 0, s->list0.p);
	capn_setp(p.p, 1, s->list1.p);
	capn_setp(p.p, 2, s->list8.p);
	capn_setp(p.p, 3, s->list16.p);
	capn_setp(p.p, 4, s->list32.p);
	capn_setp(p.p, 5, s->list64.p);
	capn_setp(p.p, 6, s->listP.p);
	capn_setp(p.p, 7, s->int32ListList);
	capn_setp(p.p, 8, s->textListList);
	capn_setp(p.p, 9, s->structListList);
}
void get_TestLists(struct TestLists *s, TestLists_list l, int i) {
	TestLists_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists(s, p);
}
void set_TestLists(const struct TestLists *s, TestLists_list l, int i) {
	TestLists_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists(s, p);
}

TestLists_Struct0_list TestLists_get_list0(TestLists_ptr p)
{
	TestLists_Struct0_list list0;
	list0.p = capn_getp(p.p, 0, 0);
	return list0;
}

TestLists_Struct1_list TestLists_get_list1(TestLists_ptr p)
{
	TestLists_Struct1_list list1;
	list1.p = capn_getp(p.p, 1, 0);
	return list1;
}

TestLists_Struct8_list TestLists_get_list8(TestLists_ptr p)
{
	TestLists_Struct8_list list8;
	list8.p = capn_getp(p.p, 2, 0);
	return list8;
}

TestLists_Struct16_list TestLists_get_list16(TestLists_ptr p)
{
	TestLists_Struct16_list list16;
	list16.p = capn_getp(p.p, 3, 0);
	return list16;
}

TestLists_Struct32_list TestLists_get_list32(TestLists_ptr p)
{
	TestLists_Struct32_list list32;
	list32.p = capn_getp(p.p, 4, 0);
	return list32;
}

TestLists_Struct64_list TestLists_get_list64(TestLists_ptr p)
{
	TestLists_Struct64_list list64;
	list64.p = capn_getp(p.p, 5, 0);
	return list64;
}

TestLists_StructP_list TestLists_get_listP(TestLists_ptr p)
{
	TestLists_StructP_list listP;
	listP.p = capn_getp(p.p, 6, 0);
	return listP;
}

capn_ptr TestLists_get_int32ListList(TestLists_ptr p)
{
	capn_ptr int32ListList;
	int32ListList = capn_getp(p.p, 7, 0);
	return int32ListList;
}

capn_ptr TestLists_get_textListList(TestLists_ptr p)
{
	capn_ptr textListList;
	textListList = capn_getp(p.p, 8, 0);
	return textListList;
}

capn_ptr TestLists_get_structListList(TestLists_ptr p)
{
	capn_ptr structListList;
	structListList = capn_getp(p.p, 9, 0);
	return structListList;
}

void TestLists_set_list0(TestLists_ptr p, TestLists_Struct0_list list0)
{
	capn_setp(p.p, 0, list0.p);
}

void TestLists_set_list1(TestLists_ptr p, TestLists_Struct1_list list1)
{
	capn_setp(p.p, 1, list1.p);
}

void TestLists_set_list8(TestLists_ptr p, TestLists_Struct8_list list8)
{
	capn_setp(p.p, 2, list8.p);
}

void TestLists_set_list16(TestLists_ptr p, TestLists_Struct16_list list16)
{
	capn_setp(p.p, 3, list16.p);
}

void TestLists_set_list32(TestLists_ptr p, TestLists_Struct32_list list32)
{
	capn_setp(p.p, 4, list32.p);
}

void TestLists_set_list64(TestLists_ptr p, TestLists_Struct64_list list64)
{
	capn_setp(p.p, 5, list64.p);
}

void TestLists_set_listP(TestLists_ptr p, TestLists_StructP_list listP)
{
	capn_setp(p.p, 6, listP.p);
}

void TestLists_set_int32ListList(TestLists_ptr p, capn_ptr int32ListList)
{
	capn_setp(p.p, 7, int32ListList);
}

void TestLists_set_textListList(TestLists_ptr p, capn_ptr textListList)
{
	capn_setp(p.p, 8, textListList);
}

void TestLists_set_structListList(TestLists_ptr p, capn_ptr structListList)
{
	capn_setp(p.p, 9, structListList);
}

TestLists_Struct0_ptr new_TestLists_Struct0(struct capn_segment *s) {
	TestLists_Struct0_ptr p;
	p.p = capn_new_struct(s, 0, 0);
	return p;
}
TestLists_Struct0_list new_TestLists_Struct0_list(struct capn_segment *s, int len) {
	TestLists_Struct0_list p;
	p.p = capn_new_list(s, len, 0, 0);
	return p;
}
void read_TestLists_Struct0(struct TestLists_Struct0 *s capnp_unused, TestLists_Struct0_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void write_TestLists_Struct0(const struct TestLists_Struct0 *s capnp_unused, TestLists_Struct0_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void get_TestLists_Struct0(struct TestLists_Struct0 *s, TestLists_Struct0_list l, int i) {
	TestLists_Struct0_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct0(s, p);
}
void set_TestLists_Struct0(const struct TestLists_Struct0 *s, TestLists_Struct0_list l, int i) {
	TestLists_Struct0_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct0(s, p);
}

TestLists_Struct1_ptr new_TestLists_Struct1(struct capn_segment *s) {
	TestLists_Struct1_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestLists_Struct1_list new_TestLists_Struct1_list(struct capn_segment *s, int len) {
	TestLists_Struct1_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestLists_Struct1(struct TestLists_Struct1 *s capnp_unused, TestLists_Struct1_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = (capn_read8(p.p, 0) & 1) != 0;
}
void write_TestLists_Struct1(const struct TestLists_Struct1 *s capnp_unused, TestLists_Struct1_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write1(p.p, 0, s->f != 0);
}
void get_TestLists_Struct1(struct TestLists_Struct1 *s, TestLists_Struct1_list l, int i) {
	TestLists_Struct1_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct1(s, p);
}
void set_TestLists_Struct1(const struct TestLists_Struct1 *s, TestLists_Struct1_list l, int i) {
	TestLists_Struct1_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct1(s, p);
}

unsigned TestLists_Struct1_get_f(TestLists_Struct1_ptr p)
{
	unsigned f;
	f = (capn_read8(p.p, 0) & 1) != 0;
	return f;
}

void TestLists_Struct1_set_f(TestLists_Struct1_ptr p, unsigned f)
{
	capn_write1(p.p, 0, f != 0);
}

TestLists_Struct8_ptr new_TestLists_Struct8(struct capn_segment *s) {
	TestLists_Struct8_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestLists_Struct8_list new_TestLists_Struct8_list(struct capn_segment *s, int len) {
	TestLists_Struct8_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestLists_Struct8(struct TestLists_Struct8 *s capnp_unused, TestLists_Struct8_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_read8(p.p, 0);
}
void write_TestLists_Struct8(const struct TestLists_Struct8 *s capnp_unused, TestLists_Struct8_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write8(p.p, 0, s->f);
}
void get_TestLists_Struct8(struct TestLists_Struct8 *s, TestLists_Struct8_list l, int i) {
	TestLists_Struct8_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct8(s, p);
}
void set_TestLists_Struct8(const struct TestLists_Struct8 *s, TestLists_Struct8_list l, int i) {
	TestLists_Struct8_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct8(s, p);
}

uint8_t TestLists_Struct8_get_f(TestLists_Struct8_ptr p)
{
	uint8_t f;
	f = capn_read8(p.p, 0);
	return f;
}

void TestLists_Struct8_set_f(TestLists_Struct8_ptr p, uint8_t f)
{
	capn_write8(p.p, 0, f);
}

TestLists_Struct16_ptr new_TestLists_Struct16(struct capn_segment *s) {
	TestLists_Struct16_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestLists_Struct16_list new_TestLists_Struct16_list(struct capn_segment *s, int len) {
	TestLists_Struct16_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestLists_Struct16(struct TestLists_Struct16 *s capnp_unused, TestLists_Struct16_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_read16(p.p, 0);
}
void write_TestLists_Struct16(const struct TestLists_Struct16 *s capnp_unused, TestLists_Struct16_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 0, s->f);
}
void get_TestLists_Struct16(struct TestLists_Struct16 *s, TestLists_Struct16_list l, int i) {
	TestLists_Struct16_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct16(s, p);
}
void set_TestLists_Struct16(const struct TestLists_Struct16 *s, TestLists_Struct16_list l, int i) {
	TestLists_Struct16_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct16(s, p);
}

uint16_t TestLists_Struct16_get_f(TestLists_Struct16_ptr p)
{
	uint16_t f;
	f = capn_read16(p.p, 0);
	return f;
}

void TestLists_Struct16_set_f(TestLists_Struct16_ptr p, uint16_t f)
{
	capn_write16(p.p, 0, f);
}

TestLists_Struct32_ptr new_TestLists_Struct32(struct capn_segment *s) {
	TestLists_Struct32_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestLists_Struct32_list new_TestLists_Struct32_list(struct capn_segment *s, int len) {
	TestLists_Struct32_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestLists_Struct32(struct TestLists_Struct32 *s capnp_unused, TestLists_Struct32_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_read32(p.p, 0);
}
void write_TestLists_Struct32(const struct TestLists_Struct32 *s capnp_unused, TestLists_Struct32_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write32(p.p, 0, s->f);
}
void get_TestLists_Struct32(struct TestLists_Struct32 *s, TestLists_Struct32_list l, int i) {
	TestLists_Struct32_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct32(s, p);
}
void set_TestLists_Struct32(const struct TestLists_Struct32 *s, TestLists_Struct32_list l, int i) {
	TestLists_Struct32_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct32(s, p);
}

uint32_t TestLists_Struct32_get_f(TestLists_Struct32_ptr p)
{
	uint32_t f;
	f = capn_read32(p.p, 0);
	return f;
}

void TestLists_Struct32_set_f(TestLists_Struct32_ptr p, uint32_t f)
{
	capn_write32(p.p, 0, f);
}

TestLists_Struct64_ptr new_TestLists_Struct64(struct capn_segment *s) {
	TestLists_Struct64_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestLists_Struct64_list new_TestLists_Struct64_list(struct capn_segment *s, int len) {
	TestLists_Struct64_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestLists_Struct64(struct TestLists_Struct64 *s capnp_unused, TestLists_Struct64_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_read64(p.p, 0);
}
void write_TestLists_Struct64(const struct TestLists_Struct64 *s capnp_unused, TestLists_Struct64_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, s->f);
}
void get_TestLists_Struct64(struct TestLists_Struct64 *s, TestLists_Struct64_list l, int i) {
	TestLists_Struct64_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct64(s, p);
}
void set_TestLists_Struct64(const struct TestLists_Struct64 *s, TestLists_Struct64_list l, int i) {
	TestLists_Struct64_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct64(s, p);
}

uint64_t TestLists_Struct64_get_f(TestLists_Struct64_ptr p)
{
	uint64_t f;
	f = capn_read64(p.p, 0);
	return f;
}

void TestLists_Struct64_set_f(TestLists_Struct64_ptr p, uint64_t f)
{
	capn_write64(p.p, 0, f);
}

TestLists_StructP_ptr new_TestLists_StructP(struct capn_segment *s) {
	TestLists_StructP_ptr p;
	p.p = capn_new_struct(s, 0, 1);
	return p;
}
TestLists_StructP_list new_TestLists_StructP_list(struct capn_segment *s, int len) {
	TestLists_StructP_list p;
	p.p = capn_new_list(s, len, 0, 1);
	return p;
}
void read_TestLists_StructP(struct TestLists_StructP *s capnp_unused, TestLists_StructP_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_get_text(p.p, 0, capn_val0);
}
void write_TestLists_StructP(const struct TestLists_StructP *s capnp_unused, TestLists_StructP_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->f);
}
void get_TestLists_StructP(struct TestLists_StructP *s, TestLists_StructP_list l, int i) {
	TestLists_StructP_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_StructP(s, p);
}
void set_TestLists_StructP(const struct TestLists_StructP *s, TestLists_StructP_list l, int i) {
	TestLists_StructP_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_StructP(s, p);
}

capn_text TestLists_StructP_get_f(TestLists_StructP_ptr p)
{
	capn_text f;
	f = capn_get_text(p.p, 0, capn_val0);
	return f;
}

void TestLists_StructP_set_f(TestLists_StructP_ptr p, capn_text f)
{
	capn_set_text(p.p, 0, f);
}

TestLists_Struct0c_ptr new_TestLists_Struct0c(struct capn_segment *s) {
	TestLists_Struct0c_ptr p;
	p.p = capn_new_struct(s, 0, 1);
	return p;
}
TestLists_Struct0c_list new_TestLists_Struct0c_list(struct capn_segment *s, int len) {
	TestLists_Struct0c_list p;
	p.p = capn_new_list(s, len, 0, 1);
	return p;
}
void read_TestLists_Struct0c(struct TestLists_Struct0c *s capnp_unused, TestLists_Struct0c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->pad = capn_get_text(p.p, 0, capn_val0);
}
void write_TestLists_Struct0c(const struct TestLists_Struct0c *s capnp_unused, TestLists_Struct0c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->pad);
}
void get_TestLists_Struct0c(struct TestLists_Struct0c *s, TestLists_Struct0c_list l, int i) {
	TestLists_Struct0c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct0c(s, p);
}
void set_TestLists_Struct0c(const struct TestLists_Struct0c *s, TestLists_Struct0c_list l, int i) {
	TestLists_Struct0c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct0c(s, p);
}

capn_text TestLists_Struct0c_get_pad(TestLists_Struct0c_ptr p)
{
	capn_text pad;
	pad = capn_get_text(p.p, 0, capn_val0);
	return pad;
}

void TestLists_Struct0c_set_pad(TestLists_Struct0c_ptr p, capn_text pad)
{
	capn_set_text(p.p, 0, pad);
}

TestLists_Struct1c_ptr new_TestLists_Struct1c(struct capn_segment *s) {
	TestLists_Struct1c_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestLists_Struct1c_list new_TestLists_Struct1c_list(struct capn_segment *s, int len) {
	TestLists_Struct1c_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestLists_Struct1c(struct TestLists_Struct1c *s capnp_unused, TestLists_Struct1c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = (capn_read8(p.p, 0) & 1) != 0;
	s->pad = capn_get_text(p.p, 0, capn_val0);
}
void write_TestLists_Struct1c(const struct TestLists_Struct1c *s capnp_unused, TestLists_Struct1c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write1(p.p, 0, s->f != 0);
	capn_set_text(p.p, 0, s->pad);
}
void get_TestLists_Struct1c(struct TestLists_Struct1c *s, TestLists_Struct1c_list l, int i) {
	TestLists_Struct1c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct1c(s, p);
}
void set_TestLists_Struct1c(const struct TestLists_Struct1c *s, TestLists_Struct1c_list l, int i) {
	TestLists_Struct1c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct1c(s, p);
}

unsigned TestLists_Struct1c_get_f(TestLists_Struct1c_ptr p)
{
	unsigned f;
	f = (capn_read8(p.p, 0) & 1) != 0;
	return f;
}

capn_text TestLists_Struct1c_get_pad(TestLists_Struct1c_ptr p)
{
	capn_text pad;
	pad = capn_get_text(p.p, 0, capn_val0);
	return pad;
}

void TestLists_Struct1c_set_f(TestLists_Struct1c_ptr p, unsigned f)
{
	capn_write1(p.p, 0, f != 0);
}

void TestLists_Struct1c_set_pad(TestLists_Struct1c_ptr p, capn_text pad)
{
	capn_set_text(p.p, 0, pad);
}

TestLists_Struct8c_ptr new_TestLists_Struct8c(struct capn_segment *s) {
	TestLists_Struct8c_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestLists_Struct8c_list new_TestLists_Struct8c_list(struct capn_segment *s, int len) {
	TestLists_Struct8c_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestLists_Struct8c(struct TestLists_Struct8c *s capnp_unused, TestLists_Struct8c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_read8(p.p, 0);
	s->pad = capn_get_text(p.p, 0, capn_val0);
}
void write_TestLists_Struct8c(const struct TestLists_Struct8c *s capnp_unused, TestLists_Struct8c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write8(p.p, 0, s->f);
	capn_set_text(p.p, 0, s->pad);
}
void get_TestLists_Struct8c(struct TestLists_Struct8c *s, TestLists_Struct8c_list l, int i) {
	TestLists_Struct8c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct8c(s, p);
}
void set_TestLists_Struct8c(const struct TestLists_Struct8c *s, TestLists_Struct8c_list l, int i) {
	TestLists_Struct8c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct8c(s, p);
}

uint8_t TestLists_Struct8c_get_f(TestLists_Struct8c_ptr p)
{
	uint8_t f;
	f = capn_read8(p.p, 0);
	return f;
}

capn_text TestLists_Struct8c_get_pad(TestLists_Struct8c_ptr p)
{
	capn_text pad;
	pad = capn_get_text(p.p, 0, capn_val0);
	return pad;
}

void TestLists_Struct8c_set_f(TestLists_Struct8c_ptr p, uint8_t f)
{
	capn_write8(p.p, 0, f);
}

void TestLists_Struct8c_set_pad(TestLists_Struct8c_ptr p, capn_text pad)
{
	capn_set_text(p.p, 0, pad);
}

TestLists_Struct16c_ptr new_TestLists_Struct16c(struct capn_segment *s) {
	TestLists_Struct16c_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestLists_Struct16c_list new_TestLists_Struct16c_list(struct capn_segment *s, int len) {
	TestLists_Struct16c_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestLists_Struct16c(struct TestLists_Struct16c *s capnp_unused, TestLists_Struct16c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_read16(p.p, 0);
	s->pad = capn_get_text(p.p, 0, capn_val0);
}
void write_TestLists_Struct16c(const struct TestLists_Struct16c *s capnp_unused, TestLists_Struct16c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 0, s->f);
	capn_set_text(p.p, 0, s->pad);
}
void get_TestLists_Struct16c(struct TestLists_Struct16c *s, TestLists_Struct16c_list l, int i) {
	TestLists_Struct16c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct16c(s, p);
}
void set_TestLists_Struct16c(const struct TestLists_Struct16c *s, TestLists_Struct16c_list l, int i) {
	TestLists_Struct16c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct16c(s, p);
}

uint16_t TestLists_Struct16c_get_f(TestLists_Struct16c_ptr p)
{
	uint16_t f;
	f = capn_read16(p.p, 0);
	return f;
}

capn_text TestLists_Struct16c_get_pad(TestLists_Struct16c_ptr p)
{
	capn_text pad;
	pad = capn_get_text(p.p, 0, capn_val0);
	return pad;
}

void TestLists_Struct16c_set_f(TestLists_Struct16c_ptr p, uint16_t f)
{
	capn_write16(p.p, 0, f);
}

void TestLists_Struct16c_set_pad(TestLists_Struct16c_ptr p, capn_text pad)
{
	capn_set_text(p.p, 0, pad);
}

TestLists_Struct32c_ptr new_TestLists_Struct32c(struct capn_segment *s) {
	TestLists_Struct32c_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestLists_Struct32c_list new_TestLists_Struct32c_list(struct capn_segment *s, int len) {
	TestLists_Struct32c_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestLists_Struct32c(struct TestLists_Struct32c *s capnp_unused, TestLists_Struct32c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_read32(p.p, 0);
	s->pad = capn_get_text(p.p, 0, capn_val0);
}
void write_TestLists_Struct32c(const struct TestLists_Struct32c *s capnp_unused, TestLists_Struct32c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write32(p.p, 0, s->f);
	capn_set_text(p.p, 0, s->pad);
}
void get_TestLists_Struct32c(struct TestLists_Struct32c *s, TestLists_Struct32c_list l, int i) {
	TestLists_Struct32c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct32c(s, p);
}
void set_TestLists_Struct32c(const struct TestLists_Struct32c *s, TestLists_Struct32c_list l, int i) {
	TestLists_Struct32c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct32c(s, p);
}

uint32_t TestLists_Struct32c_get_f(TestLists_Struct32c_ptr p)
{
	uint32_t f;
	f = capn_read32(p.p, 0);
	return f;
}

capn_text TestLists_Struct32c_get_pad(TestLists_Struct32c_ptr p)
{
	capn_text pad;
	pad = capn_get_text(p.p, 0, capn_val0);
	return pad;
}

void TestLists_Struct32c_set_f(TestLists_Struct32c_ptr p, uint32_t f)
{
	capn_write32(p.p, 0, f);
}

void TestLists_Struct32c_set_pad(TestLists_Struct32c_ptr p, capn_text pad)
{
	capn_set_text(p.p, 0, pad);
}

TestLists_Struct64c_ptr new_TestLists_Struct64c(struct capn_segment *s) {
	TestLists_Struct64c_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestLists_Struct64c_list new_TestLists_Struct64c_list(struct capn_segment *s, int len) {
	TestLists_Struct64c_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestLists_Struct64c(struct TestLists_Struct64c *s capnp_unused, TestLists_Struct64c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_read64(p.p, 0);
	s->pad = capn_get_text(p.p, 0, capn_val0);
}
void write_TestLists_Struct64c(const struct TestLists_Struct64c *s capnp_unused, TestLists_Struct64c_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, s->f);
	capn_set_text(p.p, 0, s->pad);
}
void get_TestLists_Struct64c(struct TestLists_Struct64c *s, TestLists_Struct64c_list l, int i) {
	TestLists_Struct64c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_Struct64c(s, p);
}
void set_TestLists_Struct64c(const struct TestLists_Struct64c *s, TestLists_Struct64c_list l, int i) {
	TestLists_Struct64c_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_Struct64c(s, p);
}

uint64_t TestLists_Struct64c_get_f(TestLists_Struct64c_ptr p)
{
	uint64_t f;
	f = capn_read64(p.p, 0);
	return f;
}

capn_text TestLists_Struct64c_get_pad(TestLists_Struct64c_ptr p)
{
	capn_text pad;
	pad = capn_get_text(p.p, 0, capn_val0);
	return pad;
}

void TestLists_Struct64c_set_f(TestLists_Struct64c_ptr p, uint64_t f)
{
	capn_write64(p.p, 0, f);
}

void TestLists_Struct64c_set_pad(TestLists_Struct64c_ptr p, capn_text pad)
{
	capn_set_text(p.p, 0, pad);
}

TestLists_StructPc_ptr new_TestLists_StructPc(struct capn_segment *s) {
	TestLists_StructPc_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestLists_StructPc_list new_TestLists_StructPc_list(struct capn_segment *s, int len) {
	TestLists_StructPc_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestLists_StructPc(struct TestLists_StructPc *s capnp_unused, TestLists_StructPc_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->f = capn_get_text(p.p, 0, capn_val0);
	s->pad = capn_read64(p.p, 0);
}
void write_TestLists_StructPc(const struct TestLists_StructPc *s capnp_unused, TestLists_StructPc_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->f);
	capn_write64(p.p, 0, s->pad);
}
void get_TestLists_StructPc(struct TestLists_StructPc *s, TestLists_StructPc_list l, int i) {
	TestLists_StructPc_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLists_StructPc(s, p);
}
void set_TestLists_StructPc(const struct TestLists_StructPc *s, TestLists_StructPc_list l, int i) {
	TestLists_StructPc_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLists_StructPc(s, p);
}

capn_text TestLists_StructPc_get_f(TestLists_StructPc_ptr p)
{
	capn_text f;
	f = capn_get_text(p.p, 0, capn_val0);
	return f;
}

uint64_t TestLists_StructPc_get_pad(TestLists_StructPc_ptr p)
{
	uint64_t pad;
	pad = capn_read64(p.p, 0);
	return pad;
}

void TestLists_StructPc_set_f(TestLists_StructPc_ptr p, capn_text f)
{
	capn_set_text(p.p, 0, f);
}

void TestLists_StructPc_set_pad(TestLists_StructPc_ptr p, uint64_t pad)
{
	capn_write64(p.p, 0, pad);
}

TestFieldZeroIsBit_ptr new_TestFieldZeroIsBit(struct capn_segment *s) {
	TestFieldZeroIsBit_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestFieldZeroIsBit_list new_TestFieldZeroIsBit_list(struct capn_segment *s, int len) {
	TestFieldZeroIsBit_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestFieldZeroIsBit(struct TestFieldZeroIsBit *s capnp_unused, TestFieldZeroIsBit_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->bit = (capn_read8(p.p, 0) & 1) != 0;
	s->secondBit = (capn_read8(p.p, 0) & 2) != 1;
	s->thirdField = capn_read8(p.p, 1) ^ 123u;
}
void write_TestFieldZeroIsBit(const struct TestFieldZeroIsBit *s capnp_unused, TestFieldZeroIsBit_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write1(p.p, 0, s->bit != 0);
	capn_write1(p.p, 1, s->secondBit != 1);
	capn_write8(p.p, 1, s->thirdField ^ 123u);
}
void get_TestFieldZeroIsBit(struct TestFieldZeroIsBit *s, TestFieldZeroIsBit_list l, int i) {
	TestFieldZeroIsBit_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestFieldZeroIsBit(s, p);
}
void set_TestFieldZeroIsBit(const struct TestFieldZeroIsBit *s, TestFieldZeroIsBit_list l, int i) {
	TestFieldZeroIsBit_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestFieldZeroIsBit(s, p);
}

unsigned TestFieldZeroIsBit_get_bit(TestFieldZeroIsBit_ptr p)
{
	unsigned bit;
	bit = (capn_read8(p.p, 0) & 1) != 0;
	return bit;
}

unsigned TestFieldZeroIsBit_get_secondBit(TestFieldZeroIsBit_ptr p)
{
	unsigned secondBit;
	secondBit = (capn_read8(p.p, 0) & 2) != 1;
	return secondBit;
}

uint8_t TestFieldZeroIsBit_get_thirdField(TestFieldZeroIsBit_ptr p)
{
	uint8_t thirdField;
	thirdField = capn_read8(p.p, 1) ^ 123u;
	return thirdField;
}

void TestFieldZeroIsBit_set_bit(TestFieldZeroIsBit_ptr p, unsigned bit)
{
	capn_write1(p.p, 0, bit != 0);
}

void TestFieldZeroIsBit_set_secondBit(TestFieldZeroIsBit_ptr p, unsigned secondBit)
{
	capn_write1(p.p, 1, secondBit != 1);
}

void TestFieldZeroIsBit_set_thirdField(TestFieldZeroIsBit_ptr p, uint8_t thirdField)
{
	capn_write8(p.p, 1, thirdField ^ 123u);
}
static TestLists_ptr capn_val24 = {{1,1,0,0,0,10,0,(char*)&capn_buf[3792],(struct capn_segment*)&capn_seg}};

TestListDefaults_ptr new_TestListDefaults(struct capn_segment *s) {
	TestListDefaults_ptr p;
	p.p = capn_new_struct(s, 0, 1);
	return p;
}
TestListDefaults_list new_TestListDefaults_list(struct capn_segment *s, int len) {
	TestListDefaults_list p;
	p.p = capn_new_list(s, len, 0, 1);
	return p;
}
void read_TestListDefaults(struct TestListDefaults *s capnp_unused, TestListDefaults_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->lists.p = capn_getp(p.p, 0, 0);
	if (!s->lists.p.type) {
		s->lists = capn_val24;
	}
}
void write_TestListDefaults(const struct TestListDefaults *s capnp_unused, TestListDefaults_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_setp(p.p, 0, (s->lists.p.data != capn_val24.p.data) ? s->lists.p : capn_null);
}
void get_TestListDefaults(struct TestListDefaults *s, TestListDefaults_list l, int i) {
	TestListDefaults_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestListDefaults(s, p);
}
void set_TestListDefaults(const struct TestListDefaults *s, TestListDefaults_list l, int i) {
	TestListDefaults_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestListDefaults(s, p);
}

TestLists_ptr TestListDefaults_get_lists(TestListDefaults_ptr p)
{
	TestLists_ptr lists;
	lists.p = capn_getp(p.p, 0, 0);
if (!lists.p.type) {
	lists = capn_val24;
}
	return lists;
}

void TestListDefaults_set_lists(TestListDefaults_ptr p, TestLists_ptr lists)
{
	capn_setp(p.p, 0, (lists.p.data != capn_val24.p.data) ? lists.p : capn_null);
}

TestLateUnion_ptr new_TestLateUnion(struct capn_segment *s) {
	TestLateUnion_ptr p;
	p.p = capn_new_struct(s, 24, 3);
	return p;
}
TestLateUnion_list new_TestLateUnion_list(struct capn_segment *s, int len) {
	TestLateUnion_list p;
	p.p = capn_new_list(s, len, 24, 3);
	return p;
}
void read_TestLateUnion(struct TestLateUnion *s capnp_unused, TestLateUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->foo = (int32_t) ((int32_t)capn_read32(p.p, 0));
	s->bar = capn_get_text(p.p, 0, capn_val0);
	s->baz = (int16_t) ((int16_t)capn_read16(p.p, 4));
	s->theUnion_which = (enum TestLateUnion_theUnion_which)(int) capn_read16(p.p, 6);
	switch (s->theUnion_which) {
	case TestLateUnion_theUnion_grault:
		s->theUnion.grault = capn_to_f32(capn_read32(p.p, 8));
		break;
	case TestLateUnion_theUnion_qux:
		s->theUnion.qux = capn_get_text(p.p, 1, capn_val0);
		break;
	case TestLateUnion_theUnion_corge:
		s->theUnion.corge.p = capn_getp(p.p, 1, 0);
		break;
	default:
		break;
	}
	s->anotherUnion_which = (enum TestLateUnion_anotherUnion_which)(int) capn_read16(p.p, 12);
	switch (s->anotherUnion_which) {
	case TestLateUnion_anotherUnion_grault:
		s->anotherUnion.grault = capn_to_f32(capn_read32(p.p, 16));
		break;
	case TestLateUnion_anotherUnion_qux:
		s->anotherUnion.qux = capn_get_text(p.p, 2, capn_val0);
		break;
	case TestLateUnion_anotherUnion_corge:
		s->anotherUnion.corge.p = capn_getp(p.p, 2, 0);
		break;
	default:
		break;
	}
}
void write_TestLateUnion(const struct TestLateUnion *s capnp_unused, TestLateUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write32(p.p, 0, (uint32_t) (s->foo));
	capn_set_text(p.p, 0, s->bar);
	capn_write16(p.p, 4, (uint16_t) (s->baz));
	capn_write16(p.p, 6, s->theUnion_which);
	switch (s->theUnion_which) {
	case TestLateUnion_theUnion_grault:
		capn_write32(p.p, 8, capn_from_f32(s->theUnion.grault));
		break;
	case TestLateUnion_theUnion_qux:
		capn_set_text(p.p, 1, s->theUnion.qux);
		break;
	case TestLateUnion_theUnion_corge:
		capn_setp(p.p, 1, s->theUnion.corge.p);
		break;
	default:
		break;
	}
	capn_write16(p.p, 12, s->anotherUnion_which);
	switch (s->anotherUnion_which) {
	case TestLateUnion_anotherUnion_grault:
		capn_write32(p.p, 16, capn_from_f32(s->anotherUnion.grault));
		break;
	case TestLateUnion_anotherUnion_qux:
		capn_set_text(p.p, 2, s->anotherUnion.qux);
		break;
	case TestLateUnion_anotherUnion_corge:
		capn_setp(p.p, 2, s->anotherUnion.corge.p);
		break;
	default:
		break;
	}
}
void get_TestLateUnion(struct TestLateUnion *s, TestLateUnion_list l, int i) {
	TestLateUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestLateUnion(s, p);
}
void set_TestLateUnion(const struct TestLateUnion *s, TestLateUnion_list l, int i) {
	TestLateUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestLateUnion(s, p);
}

int32_t TestLateUnion_get_foo(TestLateUnion_ptr p)
{
	int32_t foo;
	foo = (int32_t) ((int32_t)capn_read32(p.p, 0));
	return foo;
}

capn_text TestLateUnion_get_bar(TestLateUnion_ptr p)
{
	capn_text bar;
	bar = capn_get_text(p.p, 0, capn_val0);
	return bar;
}

int16_t TestLateUnion_get_baz(TestLateUnion_ptr p)
{
	int16_t baz;
	baz = (int16_t) ((int16_t)capn_read16(p.p, 4));
	return baz;
}

void TestLateUnion_set_foo(TestLateUnion_ptr p, int32_t foo)
{
	capn_write32(p.p, 0, (uint32_t) (foo));
}

void TestLateUnion_set_bar(TestLateUnion_ptr p, capn_text bar)
{
	capn_set_text(p.p, 0, bar);
}

void TestLateUnion_set_baz(TestLateUnion_ptr p, int16_t baz)
{
	capn_write16(p.p, 4, (uint16_t) (baz));
}

TestOldVersion_ptr new_TestOldVersion(struct capn_segment *s) {
	TestOldVersion_ptr p;
	p.p = capn_new_struct(s, 8, 2);
	return p;
}
TestOldVersion_list new_TestOldVersion_list(struct capn_segment *s, int len) {
	TestOldVersion_list p;
	p.p = capn_new_list(s, len, 8, 2);
	return p;
}
void read_TestOldVersion(struct TestOldVersion *s capnp_unused, TestOldVersion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->old1 = (int64_t) ((int64_t)(capn_read64(p.p, 0)));
	s->old2 = capn_get_text(p.p, 0, capn_val0);
	s->old3.p = capn_getp(p.p, 1, 0);
}
void write_TestOldVersion(const struct TestOldVersion *s capnp_unused, TestOldVersion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, (uint64_t) (s->old1));
	capn_set_text(p.p, 0, s->old2);
	capn_setp(p.p, 1, s->old3.p);
}
void get_TestOldVersion(struct TestOldVersion *s, TestOldVersion_list l, int i) {
	TestOldVersion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestOldVersion(s, p);
}
void set_TestOldVersion(const struct TestOldVersion *s, TestOldVersion_list l, int i) {
	TestOldVersion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestOldVersion(s, p);
}

int64_t TestOldVersion_get_old1(TestOldVersion_ptr p)
{
	int64_t old1;
	old1 = (int64_t) ((int64_t)(capn_read64(p.p, 0)));
	return old1;
}

capn_text TestOldVersion_get_old2(TestOldVersion_ptr p)
{
	capn_text old2;
	old2 = capn_get_text(p.p, 0, capn_val0);
	return old2;
}

TestOldVersion_ptr TestOldVersion_get_old3(TestOldVersion_ptr p)
{
	TestOldVersion_ptr old3;
	old3.p = capn_getp(p.p, 1, 0);
	return old3;
}

void TestOldVersion_set_old1(TestOldVersion_ptr p, int64_t old1)
{
	capn_write64(p.p, 0, (uint64_t) (old1));
}

void TestOldVersion_set_old2(TestOldVersion_ptr p, capn_text old2)
{
	capn_set_text(p.p, 0, old2);
}

void TestOldVersion_set_old3(TestOldVersion_ptr p, TestOldVersion_ptr old3)
{
	capn_setp(p.p, 1, old3.p);
}
static capn_text capn_val25 = {3,(char*)&capn_buf[1544],(struct capn_segment*)&capn_seg};

TestNewVersion_ptr new_TestNewVersion(struct capn_segment *s) {
	TestNewVersion_ptr p;
	p.p = capn_new_struct(s, 16, 3);
	return p;
}
TestNewVersion_list new_TestNewVersion_list(struct capn_segment *s, int len) {
	TestNewVersion_list p;
	p.p = capn_new_list(s, len, 16, 3);
	return p;
}
void read_TestNewVersion(struct TestNewVersion *s capnp_unused, TestNewVersion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->old1 = (int64_t) ((int64_t)(capn_read64(p.p, 0)));
	s->old2 = capn_get_text(p.p, 0, capn_val0);
	s->old3.p = capn_getp(p.p, 1, 0);
	s->new1 = (int64_t) ((int64_t)(capn_read64(p.p, 8)) ^ ((int64_t)((uint64_t) 0u << 32) ^ 0x3dbu));
	s->new2 = capn_get_text(p.p, 2, capn_val25);
}
void write_TestNewVersion(const struct TestNewVersion *s capnp_unused, TestNewVersion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, (uint64_t) (s->old1));
	capn_set_text(p.p, 0, s->old2);
	capn_setp(p.p, 1, s->old3.p);
	capn_write64(p.p, 8, (uint64_t) (s->new1 ^ ((int64_t)((uint64_t) 0u << 32) ^ 0x3dbu)));
	capn_set_text(p.p, 2, (s->new2.str != capn_val25.str) ? s->new2 : capn_val0);
}
void get_TestNewVersion(struct TestNewVersion *s, TestNewVersion_list l, int i) {
	TestNewVersion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestNewVersion(s, p);
}
void set_TestNewVersion(const struct TestNewVersion *s, TestNewVersion_list l, int i) {
	TestNewVersion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestNewVersion(s, p);
}

int64_t TestNewVersion_get_old1(TestNewVersion_ptr p)
{
	int64_t old1;
	old1 = (int64_t) ((int64_t)(capn_read64(p.p, 0)));
	return old1;
}

capn_text TestNewVersion_get_old2(TestNewVersion_ptr p)
{
	capn_text old2;
	old2 = capn_get_text(p.p, 0, capn_val0);
	return old2;
}

TestNewVersion_ptr TestNewVersion_get_old3(TestNewVersion_ptr p)
{
	TestNewVersion_ptr old3;
	old3.p = capn_getp(p.p, 1, 0);
	return old3;
}

int64_t TestNewVersion_get_new1(TestNewVersion_ptr p)
{
	int64_t new1;
	new1 = (int64_t) ((int64_t)(capn_read64(p.p, 8)) ^ ((int64_t)((uint64_t) 0u << 32) ^ 0x3dbu));
	return new1;
}

capn_text TestNewVersion_get_new2(TestNewVersion_ptr p)
{
	capn_text new2;
	new2 = capn_get_text(p.p, 2, capn_val25);
	return new2;
}

void TestNewVersion_set_old1(TestNewVersion_ptr p, int64_t old1)
{
	capn_write64(p.p, 0, (uint64_t) (old1));
}

void TestNewVersion_set_old2(TestNewVersion_ptr p, capn_text old2)
{
	capn_set_text(p.p, 0, old2);
}

void TestNewVersion_set_old3(TestNewVersion_ptr p, TestNewVersion_ptr old3)
{
	capn_setp(p.p, 1, old3.p);
}

void TestNewVersion_set_new1(TestNewVersion_ptr p, int64_t new1)
{
	capn_write64(p.p, 8, (uint64_t) (new1 ^ ((int64_t)((uint64_t) 0u << 32) ^ 0x3dbu)));
}

void TestNewVersion_set_new2(TestNewVersion_ptr p, capn_text new2)
{
	capn_set_text(p.p, 2, (new2.str != capn_val25.str) ? new2 : capn_val0);
}

TestStructUnion_ptr new_TestStructUnion(struct capn_segment *s) {
	TestStructUnion_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestStructUnion_list new_TestStructUnion_list(struct capn_segment *s, int len) {
	TestStructUnion_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestStructUnion(struct TestStructUnion *s capnp_unused, TestStructUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->un_which = (enum TestStructUnion_un_which)(int) capn_read16(p.p, 0);
	switch (s->un_which) {
	case TestStructUnion_un__struct:
	case TestStructUnion_un_object:
		s->un.object.p = capn_getp(p.p, 0, 0);
		break;
	default:
		break;
	}
}
void write_TestStructUnion(const struct TestStructUnion *s capnp_unused, TestStructUnion_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 0, s->un_which);
	switch (s->un_which) {
	case TestStructUnion_un__struct:
	case TestStructUnion_un_object:
		capn_setp(p.p, 0, s->un.object.p);
		break;
	default:
		break;
	}
}
void get_TestStructUnion(struct TestStructUnion *s, TestStructUnion_list l, int i) {
	TestStructUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestStructUnion(s, p);
}
void set_TestStructUnion(const struct TestStructUnion *s, TestStructUnion_list l, int i) {
	TestStructUnion_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestStructUnion(s, p);
}

TestStructUnion_SomeStruct_ptr new_TestStructUnion_SomeStruct(struct capn_segment *s) {
	TestStructUnion_SomeStruct_ptr p;
	p.p = capn_new_struct(s, 0, 2);
	return p;
}
TestStructUnion_SomeStruct_list new_TestStructUnion_SomeStruct_list(struct capn_segment *s, int len) {
	TestStructUnion_SomeStruct_list p;
	p.p = capn_new_list(s, len, 0, 2);
	return p;
}
void read_TestStructUnion_SomeStruct(struct TestStructUnion_SomeStruct *s capnp_unused, TestStructUnion_SomeStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->someText = capn_get_text(p.p, 0, capn_val0);
	s->moreText = capn_get_text(p.p, 1, capn_val0);
}
void write_TestStructUnion_SomeStruct(const struct TestStructUnion_SomeStruct *s capnp_unused, TestStructUnion_SomeStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->someText);
	capn_set_text(p.p, 1, s->moreText);
}
void get_TestStructUnion_SomeStruct(struct TestStructUnion_SomeStruct *s, TestStructUnion_SomeStruct_list l, int i) {
	TestStructUnion_SomeStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestStructUnion_SomeStruct(s, p);
}
void set_TestStructUnion_SomeStruct(const struct TestStructUnion_SomeStruct *s, TestStructUnion_SomeStruct_list l, int i) {
	TestStructUnion_SomeStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestStructUnion_SomeStruct(s, p);
}

capn_text TestStructUnion_SomeStruct_get_someText(TestStructUnion_SomeStruct_ptr p)
{
	capn_text someText;
	someText = capn_get_text(p.p, 0, capn_val0);
	return someText;
}

capn_text TestStructUnion_SomeStruct_get_moreText(TestStructUnion_SomeStruct_ptr p)
{
	capn_text moreText;
	moreText = capn_get_text(p.p, 1, capn_val0);
	return moreText;
}

void TestStructUnion_SomeStruct_set_someText(TestStructUnion_SomeStruct_ptr p, capn_text someText)
{
	capn_set_text(p.p, 0, someText);
}

void TestStructUnion_SomeStruct_set_moreText(TestStructUnion_SomeStruct_ptr p, capn_text moreText)
{
	capn_set_text(p.p, 1, moreText);
}

TestPrintInlineStructs_ptr new_TestPrintInlineStructs(struct capn_segment *s) {
	TestPrintInlineStructs_ptr p;
	p.p = capn_new_struct(s, 0, 2);
	return p;
}
TestPrintInlineStructs_list new_TestPrintInlineStructs_list(struct capn_segment *s, int len) {
	TestPrintInlineStructs_list p;
	p.p = capn_new_list(s, len, 0, 2);
	return p;
}
void read_TestPrintInlineStructs(struct TestPrintInlineStructs *s capnp_unused, TestPrintInlineStructs_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->someText = capn_get_text(p.p, 0, capn_val0);
	s->structList.p = capn_getp(p.p, 1, 0);
}
void write_TestPrintInlineStructs(const struct TestPrintInlineStructs *s capnp_unused, TestPrintInlineStructs_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->someText);
	capn_setp(p.p, 1, s->structList.p);
}
void get_TestPrintInlineStructs(struct TestPrintInlineStructs *s, TestPrintInlineStructs_list l, int i) {
	TestPrintInlineStructs_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestPrintInlineStructs(s, p);
}
void set_TestPrintInlineStructs(const struct TestPrintInlineStructs *s, TestPrintInlineStructs_list l, int i) {
	TestPrintInlineStructs_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestPrintInlineStructs(s, p);
}

capn_text TestPrintInlineStructs_get_someText(TestPrintInlineStructs_ptr p)
{
	capn_text someText;
	someText = capn_get_text(p.p, 0, capn_val0);
	return someText;
}

TestPrintInlineStructs_InlineStruct_list TestPrintInlineStructs_get_structList(TestPrintInlineStructs_ptr p)
{
	TestPrintInlineStructs_InlineStruct_list structList;
	structList.p = capn_getp(p.p, 1, 0);
	return structList;
}

void TestPrintInlineStructs_set_someText(TestPrintInlineStructs_ptr p, capn_text someText)
{
	capn_set_text(p.p, 0, someText);
}

void TestPrintInlineStructs_set_structList(TestPrintInlineStructs_ptr p, TestPrintInlineStructs_InlineStruct_list structList)
{
	capn_setp(p.p, 1, structList.p);
}

TestPrintInlineStructs_InlineStruct_ptr new_TestPrintInlineStructs_InlineStruct(struct capn_segment *s) {
	TestPrintInlineStructs_InlineStruct_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestPrintInlineStructs_InlineStruct_list new_TestPrintInlineStructs_InlineStruct_list(struct capn_segment *s, int len) {
	TestPrintInlineStructs_InlineStruct_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestPrintInlineStructs_InlineStruct(struct TestPrintInlineStructs_InlineStruct *s capnp_unused, TestPrintInlineStructs_InlineStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->int32Field = (int32_t) ((int32_t)capn_read32(p.p, 0));
	s->textField = capn_get_text(p.p, 0, capn_val0);
}
void write_TestPrintInlineStructs_InlineStruct(const struct TestPrintInlineStructs_InlineStruct *s capnp_unused, TestPrintInlineStructs_InlineStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write32(p.p, 0, (uint32_t) (s->int32Field));
	capn_set_text(p.p, 0, s->textField);
}
void get_TestPrintInlineStructs_InlineStruct(struct TestPrintInlineStructs_InlineStruct *s, TestPrintInlineStructs_InlineStruct_list l, int i) {
	TestPrintInlineStructs_InlineStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestPrintInlineStructs_InlineStruct(s, p);
}
void set_TestPrintInlineStructs_InlineStruct(const struct TestPrintInlineStructs_InlineStruct *s, TestPrintInlineStructs_InlineStruct_list l, int i) {
	TestPrintInlineStructs_InlineStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestPrintInlineStructs_InlineStruct(s, p);
}

int32_t TestPrintInlineStructs_InlineStruct_get_int32Field(TestPrintInlineStructs_InlineStruct_ptr p)
{
	int32_t int32Field;
	int32Field = (int32_t) ((int32_t)capn_read32(p.p, 0));
	return int32Field;
}

capn_text TestPrintInlineStructs_InlineStruct_get_textField(TestPrintInlineStructs_InlineStruct_ptr p)
{
	capn_text textField;
	textField = capn_get_text(p.p, 0, capn_val0);
	return textField;
}

void TestPrintInlineStructs_InlineStruct_set_int32Field(TestPrintInlineStructs_InlineStruct_ptr p, int32_t int32Field)
{
	capn_write32(p.p, 0, (uint32_t) (int32Field));
}

void TestPrintInlineStructs_InlineStruct_set_textField(TestPrintInlineStructs_InlineStruct_ptr p, capn_text textField)
{
	capn_set_text(p.p, 0, textField);
}

TestWholeFloatDefault_ptr new_TestWholeFloatDefault(struct capn_segment *s) {
	TestWholeFloatDefault_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestWholeFloatDefault_list new_TestWholeFloatDefault_list(struct capn_segment *s, int len) {
	TestWholeFloatDefault_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestWholeFloatDefault(struct TestWholeFloatDefault *s capnp_unused, TestWholeFloatDefault_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->field = capn_to_f32(capn_read32(p.p, 0) ^ 0x42f60000u);
	s->bigField = capn_to_f32(capn_read32(p.p, 4) ^ 0x71c9f2cau);
}
void write_TestWholeFloatDefault(const struct TestWholeFloatDefault *s capnp_unused, TestWholeFloatDefault_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write32(p.p, 0, capn_from_f32(s->field) ^ 0x42f60000u);
	capn_write32(p.p, 4, capn_from_f32(s->bigField) ^ 0x71c9f2cau);
}
void get_TestWholeFloatDefault(struct TestWholeFloatDefault *s, TestWholeFloatDefault_list l, int i) {
	TestWholeFloatDefault_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestWholeFloatDefault(s, p);
}
void set_TestWholeFloatDefault(const struct TestWholeFloatDefault *s, TestWholeFloatDefault_list l, int i) {
	TestWholeFloatDefault_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestWholeFloatDefault(s, p);
}

float TestWholeFloatDefault_get_field(TestWholeFloatDefault_ptr p)
{
	float field;
	field = capn_to_f32(capn_read32(p.p, 0) ^ 0x42f60000u);
	return field;
}

float TestWholeFloatDefault_get_bigField(TestWholeFloatDefault_ptr p)
{
	float bigField;
	bigField = capn_to_f32(capn_read32(p.p, 4) ^ 0x71c9f2cau);
	return bigField;
}

void TestWholeFloatDefault_set_field(TestWholeFloatDefault_ptr p, float field)
{
	capn_write32(p.p, 0, capn_from_f32(field) ^ 0x42f60000u);
}

void TestWholeFloatDefault_set_bigField(TestWholeFloatDefault_ptr p, float bigField)
{
	capn_write32(p.p, 4, capn_from_f32(bigField) ^ 0x71c9f2cau);
}

TestEmptyStruct_ptr new_TestEmptyStruct(struct capn_segment *s) {
	TestEmptyStruct_ptr p;
	p.p = capn_new_struct(s, 0, 0);
	return p;
}
TestEmptyStruct_list new_TestEmptyStruct_list(struct capn_segment *s, int len) {
	TestEmptyStruct_list p;
	p.p = capn_new_list(s, len, 0, 0);
	return p;
}
void read_TestEmptyStruct(struct TestEmptyStruct *s capnp_unused, TestEmptyStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void write_TestEmptyStruct(const struct TestEmptyStruct *s capnp_unused, TestEmptyStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void get_TestEmptyStruct(struct TestEmptyStruct *s, TestEmptyStruct_list l, int i) {
	TestEmptyStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestEmptyStruct(s, p);
}
void set_TestEmptyStruct(const struct TestEmptyStruct *s, TestEmptyStruct_list l, int i) {
	TestEmptyStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestEmptyStruct(s, p);
}

TestConstants_ptr new_TestConstants(struct capn_segment *s) {
	TestConstants_ptr p;
	p.p = capn_new_struct(s, 0, 0);
	return p;
}
TestConstants_list new_TestConstants_list(struct capn_segment *s, int len) {
	TestConstants_list p;
	p.p = capn_new_list(s, len, 0, 0);
	return p;
}
void read_TestConstants(struct TestConstants *s capnp_unused, TestConstants_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void write_TestConstants(const struct TestConstants *s capnp_unused, TestConstants_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void get_TestConstants(struct TestConstants *s, TestConstants_list l, int i) {
	TestConstants_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestConstants(s, p);
}
void set_TestConstants(const struct TestConstants *s, TestConstants_list l, int i) {
	TestConstants_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestConstants(s, p);
}

TestSturdyRef_ptr new_TestSturdyRef(struct capn_segment *s) {
	TestSturdyRef_ptr p;
	p.p = capn_new_struct(s, 0, 2);
	return p;
}
TestSturdyRef_list new_TestSturdyRef_list(struct capn_segment *s, int len) {
	TestSturdyRef_list p;
	p.p = capn_new_list(s, len, 0, 2);
	return p;
}
void read_TestSturdyRef(struct TestSturdyRef *s capnp_unused, TestSturdyRef_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->hostId.p = capn_getp(p.p, 0, 0);
	s->objectId = capn_getp(p.p, 1, 0);
}
void write_TestSturdyRef(const struct TestSturdyRef *s capnp_unused, TestSturdyRef_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_setp(p.p, 0, s->hostId.p);
	capn_setp(p.p, 1, s->objectId);
}
void get_TestSturdyRef(struct TestSturdyRef *s, TestSturdyRef_list l, int i) {
	TestSturdyRef_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestSturdyRef(s, p);
}
void set_TestSturdyRef(const struct TestSturdyRef *s, TestSturdyRef_list l, int i) {
	TestSturdyRef_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestSturdyRef(s, p);
}

TestSturdyRefHostId_ptr TestSturdyRef_get_hostId(TestSturdyRef_ptr p)
{
	TestSturdyRefHostId_ptr hostId;
	hostId.p = capn_getp(p.p, 0, 0);
	return hostId;
}

capn_ptr TestSturdyRef_get_objectId(TestSturdyRef_ptr p)
{
	capn_ptr objectId;
	objectId = capn_getp(p.p, 1, 0);
	return objectId;
}

void TestSturdyRef_set_hostId(TestSturdyRef_ptr p, TestSturdyRefHostId_ptr hostId)
{
	capn_setp(p.p, 0, hostId.p);
}

void TestSturdyRef_set_objectId(TestSturdyRef_ptr p, capn_ptr objectId)
{
	capn_setp(p.p, 1, objectId);
}

TestSturdyRefHostId_ptr new_TestSturdyRefHostId(struct capn_segment *s) {
	TestSturdyRefHostId_ptr p;
	p.p = capn_new_struct(s, 0, 1);
	return p;
}
TestSturdyRefHostId_list new_TestSturdyRefHostId_list(struct capn_segment *s, int len) {
	TestSturdyRefHostId_list p;
	p.p = capn_new_list(s, len, 0, 1);
	return p;
}
void read_TestSturdyRefHostId(struct TestSturdyRefHostId *s capnp_unused, TestSturdyRefHostId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->host = capn_get_text(p.p, 0, capn_val0);
}
void write_TestSturdyRefHostId(const struct TestSturdyRefHostId *s capnp_unused, TestSturdyRefHostId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->host);
}
void get_TestSturdyRefHostId(struct TestSturdyRefHostId *s, TestSturdyRefHostId_list l, int i) {
	TestSturdyRefHostId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestSturdyRefHostId(s, p);
}
void set_TestSturdyRefHostId(const struct TestSturdyRefHostId *s, TestSturdyRefHostId_list l, int i) {
	TestSturdyRefHostId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestSturdyRefHostId(s, p);
}

capn_text TestSturdyRefHostId_get_host(TestSturdyRefHostId_ptr p)
{
	capn_text host;
	host = capn_get_text(p.p, 0, capn_val0);
	return host;
}

void TestSturdyRefHostId_set_host(TestSturdyRefHostId_ptr p, capn_text host)
{
	capn_set_text(p.p, 0, host);
}

TestSturdyRefObjectId_ptr new_TestSturdyRefObjectId(struct capn_segment *s) {
	TestSturdyRefObjectId_ptr p;
	p.p = capn_new_struct(s, 8, 0);
	return p;
}
TestSturdyRefObjectId_list new_TestSturdyRefObjectId_list(struct capn_segment *s, int len) {
	TestSturdyRefObjectId_list p;
	p.p = capn_new_list(s, len, 8, 0);
	return p;
}
void read_TestSturdyRefObjectId(struct TestSturdyRefObjectId *s capnp_unused, TestSturdyRefObjectId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->tag = (enum TestSturdyRefObjectId_Tag)(int) capn_read16(p.p, 0);
}
void write_TestSturdyRefObjectId(const struct TestSturdyRefObjectId *s capnp_unused, TestSturdyRefObjectId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 0, (uint16_t) (s->tag));
}
void get_TestSturdyRefObjectId(struct TestSturdyRefObjectId *s, TestSturdyRefObjectId_list l, int i) {
	TestSturdyRefObjectId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestSturdyRefObjectId(s, p);
}
void set_TestSturdyRefObjectId(const struct TestSturdyRefObjectId *s, TestSturdyRefObjectId_list l, int i) {
	TestSturdyRefObjectId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestSturdyRefObjectId(s, p);
}

enum TestSturdyRefObjectId_Tag TestSturdyRefObjectId_get_tag(TestSturdyRefObjectId_ptr p)
{
	enum TestSturdyRefObjectId_Tag tag;
	tag = (enum TestSturdyRefObjectId_Tag)(int) capn_read16(p.p, 0);
	return tag;
}

void TestSturdyRefObjectId_set_tag(TestSturdyRefObjectId_ptr p, enum TestSturdyRefObjectId_Tag tag)
{
	capn_write16(p.p, 0, (uint16_t) (tag));
}

TestProvisionId_ptr new_TestProvisionId(struct capn_segment *s) {
	TestProvisionId_ptr p;
	p.p = capn_new_struct(s, 0, 0);
	return p;
}
TestProvisionId_list new_TestProvisionId_list(struct capn_segment *s, int len) {
	TestProvisionId_list p;
	p.p = capn_new_list(s, len, 0, 0);
	return p;
}
void read_TestProvisionId(struct TestProvisionId *s capnp_unused, TestProvisionId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void write_TestProvisionId(const struct TestProvisionId *s capnp_unused, TestProvisionId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void get_TestProvisionId(struct TestProvisionId *s, TestProvisionId_list l, int i) {
	TestProvisionId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestProvisionId(s, p);
}
void set_TestProvisionId(const struct TestProvisionId *s, TestProvisionId_list l, int i) {
	TestProvisionId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestProvisionId(s, p);
}

TestRecipientId_ptr new_TestRecipientId(struct capn_segment *s) {
	TestRecipientId_ptr p;
	p.p = capn_new_struct(s, 0, 0);
	return p;
}
TestRecipientId_list new_TestRecipientId_list(struct capn_segment *s, int len) {
	TestRecipientId_list p;
	p.p = capn_new_list(s, len, 0, 0);
	return p;
}
void read_TestRecipientId(struct TestRecipientId *s capnp_unused, TestRecipientId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void write_TestRecipientId(const struct TestRecipientId *s capnp_unused, TestRecipientId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void get_TestRecipientId(struct TestRecipientId *s, TestRecipientId_list l, int i) {
	TestRecipientId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestRecipientId(s, p);
}
void set_TestRecipientId(const struct TestRecipientId *s, TestRecipientId_list l, int i) {
	TestRecipientId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestRecipientId(s, p);
}

TestThirdPartyCapId_ptr new_TestThirdPartyCapId(struct capn_segment *s) {
	TestThirdPartyCapId_ptr p;
	p.p = capn_new_struct(s, 0, 0);
	return p;
}
TestThirdPartyCapId_list new_TestThirdPartyCapId_list(struct capn_segment *s, int len) {
	TestThirdPartyCapId_list p;
	p.p = capn_new_list(s, len, 0, 0);
	return p;
}
void read_TestThirdPartyCapId(struct TestThirdPartyCapId *s capnp_unused, TestThirdPartyCapId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void write_TestThirdPartyCapId(const struct TestThirdPartyCapId *s capnp_unused, TestThirdPartyCapId_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void get_TestThirdPartyCapId(struct TestThirdPartyCapId *s, TestThirdPartyCapId_list l, int i) {
	TestThirdPartyCapId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestThirdPartyCapId(s, p);
}
void set_TestThirdPartyCapId(const struct TestThirdPartyCapId *s, TestThirdPartyCapId_list l, int i) {
	TestThirdPartyCapId_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestThirdPartyCapId(s, p);
}

TestJoinResult_ptr new_TestJoinResult(struct capn_segment *s) {
	TestJoinResult_ptr p;
	p.p = capn_new_struct(s, 0, 0);
	return p;
}
TestJoinResult_list new_TestJoinResult_list(struct capn_segment *s, int len) {
	TestJoinResult_list p;
	p.p = capn_new_list(s, len, 0, 0);
	return p;
}
void read_TestJoinResult(struct TestJoinResult *s capnp_unused, TestJoinResult_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void write_TestJoinResult(const struct TestJoinResult *s capnp_unused, TestJoinResult_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
}
void get_TestJoinResult(struct TestJoinResult *s, TestJoinResult_list l, int i) {
	TestJoinResult_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestJoinResult(s, p);
}
void set_TestJoinResult(const struct TestJoinResult *s, TestJoinResult_list l, int i) {
	TestJoinResult_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestJoinResult(s, p);
}

TestNameAnnotation_ptr new_TestNameAnnotation(struct capn_segment *s) {
	TestNameAnnotation_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestNameAnnotation_list new_TestNameAnnotation_list(struct capn_segment *s, int len) {
	TestNameAnnotation_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestNameAnnotation(struct TestNameAnnotation *s capnp_unused, TestNameAnnotation_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->which = (enum TestNameAnnotation_which)(int) capn_read16(p.p, 2);
	switch (s->which) {
	case TestNameAnnotation_badFieldName:
		s->badFieldName = (capn_read8(p.p, 0) & 1) != 0;
		break;
	case TestNameAnnotation_bar:
		s->bar = (int8_t) ((int8_t)capn_read8(p.p, 0));
		break;
	default:
		break;
	}
	s->anotherBadFieldName = (enum TestNameAnnotation_BadlyNamedEnum)(int) capn_read16(p.p, 4);
	s->badlyNamedUnion_which = (enum TestNameAnnotation_badlyNamedUnion_which)(int) capn_read16(p.p, 6);
	switch (s->badlyNamedUnion_which) {
	case TestNameAnnotation_badlyNamedUnion_baz:
		s->badlyNamedUnion.baz.p = capn_getp(p.p, 0, 0);
		break;
	case TestNameAnnotation_badlyNamedUnion_badlyNamedGroup:
		break;
	default:
		break;
	}
}
void write_TestNameAnnotation(const struct TestNameAnnotation *s capnp_unused, TestNameAnnotation_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 2, s->which);
	switch (s->which) {
	case TestNameAnnotation_badFieldName:
		capn_write1(p.p, 0, s->badFieldName != 0);
		break;
	case TestNameAnnotation_bar:
		capn_write8(p.p, 0, (uint8_t) (s->bar));
		break;
	default:
		break;
	}
	capn_write16(p.p, 4, (uint16_t) (s->anotherBadFieldName));
	capn_write16(p.p, 6, s->badlyNamedUnion_which);
	switch (s->badlyNamedUnion_which) {
	case TestNameAnnotation_badlyNamedUnion_baz:
		capn_setp(p.p, 0, s->badlyNamedUnion.baz.p);
		break;
	case TestNameAnnotation_badlyNamedUnion_badlyNamedGroup:
		break;
	default:
		break;
	}
}
void get_TestNameAnnotation(struct TestNameAnnotation *s, TestNameAnnotation_list l, int i) {
	TestNameAnnotation_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestNameAnnotation(s, p);
}
void set_TestNameAnnotation(const struct TestNameAnnotation *s, TestNameAnnotation_list l, int i) {
	TestNameAnnotation_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestNameAnnotation(s, p);
}

TestNameAnnotation_NestedStruct_ptr new_TestNameAnnotation_NestedStruct(struct capn_segment *s) {
	TestNameAnnotation_NestedStruct_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
TestNameAnnotation_NestedStruct_list new_TestNameAnnotation_NestedStruct_list(struct capn_segment *s, int len) {
	TestNameAnnotation_NestedStruct_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_TestNameAnnotation_NestedStruct(struct TestNameAnnotation_NestedStruct *s capnp_unused, TestNameAnnotation_NestedStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->badNestedFieldName = (capn_read8(p.p, 0) & 1) != 0;
	s->anotherBadNestedFieldName.p = capn_getp(p.p, 0, 0);
}
void write_TestNameAnnotation_NestedStruct(const struct TestNameAnnotation_NestedStruct *s capnp_unused, TestNameAnnotation_NestedStruct_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write1(p.p, 0, s->badNestedFieldName != 0);
	capn_setp(p.p, 0, s->anotherBadNestedFieldName.p);
}
void get_TestNameAnnotation_NestedStruct(struct TestNameAnnotation_NestedStruct *s, TestNameAnnotation_NestedStruct_list l, int i) {
	TestNameAnnotation_NestedStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_TestNameAnnotation_NestedStruct(s, p);
}
void set_TestNameAnnotation_NestedStruct(const struct TestNameAnnotation_NestedStruct *s, TestNameAnnotation_NestedStruct_list l, int i) {
	TestNameAnnotation_NestedStruct_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_TestNameAnnotation_NestedStruct(s, p);
}

unsigned TestNameAnnotation_NestedStruct_get_badNestedFieldName(TestNameAnnotation_NestedStruct_ptr p)
{
	unsigned badNestedFieldName;
	badNestedFieldName = (capn_read8(p.p, 0) & 1) != 0;
	return badNestedFieldName;
}

TestNameAnnotation_NestedStruct_ptr TestNameAnnotation_NestedStruct_get_anotherBadNestedFieldName(TestNameAnnotation_NestedStruct_ptr p)
{
	TestNameAnnotation_NestedStruct_ptr anotherBadNestedFieldName;
	anotherBadNestedFieldName.p = capn_getp(p.p, 0, 0);
	return anotherBadNestedFieldName;
}

void TestNameAnnotation_NestedStruct_set_badNestedFieldName(TestNameAnnotation_NestedStruct_ptr p, unsigned badNestedFieldName)
{
	capn_write1(p.p, 0, badNestedFieldName != 0);
}

void TestNameAnnotation_NestedStruct_set_anotherBadNestedFieldName(TestNameAnnotation_NestedStruct_ptr p, TestNameAnnotation_NestedStruct_ptr anotherBadNestedFieldName)
{
	capn_setp(p.p, 0, anotherBadNestedFieldName.p);
}

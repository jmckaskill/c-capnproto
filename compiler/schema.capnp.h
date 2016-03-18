#ifndef CAPN_A93FC509624C72D9
#define CAPN_A93FC509624C72D9
/* AUTO GENERATED - DO NOT EDIT */
#include <capnp_c.h>

#if CAPN_VERSION != 1
#error "version mismatch between capnp_c.h and generated code"
#endif

#include "c++.capnp.h"

#ifdef __cplusplus
extern "C" {
#endif

struct Node;
struct Node_Parameter;
struct Node_NestedNode;
struct Field;
struct Enumerant;
struct Superclass;
struct Method;
struct Type;
struct Brand;
struct Brand_Scope;
struct Brand_Binding;
struct Value;
struct Annotation;
struct CodeGeneratorRequest;
struct CodeGeneratorRequest_RequestedFile;
struct CodeGeneratorRequest_RequestedFile_Import;

typedef struct {capn_ptr p;} Node_ptr;
typedef struct {capn_ptr p;} Node_Parameter_ptr;
typedef struct {capn_ptr p;} Node_NestedNode_ptr;
typedef struct {capn_ptr p;} Field_ptr;
typedef struct {capn_ptr p;} Enumerant_ptr;
typedef struct {capn_ptr p;} Superclass_ptr;
typedef struct {capn_ptr p;} Method_ptr;
typedef struct {capn_ptr p;} Type_ptr;
typedef struct {capn_ptr p;} Brand_ptr;
typedef struct {capn_ptr p;} Brand_Scope_ptr;
typedef struct {capn_ptr p;} Brand_Binding_ptr;
typedef struct {capn_ptr p;} Value_ptr;
typedef struct {capn_ptr p;} Annotation_ptr;
typedef struct {capn_ptr p;} CodeGeneratorRequest_ptr;
typedef struct {capn_ptr p;} CodeGeneratorRequest_RequestedFile_ptr;
typedef struct {capn_ptr p;} CodeGeneratorRequest_RequestedFile_Import_ptr;

typedef struct {capn_ptr p;} Node_list;
typedef struct {capn_ptr p;} Node_Parameter_list;
typedef struct {capn_ptr p;} Node_NestedNode_list;
typedef struct {capn_ptr p;} Field_list;
typedef struct {capn_ptr p;} Enumerant_list;
typedef struct {capn_ptr p;} Superclass_list;
typedef struct {capn_ptr p;} Method_list;
typedef struct {capn_ptr p;} Type_list;
typedef struct {capn_ptr p;} Brand_list;
typedef struct {capn_ptr p;} Brand_Scope_list;
typedef struct {capn_ptr p;} Brand_Binding_list;
typedef struct {capn_ptr p;} Value_list;
typedef struct {capn_ptr p;} Annotation_list;
typedef struct {capn_ptr p;} CodeGeneratorRequest_list;
typedef struct {capn_ptr p;} CodeGeneratorRequest_RequestedFile_list;
typedef struct {capn_ptr p;} CodeGeneratorRequest_RequestedFile_Import_list;

enum ElementSize {
	ElementSize_empty = 0,
	ElementSize_bit = 1,
	ElementSize_byte = 2,
	ElementSize_twoBytes = 3,
	ElementSize_fourBytes = 4,
	ElementSize_eightBytes = 5,
	ElementSize_pointer = 6,
	ElementSize_inlineComposite = 7
};
extern uint16_t Field_noDiscriminant;
enum Node_which {
	Node_file = 0,
	Node__struct = 1,
	Node__enum = 2,
	Node__interface = 3,
	Node__const = 4,
	Node_annotation = 5
};

struct Node {
	uint64_t id;
	capn_text displayName;
	uint32_t displayNamePrefixLength;
	uint64_t scopeId;
	Node_Parameter_list parameters;
	unsigned isGeneric : 1;
	Node_NestedNode_list nestedNodes;
	Annotation_list annotations;
	enum Node_which which;
	union {
		struct {
			uint16_t dataWordCount;
			uint16_t pointerCount;
			enum ElementSize preferredListEncoding;
			unsigned isGroup : 1;
			uint16_t discriminantCount;
			uint32_t discriminantOffset;
			Field_list fields;
		} _struct;
		struct {
			Enumerant_list enumerants;
		} _enum;
		struct {
			Method_list methods;
			Superclass_list superclasses;
		} _interface;
		struct {
			Type_ptr type;
			Value_ptr value;
		} _const;
		struct {
			Type_ptr type;
			unsigned targetsFile : 1;
			unsigned targetsConst : 1;
			unsigned targetsEnum : 1;
			unsigned targetsEnumerant : 1;
			unsigned targetsStruct : 1;
			unsigned targetsField : 1;
			unsigned targetsUnion : 1;
			unsigned targetsGroup : 1;
			unsigned targetsInterface : 1;
			unsigned targetsMethod : 1;
			unsigned targetsParam : 1;
			unsigned targetsAnnotation : 1;
		} annotation;
	};
};

struct Node_Parameter {
	capn_text name;
};

struct Node_NestedNode {
	capn_text name;
	uint64_t id;
};
enum Field_which {
	Field_slot = 0,
	Field_group = 1
};
enum Field_ordinal_which {
	Field_ordinal_implicit = 0,
	Field_ordinal__explicit = 1
};

struct Field {
	capn_text name;
	uint16_t codeOrder;
	Annotation_list annotations;
	uint16_t discriminantValue;
	enum Field_which which;
	union {
		struct {
			uint32_t offset;
			Type_ptr type;
			Value_ptr defaultValue;
			unsigned hadExplicitDefault : 1;
		} slot;
		struct {
			uint64_t typeId;
		} group;
	};
	enum Field_ordinal_which ordinal_which;
	union {
		uint16_t _explicit;
	} ordinal;
};

struct Enumerant {
	capn_text name;
	uint16_t codeOrder;
	Annotation_list annotations;
};

struct Superclass {
	uint64_t id;
	Brand_ptr brand;
};

struct Method {
	capn_text name;
	uint16_t codeOrder;
	Node_Parameter_list implicitParameters;
	uint64_t paramStructType;
	Brand_ptr paramBrand;
	uint64_t resultStructType;
	Brand_ptr resultBrand;
	Annotation_list annotations;
};
enum Type_anyPointer_which {
	Type_anyPointer_unconstrained = 0,
	Type_anyPointer_parameter = 1,
	Type_anyPointer_implicitMethodParameter = 2
};
enum Type_which {
	Type__void = 0,
	Type__bool = 1,
	Type_int8 = 2,
	Type_int16 = 3,
	Type_int32 = 4,
	Type_int64 = 5,
	Type_uint8 = 6,
	Type_uint16 = 7,
	Type_uint32 = 8,
	Type_uint64 = 9,
	Type_float32 = 10,
	Type_float64 = 11,
	Type_text = 12,
	Type_data = 13,
	Type__list = 14,
	Type__enum = 15,
	Type__struct = 16,
	Type__interface = 17,
	Type_anyPointer = 18
};

struct Type {
	enum Type_which which;
	union {
		struct {
			Type_ptr elementType;
		} _list;
		struct {
			uint64_t typeId;
			Brand_ptr brand;
		} _enum;
		struct {
			uint64_t typeId;
			Brand_ptr brand;
		} _struct;
		struct {
			uint64_t typeId;
			Brand_ptr brand;
		} _interface;
		enum Type_anyPointer_which anyPointer_which;
		union {
			struct {
				uint64_t scopeId;
				uint16_t parameterIndex;
			} parameter;
			struct {
				uint16_t parameterIndex;
			} implicitMethodParameter;
		} anyPointer;
	};
};

struct Brand {
	Brand_Scope_list scopes;
};
enum Brand_Scope_which {
	Brand_Scope_bind = 0,
	Brand_Scope_inherit = 1
};

struct Brand_Scope {
	uint64_t scopeId;
	enum Brand_Scope_which which;
	union {
		Brand_Binding_list bind;
	};
};
enum Brand_Binding_which {
	Brand_Binding_unbound = 0,
	Brand_Binding_type = 1
};

struct Brand_Binding {
	enum Brand_Binding_which which;
	union {
		Type_ptr type;
	};
};
enum Value_which {
	Value__void = 0,
	Value__bool = 1,
	Value_int8 = 2,
	Value_int16 = 3,
	Value_int32 = 4,
	Value_int64 = 5,
	Value_uint8 = 6,
	Value_uint16 = 7,
	Value_uint32 = 8,
	Value_uint64 = 9,
	Value_float32 = 10,
	Value_float64 = 11,
	Value_text = 12,
	Value_data = 13,
	Value__list = 14,
	Value__enum = 15,
	Value__struct = 16,
	Value__interface = 17,
	Value_anyPointer = 18
};

struct Value {
	enum Value_which which;
	union {
		unsigned _bool : 1;
		int8_t int8;
		int16_t int16;
		int32_t int32;
		int64_t int64;
		uint8_t uint8;
		uint16_t uint16;
		uint32_t uint32;
		uint64_t uint64;
		float float32;
		double float64;
		capn_text text;
		capn_data data;
		capn_ptr _list;
		uint16_t _enum;
		capn_ptr _struct;
		capn_ptr anyPointer;
	};
};

struct Annotation {
	uint64_t id;
	Brand_ptr brand;
	Value_ptr value;
};

struct CodeGeneratorRequest {
	Node_list nodes;
	CodeGeneratorRequest_RequestedFile_list requestedFiles;
};

struct CodeGeneratorRequest_RequestedFile {
	uint64_t id;
	capn_text filename;
	CodeGeneratorRequest_RequestedFile_Import_list imports;
};

struct CodeGeneratorRequest_RequestedFile_Import {
	uint64_t id;
	capn_text name;
};

Node_ptr new_Node(struct capn_segment*);
Node_Parameter_ptr new_Node_Parameter(struct capn_segment*);
Node_NestedNode_ptr new_Node_NestedNode(struct capn_segment*);
Field_ptr new_Field(struct capn_segment*);
Enumerant_ptr new_Enumerant(struct capn_segment*);
Superclass_ptr new_Superclass(struct capn_segment*);
Method_ptr new_Method(struct capn_segment*);
Type_ptr new_Type(struct capn_segment*);
Brand_ptr new_Brand(struct capn_segment*);
Brand_Scope_ptr new_Brand_Scope(struct capn_segment*);
Brand_Binding_ptr new_Brand_Binding(struct capn_segment*);
Value_ptr new_Value(struct capn_segment*);
Annotation_ptr new_Annotation(struct capn_segment*);
CodeGeneratorRequest_ptr new_CodeGeneratorRequest(struct capn_segment*);
CodeGeneratorRequest_RequestedFile_ptr new_CodeGeneratorRequest_RequestedFile(struct capn_segment*);
CodeGeneratorRequest_RequestedFile_Import_ptr new_CodeGeneratorRequest_RequestedFile_Import(struct capn_segment*);

Node_list new_Node_list(struct capn_segment*, int len);
Node_Parameter_list new_Node_Parameter_list(struct capn_segment*, int len);
Node_NestedNode_list new_Node_NestedNode_list(struct capn_segment*, int len);
Field_list new_Field_list(struct capn_segment*, int len);
Enumerant_list new_Enumerant_list(struct capn_segment*, int len);
Superclass_list new_Superclass_list(struct capn_segment*, int len);
Method_list new_Method_list(struct capn_segment*, int len);
Type_list new_Type_list(struct capn_segment*, int len);
Brand_list new_Brand_list(struct capn_segment*, int len);
Brand_Scope_list new_Brand_Scope_list(struct capn_segment*, int len);
Brand_Binding_list new_Brand_Binding_list(struct capn_segment*, int len);
Value_list new_Value_list(struct capn_segment*, int len);
Annotation_list new_Annotation_list(struct capn_segment*, int len);
CodeGeneratorRequest_list new_CodeGeneratorRequest_list(struct capn_segment*, int len);
CodeGeneratorRequest_RequestedFile_list new_CodeGeneratorRequest_RequestedFile_list(struct capn_segment*, int len);
CodeGeneratorRequest_RequestedFile_Import_list new_CodeGeneratorRequest_RequestedFile_Import_list(struct capn_segment*, int len);

void read_Node(struct Node*, Node_ptr);
void read_Node_Parameter(struct Node_Parameter*, Node_Parameter_ptr);
void read_Node_NestedNode(struct Node_NestedNode*, Node_NestedNode_ptr);
void read_Field(struct Field*, Field_ptr);
void read_Enumerant(struct Enumerant*, Enumerant_ptr);
void read_Superclass(struct Superclass*, Superclass_ptr);
void read_Method(struct Method*, Method_ptr);
void read_Type(struct Type*, Type_ptr);
void read_Brand(struct Brand*, Brand_ptr);
void read_Brand_Scope(struct Brand_Scope*, Brand_Scope_ptr);
void read_Brand_Binding(struct Brand_Binding*, Brand_Binding_ptr);
void read_Value(struct Value*, Value_ptr);
void read_Annotation(struct Annotation*, Annotation_ptr);
void read_CodeGeneratorRequest(struct CodeGeneratorRequest*, CodeGeneratorRequest_ptr);
void read_CodeGeneratorRequest_RequestedFile(struct CodeGeneratorRequest_RequestedFile*, CodeGeneratorRequest_RequestedFile_ptr);
void read_CodeGeneratorRequest_RequestedFile_Import(struct CodeGeneratorRequest_RequestedFile_Import*, CodeGeneratorRequest_RequestedFile_Import_ptr);

void write_Node(const struct Node*, Node_ptr);
void write_Node_Parameter(const struct Node_Parameter*, Node_Parameter_ptr);
void write_Node_NestedNode(const struct Node_NestedNode*, Node_NestedNode_ptr);
void write_Field(const struct Field*, Field_ptr);
void write_Enumerant(const struct Enumerant*, Enumerant_ptr);
void write_Superclass(const struct Superclass*, Superclass_ptr);
void write_Method(const struct Method*, Method_ptr);
void write_Type(const struct Type*, Type_ptr);
void write_Brand(const struct Brand*, Brand_ptr);
void write_Brand_Scope(const struct Brand_Scope*, Brand_Scope_ptr);
void write_Brand_Binding(const struct Brand_Binding*, Brand_Binding_ptr);
void write_Value(const struct Value*, Value_ptr);
void write_Annotation(const struct Annotation*, Annotation_ptr);
void write_CodeGeneratorRequest(const struct CodeGeneratorRequest*, CodeGeneratorRequest_ptr);
void write_CodeGeneratorRequest_RequestedFile(const struct CodeGeneratorRequest_RequestedFile*, CodeGeneratorRequest_RequestedFile_ptr);
void write_CodeGeneratorRequest_RequestedFile_Import(const struct CodeGeneratorRequest_RequestedFile_Import*, CodeGeneratorRequest_RequestedFile_Import_ptr);

void get_Node(struct Node*, Node_list, int i);
void get_Node_Parameter(struct Node_Parameter*, Node_Parameter_list, int i);
void get_Node_NestedNode(struct Node_NestedNode*, Node_NestedNode_list, int i);
void get_Field(struct Field*, Field_list, int i);
void get_Enumerant(struct Enumerant*, Enumerant_list, int i);
void get_Superclass(struct Superclass*, Superclass_list, int i);
void get_Method(struct Method*, Method_list, int i);
void get_Type(struct Type*, Type_list, int i);
void get_Brand(struct Brand*, Brand_list, int i);
void get_Brand_Scope(struct Brand_Scope*, Brand_Scope_list, int i);
void get_Brand_Binding(struct Brand_Binding*, Brand_Binding_list, int i);
void get_Value(struct Value*, Value_list, int i);
void get_Annotation(struct Annotation*, Annotation_list, int i);
void get_CodeGeneratorRequest(struct CodeGeneratorRequest*, CodeGeneratorRequest_list, int i);
void get_CodeGeneratorRequest_RequestedFile(struct CodeGeneratorRequest_RequestedFile*, CodeGeneratorRequest_RequestedFile_list, int i);
void get_CodeGeneratorRequest_RequestedFile_Import(struct CodeGeneratorRequest_RequestedFile_Import*, CodeGeneratorRequest_RequestedFile_Import_list, int i);

void set_Node(const struct Node*, Node_list, int i);
void set_Node_Parameter(const struct Node_Parameter*, Node_Parameter_list, int i);
void set_Node_NestedNode(const struct Node_NestedNode*, Node_NestedNode_list, int i);
void set_Field(const struct Field*, Field_list, int i);
void set_Enumerant(const struct Enumerant*, Enumerant_list, int i);
void set_Superclass(const struct Superclass*, Superclass_list, int i);
void set_Method(const struct Method*, Method_list, int i);
void set_Type(const struct Type*, Type_list, int i);
void set_Brand(const struct Brand*, Brand_list, int i);
void set_Brand_Scope(const struct Brand_Scope*, Brand_Scope_list, int i);
void set_Brand_Binding(const struct Brand_Binding*, Brand_Binding_list, int i);
void set_Value(const struct Value*, Value_list, int i);
void set_Annotation(const struct Annotation*, Annotation_list, int i);
void set_CodeGeneratorRequest(const struct CodeGeneratorRequest*, CodeGeneratorRequest_list, int i);
void set_CodeGeneratorRequest_RequestedFile(const struct CodeGeneratorRequest_RequestedFile*, CodeGeneratorRequest_RequestedFile_list, int i);
void set_CodeGeneratorRequest_RequestedFile_Import(const struct CodeGeneratorRequest_RequestedFile_Import*, CodeGeneratorRequest_RequestedFile_Import_list, int i);

#ifdef __cplusplus
}
#endif
#endif

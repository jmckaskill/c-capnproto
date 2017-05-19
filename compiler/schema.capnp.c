#include "schema.capnp.h"
/* AUTO GENERATED - DO NOT EDIT */
#ifdef __GNUC__
# define capnp_unused __attribute__((unused))
# define capnp_use(x) (void) x;
#else
# define capnp_unused
# define capnp_use(x)
#endif

static const capn_text capn_val0 = {0,"",0};
uint16_t Field_noDiscriminant = 65535;

Node_ptr new_Node(struct capn_segment *s) {
	Node_ptr p;
	p.p = capn_new_struct(s, 40, 6);
	return p;
}
Node_list new_Node_list(struct capn_segment *s, int len) {
	Node_list p;
	p.p = capn_new_list(s, len, 40, 6);
	return p;
}
void read_Node(struct Node *s capnp_unused, Node_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->id = capn_read64(p.p, 0);
	s->displayName = capn_get_text(p.p, 0, capn_val0);
	s->displayNamePrefixLength = capn_read32(p.p, 8);
	s->scopeId = capn_read64(p.p, 16);
	s->parameters.p = capn_getp(p.p, 5, 0);
	s->isGeneric = (capn_read8(p.p, 36) & 1) != 0;
	s->nestedNodes.p = capn_getp(p.p, 1, 0);
	s->annotations.p = capn_getp(p.p, 2, 0);
	s->which = (enum Node_which)(int) capn_read16(p.p, 12);
	switch (s->which) {
	case Node__struct:
		s->_struct.dataWordCount = capn_read16(p.p, 14);
		s->_struct.pointerCount = capn_read16(p.p, 24);
		s->_struct.preferredListEncoding = (enum ElementSize)(int) capn_read16(p.p, 26);
		s->_struct.isGroup = (capn_read8(p.p, 28) & 1) != 0;
		s->_struct.discriminantCount = capn_read16(p.p, 30);
		s->_struct.discriminantOffset = capn_read32(p.p, 32);
		s->_struct.fields.p = capn_getp(p.p, 3, 0);
		break;
	case Node__enum:
		s->_enum.enumerants.p = capn_getp(p.p, 3, 0);
		break;
	case Node__interface:
		s->_interface.methods.p = capn_getp(p.p, 3, 0);
		s->_interface.superclasses.p = capn_getp(p.p, 4, 0);
		break;
	case Node__const:
		s->_const.type.p = capn_getp(p.p, 3, 0);
		s->_const.value.p = capn_getp(p.p, 4, 0);
		break;
	case Node_annotation:
		s->annotation.type.p = capn_getp(p.p, 3, 0);
		s->annotation.targetsFile = (capn_read8(p.p, 14) & 1) != 0;
		s->annotation.targetsConst = (capn_read8(p.p, 14) & 2) != 0;
		s->annotation.targetsEnum = (capn_read8(p.p, 14) & 4) != 0;
		s->annotation.targetsEnumerant = (capn_read8(p.p, 14) & 8) != 0;
		s->annotation.targetsStruct = (capn_read8(p.p, 14) & 16) != 0;
		s->annotation.targetsField = (capn_read8(p.p, 14) & 32) != 0;
		s->annotation.targetsUnion = (capn_read8(p.p, 14) & 64) != 0;
		s->annotation.targetsGroup = (capn_read8(p.p, 14) & 128) != 0;
		s->annotation.targetsInterface = (capn_read8(p.p, 15) & 1) != 0;
		s->annotation.targetsMethod = (capn_read8(p.p, 15) & 2) != 0;
		s->annotation.targetsParam = (capn_read8(p.p, 15) & 4) != 0;
		s->annotation.targetsAnnotation = (capn_read8(p.p, 15) & 8) != 0;
		break;
	default:
		break;
	}
}
void write_Node(const struct Node *s capnp_unused, Node_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, s->id);
	capn_set_text(p.p, 0, s->displayName);
	capn_write32(p.p, 8, s->displayNamePrefixLength);
	capn_write64(p.p, 16, s->scopeId);
	capn_setp(p.p, 5, s->parameters.p);
	capn_write1(p.p, 288, s->isGeneric != 0);
	capn_setp(p.p, 1, s->nestedNodes.p);
	capn_setp(p.p, 2, s->annotations.p);
	capn_write16(p.p, 12, s->which);
	switch (s->which) {
	case Node__struct:
		capn_write16(p.p, 14, s->_struct.dataWordCount);
		capn_write16(p.p, 24, s->_struct.pointerCount);
		capn_write16(p.p, 26, (uint16_t) (s->_struct.preferredListEncoding));
		capn_write1(p.p, 224, s->_struct.isGroup != 0);
		capn_write16(p.p, 30, s->_struct.discriminantCount);
		capn_write32(p.p, 32, s->_struct.discriminantOffset);
		capn_setp(p.p, 3, s->_struct.fields.p);
		break;
	case Node__enum:
		capn_setp(p.p, 3, s->_enum.enumerants.p);
		break;
	case Node__interface:
		capn_setp(p.p, 3, s->_interface.methods.p);
		capn_setp(p.p, 4, s->_interface.superclasses.p);
		break;
	case Node__const:
		capn_setp(p.p, 3, s->_const.type.p);
		capn_setp(p.p, 4, s->_const.value.p);
		break;
	case Node_annotation:
		capn_setp(p.p, 3, s->annotation.type.p);
		capn_write1(p.p, 112, s->annotation.targetsFile != 0);
		capn_write1(p.p, 113, s->annotation.targetsConst != 0);
		capn_write1(p.p, 114, s->annotation.targetsEnum != 0);
		capn_write1(p.p, 115, s->annotation.targetsEnumerant != 0);
		capn_write1(p.p, 116, s->annotation.targetsStruct != 0);
		capn_write1(p.p, 117, s->annotation.targetsField != 0);
		capn_write1(p.p, 118, s->annotation.targetsUnion != 0);
		capn_write1(p.p, 119, s->annotation.targetsGroup != 0);
		capn_write1(p.p, 120, s->annotation.targetsInterface != 0);
		capn_write1(p.p, 121, s->annotation.targetsMethod != 0);
		capn_write1(p.p, 122, s->annotation.targetsParam != 0);
		capn_write1(p.p, 123, s->annotation.targetsAnnotation != 0);
		break;
	default:
		break;
	}
}
void get_Node(struct Node *s, Node_list l, int i) {
	Node_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Node(s, p);
}
void set_Node(const struct Node *s, Node_list l, int i) {
	Node_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Node(s, p);
}

uint64_t Node_get_id(Node_ptr p)
{
	uint64_t id;
	id = capn_read64(p.p, 0);
	return id;
}

capn_text Node_get_displayName(Node_ptr p)
{
	capn_text displayName;
	displayName = capn_get_text(p.p, 0, capn_val0);
	return displayName;
}

uint32_t Node_get_displayNamePrefixLength(Node_ptr p)
{
	uint32_t displayNamePrefixLength;
	displayNamePrefixLength = capn_read32(p.p, 8);
	return displayNamePrefixLength;
}

uint64_t Node_get_scopeId(Node_ptr p)
{
	uint64_t scopeId;
	scopeId = capn_read64(p.p, 16);
	return scopeId;
}

Node_Parameter_list Node_get_parameters(Node_ptr p)
{
	Node_Parameter_list parameters;
	parameters.p = capn_getp(p.p, 5, 0);
	return parameters;
}

unsigned Node_get_isGeneric(Node_ptr p)
{
	unsigned isGeneric;
	isGeneric = (capn_read8(p.p, 36) & 1) != 0;
	return isGeneric;
}

Node_NestedNode_list Node_get_nestedNodes(Node_ptr p)
{
	Node_NestedNode_list nestedNodes;
	nestedNodes.p = capn_getp(p.p, 1, 0);
	return nestedNodes;
}

Annotation_list Node_get_annotations(Node_ptr p)
{
	Annotation_list annotations;
	annotations.p = capn_getp(p.p, 2, 0);
	return annotations;
}

void Node_set_id(Node_ptr p, uint64_t id)
{
	capn_write64(p.p, 0, id);
}

void Node_set_displayName(Node_ptr p, capn_text displayName)
{
	capn_set_text(p.p, 0, displayName);
}

void Node_set_displayNamePrefixLength(Node_ptr p, uint32_t displayNamePrefixLength)
{
	capn_write32(p.p, 8, displayNamePrefixLength);
}

void Node_set_scopeId(Node_ptr p, uint64_t scopeId)
{
	capn_write64(p.p, 16, scopeId);
}

void Node_set_parameters(Node_ptr p, Node_Parameter_list parameters)
{
	capn_setp(p.p, 5, parameters.p);
}

void Node_set_isGeneric(Node_ptr p, unsigned isGeneric)
{
	capn_write1(p.p, 288, isGeneric != 0);
}

void Node_set_nestedNodes(Node_ptr p, Node_NestedNode_list nestedNodes)
{
	capn_setp(p.p, 1, nestedNodes.p);
}

void Node_set_annotations(Node_ptr p, Annotation_list annotations)
{
	capn_setp(p.p, 2, annotations.p);
}

Node_Parameter_ptr new_Node_Parameter(struct capn_segment *s) {
	Node_Parameter_ptr p;
	p.p = capn_new_struct(s, 0, 1);
	return p;
}
Node_Parameter_list new_Node_Parameter_list(struct capn_segment *s, int len) {
	Node_Parameter_list p;
	p.p = capn_new_list(s, len, 0, 1);
	return p;
}
void read_Node_Parameter(struct Node_Parameter *s capnp_unused, Node_Parameter_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->name = capn_get_text(p.p, 0, capn_val0);
}
void write_Node_Parameter(const struct Node_Parameter *s capnp_unused, Node_Parameter_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->name);
}
void get_Node_Parameter(struct Node_Parameter *s, Node_Parameter_list l, int i) {
	Node_Parameter_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Node_Parameter(s, p);
}
void set_Node_Parameter(const struct Node_Parameter *s, Node_Parameter_list l, int i) {
	Node_Parameter_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Node_Parameter(s, p);
}

capn_text Node_Parameter_get_name(Node_Parameter_ptr p)
{
	capn_text name;
	name = capn_get_text(p.p, 0, capn_val0);
	return name;
}

void Node_Parameter_set_name(Node_Parameter_ptr p, capn_text name)
{
	capn_set_text(p.p, 0, name);
}

Node_NestedNode_ptr new_Node_NestedNode(struct capn_segment *s) {
	Node_NestedNode_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
Node_NestedNode_list new_Node_NestedNode_list(struct capn_segment *s, int len) {
	Node_NestedNode_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_Node_NestedNode(struct Node_NestedNode *s capnp_unused, Node_NestedNode_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->name = capn_get_text(p.p, 0, capn_val0);
	s->id = capn_read64(p.p, 0);
}
void write_Node_NestedNode(const struct Node_NestedNode *s capnp_unused, Node_NestedNode_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->name);
	capn_write64(p.p, 0, s->id);
}
void get_Node_NestedNode(struct Node_NestedNode *s, Node_NestedNode_list l, int i) {
	Node_NestedNode_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Node_NestedNode(s, p);
}
void set_Node_NestedNode(const struct Node_NestedNode *s, Node_NestedNode_list l, int i) {
	Node_NestedNode_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Node_NestedNode(s, p);
}

capn_text Node_NestedNode_get_name(Node_NestedNode_ptr p)
{
	capn_text name;
	name = capn_get_text(p.p, 0, capn_val0);
	return name;
}

uint64_t Node_NestedNode_get_id(Node_NestedNode_ptr p)
{
	uint64_t id;
	id = capn_read64(p.p, 0);
	return id;
}

void Node_NestedNode_set_name(Node_NestedNode_ptr p, capn_text name)
{
	capn_set_text(p.p, 0, name);
}

void Node_NestedNode_set_id(Node_NestedNode_ptr p, uint64_t id)
{
	capn_write64(p.p, 0, id);
}

Field_ptr new_Field(struct capn_segment *s) {
	Field_ptr p;
	p.p = capn_new_struct(s, 24, 4);
	return p;
}
Field_list new_Field_list(struct capn_segment *s, int len) {
	Field_list p;
	p.p = capn_new_list(s, len, 24, 4);
	return p;
}
void read_Field(struct Field *s capnp_unused, Field_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->name = capn_get_text(p.p, 0, capn_val0);
	s->codeOrder = capn_read16(p.p, 0);
	s->annotations.p = capn_getp(p.p, 1, 0);
	s->discriminantValue = capn_read16(p.p, 2) ^ 65535u;
	s->which = (enum Field_which)(int) capn_read16(p.p, 8);
	switch (s->which) {
	case Field_slot:
		s->slot.offset = capn_read32(p.p, 4);
		s->slot.type.p = capn_getp(p.p, 2, 0);
		s->slot.defaultValue.p = capn_getp(p.p, 3, 0);
		s->slot.hadExplicitDefault = (capn_read8(p.p, 16) & 1) != 0;
		break;
	case Field_group:
		s->group.typeId = capn_read64(p.p, 16);
		break;
	default:
		break;
	}
	s->ordinal_which = (enum Field_ordinal_which)(int) capn_read16(p.p, 10);
	switch (s->ordinal_which) {
	case Field_ordinal__explicit:
		s->ordinal._explicit = capn_read16(p.p, 12);
		break;
	default:
		break;
	}
}
void write_Field(const struct Field *s capnp_unused, Field_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->name);
	capn_write16(p.p, 0, s->codeOrder);
	capn_setp(p.p, 1, s->annotations.p);
	capn_write16(p.p, 2, s->discriminantValue ^ 65535u);
	capn_write16(p.p, 8, s->which);
	switch (s->which) {
	case Field_slot:
		capn_write32(p.p, 4, s->slot.offset);
		capn_setp(p.p, 2, s->slot.type.p);
		capn_setp(p.p, 3, s->slot.defaultValue.p);
		capn_write1(p.p, 128, s->slot.hadExplicitDefault != 0);
		break;
	case Field_group:
		capn_write64(p.p, 16, s->group.typeId);
		break;
	default:
		break;
	}
	capn_write16(p.p, 10, s->ordinal_which);
	switch (s->ordinal_which) {
	case Field_ordinal__explicit:
		capn_write16(p.p, 12, s->ordinal._explicit);
		break;
	default:
		break;
	}
}
void get_Field(struct Field *s, Field_list l, int i) {
	Field_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Field(s, p);
}
void set_Field(const struct Field *s, Field_list l, int i) {
	Field_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Field(s, p);
}

capn_text Field_get_name(Field_ptr p)
{
	capn_text name;
	name = capn_get_text(p.p, 0, capn_val0);
	return name;
}

uint16_t Field_get_codeOrder(Field_ptr p)
{
	uint16_t codeOrder;
	codeOrder = capn_read16(p.p, 0);
	return codeOrder;
}

Annotation_list Field_get_annotations(Field_ptr p)
{
	Annotation_list annotations;
	annotations.p = capn_getp(p.p, 1, 0);
	return annotations;
}

uint16_t Field_get_discriminantValue(Field_ptr p)
{
	uint16_t discriminantValue;
	discriminantValue = capn_read16(p.p, 2) ^ 65535u;
	return discriminantValue;
}

void Field_set_name(Field_ptr p, capn_text name)
{
	capn_set_text(p.p, 0, name);
}

void Field_set_codeOrder(Field_ptr p, uint16_t codeOrder)
{
	capn_write16(p.p, 0, codeOrder);
}

void Field_set_annotations(Field_ptr p, Annotation_list annotations)
{
	capn_setp(p.p, 1, annotations.p);
}

void Field_set_discriminantValue(Field_ptr p, uint16_t discriminantValue)
{
	capn_write16(p.p, 2, discriminantValue ^ 65535u);
}

Enumerant_ptr new_Enumerant(struct capn_segment *s) {
	Enumerant_ptr p;
	p.p = capn_new_struct(s, 8, 2);
	return p;
}
Enumerant_list new_Enumerant_list(struct capn_segment *s, int len) {
	Enumerant_list p;
	p.p = capn_new_list(s, len, 8, 2);
	return p;
}
void read_Enumerant(struct Enumerant *s capnp_unused, Enumerant_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->name = capn_get_text(p.p, 0, capn_val0);
	s->codeOrder = capn_read16(p.p, 0);
	s->annotations.p = capn_getp(p.p, 1, 0);
}
void write_Enumerant(const struct Enumerant *s capnp_unused, Enumerant_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->name);
	capn_write16(p.p, 0, s->codeOrder);
	capn_setp(p.p, 1, s->annotations.p);
}
void get_Enumerant(struct Enumerant *s, Enumerant_list l, int i) {
	Enumerant_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Enumerant(s, p);
}
void set_Enumerant(const struct Enumerant *s, Enumerant_list l, int i) {
	Enumerant_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Enumerant(s, p);
}

capn_text Enumerant_get_name(Enumerant_ptr p)
{
	capn_text name;
	name = capn_get_text(p.p, 0, capn_val0);
	return name;
}

uint16_t Enumerant_get_codeOrder(Enumerant_ptr p)
{
	uint16_t codeOrder;
	codeOrder = capn_read16(p.p, 0);
	return codeOrder;
}

Annotation_list Enumerant_get_annotations(Enumerant_ptr p)
{
	Annotation_list annotations;
	annotations.p = capn_getp(p.p, 1, 0);
	return annotations;
}

void Enumerant_set_name(Enumerant_ptr p, capn_text name)
{
	capn_set_text(p.p, 0, name);
}

void Enumerant_set_codeOrder(Enumerant_ptr p, uint16_t codeOrder)
{
	capn_write16(p.p, 0, codeOrder);
}

void Enumerant_set_annotations(Enumerant_ptr p, Annotation_list annotations)
{
	capn_setp(p.p, 1, annotations.p);
}

Superclass_ptr new_Superclass(struct capn_segment *s) {
	Superclass_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
Superclass_list new_Superclass_list(struct capn_segment *s, int len) {
	Superclass_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_Superclass(struct Superclass *s capnp_unused, Superclass_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->id = capn_read64(p.p, 0);
	s->brand.p = capn_getp(p.p, 0, 0);
}
void write_Superclass(const struct Superclass *s capnp_unused, Superclass_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, s->id);
	capn_setp(p.p, 0, s->brand.p);
}
void get_Superclass(struct Superclass *s, Superclass_list l, int i) {
	Superclass_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Superclass(s, p);
}
void set_Superclass(const struct Superclass *s, Superclass_list l, int i) {
	Superclass_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Superclass(s, p);
}

uint64_t Superclass_get_id(Superclass_ptr p)
{
	uint64_t id;
	id = capn_read64(p.p, 0);
	return id;
}

Brand_ptr Superclass_get_brand(Superclass_ptr p)
{
	Brand_ptr brand;
	brand.p = capn_getp(p.p, 0, 0);
	return brand;
}

void Superclass_set_id(Superclass_ptr p, uint64_t id)
{
	capn_write64(p.p, 0, id);
}

void Superclass_set_brand(Superclass_ptr p, Brand_ptr brand)
{
	capn_setp(p.p, 0, brand.p);
}

Method_ptr new_Method(struct capn_segment *s) {
	Method_ptr p;
	p.p = capn_new_struct(s, 24, 5);
	return p;
}
Method_list new_Method_list(struct capn_segment *s, int len) {
	Method_list p;
	p.p = capn_new_list(s, len, 24, 5);
	return p;
}
void read_Method(struct Method *s capnp_unused, Method_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->name = capn_get_text(p.p, 0, capn_val0);
	s->codeOrder = capn_read16(p.p, 0);
	s->implicitParameters.p = capn_getp(p.p, 4, 0);
	s->paramStructType = capn_read64(p.p, 8);
	s->paramBrand.p = capn_getp(p.p, 2, 0);
	s->resultStructType = capn_read64(p.p, 16);
	s->resultBrand.p = capn_getp(p.p, 3, 0);
	s->annotations.p = capn_getp(p.p, 1, 0);
}
void write_Method(const struct Method *s capnp_unused, Method_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_set_text(p.p, 0, s->name);
	capn_write16(p.p, 0, s->codeOrder);
	capn_setp(p.p, 4, s->implicitParameters.p);
	capn_write64(p.p, 8, s->paramStructType);
	capn_setp(p.p, 2, s->paramBrand.p);
	capn_write64(p.p, 16, s->resultStructType);
	capn_setp(p.p, 3, s->resultBrand.p);
	capn_setp(p.p, 1, s->annotations.p);
}
void get_Method(struct Method *s, Method_list l, int i) {
	Method_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Method(s, p);
}
void set_Method(const struct Method *s, Method_list l, int i) {
	Method_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Method(s, p);
}

capn_text Method_get_name(Method_ptr p)
{
	capn_text name;
	name = capn_get_text(p.p, 0, capn_val0);
	return name;
}

uint16_t Method_get_codeOrder(Method_ptr p)
{
	uint16_t codeOrder;
	codeOrder = capn_read16(p.p, 0);
	return codeOrder;
}

Node_Parameter_list Method_get_implicitParameters(Method_ptr p)
{
	Node_Parameter_list implicitParameters;
	implicitParameters.p = capn_getp(p.p, 4, 0);
	return implicitParameters;
}

uint64_t Method_get_paramStructType(Method_ptr p)
{
	uint64_t paramStructType;
	paramStructType = capn_read64(p.p, 8);
	return paramStructType;
}

Brand_ptr Method_get_paramBrand(Method_ptr p)
{
	Brand_ptr paramBrand;
	paramBrand.p = capn_getp(p.p, 2, 0);
	return paramBrand;
}

uint64_t Method_get_resultStructType(Method_ptr p)
{
	uint64_t resultStructType;
	resultStructType = capn_read64(p.p, 16);
	return resultStructType;
}

Brand_ptr Method_get_resultBrand(Method_ptr p)
{
	Brand_ptr resultBrand;
	resultBrand.p = capn_getp(p.p, 3, 0);
	return resultBrand;
}

Annotation_list Method_get_annotations(Method_ptr p)
{
	Annotation_list annotations;
	annotations.p = capn_getp(p.p, 1, 0);
	return annotations;
}

void Method_set_name(Method_ptr p, capn_text name)
{
	capn_set_text(p.p, 0, name);
}

void Method_set_codeOrder(Method_ptr p, uint16_t codeOrder)
{
	capn_write16(p.p, 0, codeOrder);
}

void Method_set_implicitParameters(Method_ptr p, Node_Parameter_list implicitParameters)
{
	capn_setp(p.p, 4, implicitParameters.p);
}

void Method_set_paramStructType(Method_ptr p, uint64_t paramStructType)
{
	capn_write64(p.p, 8, paramStructType);
}

void Method_set_paramBrand(Method_ptr p, Brand_ptr paramBrand)
{
	capn_setp(p.p, 2, paramBrand.p);
}

void Method_set_resultStructType(Method_ptr p, uint64_t resultStructType)
{
	capn_write64(p.p, 16, resultStructType);
}

void Method_set_resultBrand(Method_ptr p, Brand_ptr resultBrand)
{
	capn_setp(p.p, 3, resultBrand.p);
}

void Method_set_annotations(Method_ptr p, Annotation_list annotations)
{
	capn_setp(p.p, 1, annotations.p);
}

Type_ptr new_Type(struct capn_segment *s) {
	Type_ptr p;
	p.p = capn_new_struct(s, 24, 1);
	return p;
}
Type_list new_Type_list(struct capn_segment *s, int len) {
	Type_list p;
	p.p = capn_new_list(s, len, 24, 1);
	return p;
}
void read_Type(struct Type *s capnp_unused, Type_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->which = (enum Type_which)(int) capn_read16(p.p, 0);
	switch (s->which) {
	case Type__list:
		s->_list.elementType.p = capn_getp(p.p, 0, 0);
		break;
	case Type__enum:
		s->_enum.typeId = capn_read64(p.p, 8);
		s->_enum.brand.p = capn_getp(p.p, 0, 0);
		break;
	case Type__struct:
		s->_struct.typeId = capn_read64(p.p, 8);
		s->_struct.brand.p = capn_getp(p.p, 0, 0);
		break;
	case Type__interface:
		s->_interface.typeId = capn_read64(p.p, 8);
		s->_interface.brand.p = capn_getp(p.p, 0, 0);
		break;
	case Type_anyPointer:
		s->anyPointer_which = (enum Type_anyPointer_which)(int) capn_read16(p.p, 8);
		switch (s->anyPointer_which) {
		case Type_anyPointer_parameter:
			s->anyPointer.parameter.scopeId = capn_read64(p.p, 16);
			s->anyPointer.parameter.parameterIndex = capn_read16(p.p, 10);
			break;
		case Type_anyPointer_implicitMethodParameter:
			s->anyPointer.implicitMethodParameter.parameterIndex = capn_read16(p.p, 10);
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
void write_Type(const struct Type *s capnp_unused, Type_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 0, s->which);
	switch (s->which) {
	case Type__list:
		capn_setp(p.p, 0, s->_list.elementType.p);
		break;
	case Type__enum:
		capn_write64(p.p, 8, s->_enum.typeId);
		capn_setp(p.p, 0, s->_enum.brand.p);
		break;
	case Type__struct:
		capn_write64(p.p, 8, s->_struct.typeId);
		capn_setp(p.p, 0, s->_struct.brand.p);
		break;
	case Type__interface:
		capn_write64(p.p, 8, s->_interface.typeId);
		capn_setp(p.p, 0, s->_interface.brand.p);
		break;
	case Type_anyPointer:
		capn_write16(p.p, 8, s->anyPointer_which);
		switch (s->anyPointer_which) {
		case Type_anyPointer_parameter:
			capn_write64(p.p, 16, s->anyPointer.parameter.scopeId);
			capn_write16(p.p, 10, s->anyPointer.parameter.parameterIndex);
			break;
		case Type_anyPointer_implicitMethodParameter:
			capn_write16(p.p, 10, s->anyPointer.implicitMethodParameter.parameterIndex);
			break;
		default:
			break;
		}
		break;
	default:
		break;
	}
}
void get_Type(struct Type *s, Type_list l, int i) {
	Type_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Type(s, p);
}
void set_Type(const struct Type *s, Type_list l, int i) {
	Type_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Type(s, p);
}

Brand_ptr new_Brand(struct capn_segment *s) {
	Brand_ptr p;
	p.p = capn_new_struct(s, 0, 1);
	return p;
}
Brand_list new_Brand_list(struct capn_segment *s, int len) {
	Brand_list p;
	p.p = capn_new_list(s, len, 0, 1);
	return p;
}
void read_Brand(struct Brand *s capnp_unused, Brand_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->scopes.p = capn_getp(p.p, 0, 0);
}
void write_Brand(const struct Brand *s capnp_unused, Brand_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_setp(p.p, 0, s->scopes.p);
}
void get_Brand(struct Brand *s, Brand_list l, int i) {
	Brand_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Brand(s, p);
}
void set_Brand(const struct Brand *s, Brand_list l, int i) {
	Brand_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Brand(s, p);
}

Brand_Scope_list Brand_get_scopes(Brand_ptr p)
{
	Brand_Scope_list scopes;
	scopes.p = capn_getp(p.p, 0, 0);
	return scopes;
}

void Brand_set_scopes(Brand_ptr p, Brand_Scope_list scopes)
{
	capn_setp(p.p, 0, scopes.p);
}

Brand_Scope_ptr new_Brand_Scope(struct capn_segment *s) {
	Brand_Scope_ptr p;
	p.p = capn_new_struct(s, 16, 1);
	return p;
}
Brand_Scope_list new_Brand_Scope_list(struct capn_segment *s, int len) {
	Brand_Scope_list p;
	p.p = capn_new_list(s, len, 16, 1);
	return p;
}
void read_Brand_Scope(struct Brand_Scope *s capnp_unused, Brand_Scope_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->scopeId = capn_read64(p.p, 0);
	s->which = (enum Brand_Scope_which)(int) capn_read16(p.p, 8);
	switch (s->which) {
	case Brand_Scope_bind:
		s->bind.p = capn_getp(p.p, 0, 0);
		break;
	default:
		break;
	}
}
void write_Brand_Scope(const struct Brand_Scope *s capnp_unused, Brand_Scope_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, s->scopeId);
	capn_write16(p.p, 8, s->which);
	switch (s->which) {
	case Brand_Scope_bind:
		capn_setp(p.p, 0, s->bind.p);
		break;
	default:
		break;
	}
}
void get_Brand_Scope(struct Brand_Scope *s, Brand_Scope_list l, int i) {
	Brand_Scope_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Brand_Scope(s, p);
}
void set_Brand_Scope(const struct Brand_Scope *s, Brand_Scope_list l, int i) {
	Brand_Scope_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Brand_Scope(s, p);
}

uint64_t Brand_Scope_get_scopeId(Brand_Scope_ptr p)
{
	uint64_t scopeId;
	scopeId = capn_read64(p.p, 0);
	return scopeId;
}

void Brand_Scope_set_scopeId(Brand_Scope_ptr p, uint64_t scopeId)
{
	capn_write64(p.p, 0, scopeId);
}

Brand_Binding_ptr new_Brand_Binding(struct capn_segment *s) {
	Brand_Binding_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
Brand_Binding_list new_Brand_Binding_list(struct capn_segment *s, int len) {
	Brand_Binding_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_Brand_Binding(struct Brand_Binding *s capnp_unused, Brand_Binding_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->which = (enum Brand_Binding_which)(int) capn_read16(p.p, 0);
	switch (s->which) {
	case Brand_Binding_type:
		s->type.p = capn_getp(p.p, 0, 0);
		break;
	default:
		break;
	}
}
void write_Brand_Binding(const struct Brand_Binding *s capnp_unused, Brand_Binding_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 0, s->which);
	switch (s->which) {
	case Brand_Binding_type:
		capn_setp(p.p, 0, s->type.p);
		break;
	default:
		break;
	}
}
void get_Brand_Binding(struct Brand_Binding *s, Brand_Binding_list l, int i) {
	Brand_Binding_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Brand_Binding(s, p);
}
void set_Brand_Binding(const struct Brand_Binding *s, Brand_Binding_list l, int i) {
	Brand_Binding_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Brand_Binding(s, p);
}

Value_ptr new_Value(struct capn_segment *s) {
	Value_ptr p;
	p.p = capn_new_struct(s, 16, 1);
	return p;
}
Value_list new_Value_list(struct capn_segment *s, int len) {
	Value_list p;
	p.p = capn_new_list(s, len, 16, 1);
	return p;
}
void read_Value(struct Value *s capnp_unused, Value_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->which = (enum Value_which)(int) capn_read16(p.p, 0);
	switch (s->which) {
	case Value__bool:
		s->_bool = (capn_read8(p.p, 2) & 1) != 0;
		break;
	case Value_int8:
	case Value_uint8:
		s->uint8 = capn_read8(p.p, 2);
		break;
	case Value_int16:
	case Value_uint16:
	case Value__enum:
		s->_enum = capn_read16(p.p, 2);
		break;
	case Value_int32:
	case Value_uint32:
	case Value_float32:
		s->float32 = capn_to_f32(capn_read32(p.p, 4));
		break;
	case Value_int64:
	case Value_uint64:
	case Value_float64:
		s->float64 = capn_to_f64(capn_read64(p.p, 8));
		break;
	case Value_text:
		s->text = capn_get_text(p.p, 0, capn_val0);
		break;
	case Value_data:
		s->data = capn_get_data(p.p, 0);
		break;
	case Value__list:
	case Value__struct:
	case Value_anyPointer:
		s->anyPointer = capn_getp(p.p, 0, 0);
		break;
	default:
		break;
	}
}
void write_Value(const struct Value *s capnp_unused, Value_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write16(p.p, 0, s->which);
	switch (s->which) {
	case Value__bool:
		capn_write1(p.p, 16, s->_bool != 0);
		break;
	case Value_int8:
	case Value_uint8:
		capn_write8(p.p, 2, s->uint8);
		break;
	case Value_int16:
	case Value_uint16:
	case Value__enum:
		capn_write16(p.p, 2, s->_enum);
		break;
	case Value_int32:
	case Value_uint32:
	case Value_float32:
		capn_write32(p.p, 4, capn_from_f32(s->float32));
		break;
	case Value_int64:
	case Value_uint64:
	case Value_float64:
		capn_write64(p.p, 8, capn_from_f64(s->float64));
		break;
	case Value_text:
		capn_set_text(p.p, 0, s->text);
		break;
	case Value_data:
		capn_setp(p.p, 0, s->data.p);
		break;
	case Value__list:
	case Value__struct:
	case Value_anyPointer:
		capn_setp(p.p, 0, s->anyPointer);
		break;
	default:
		break;
	}
}
void get_Value(struct Value *s, Value_list l, int i) {
	Value_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Value(s, p);
}
void set_Value(const struct Value *s, Value_list l, int i) {
	Value_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Value(s, p);
}

Annotation_ptr new_Annotation(struct capn_segment *s) {
	Annotation_ptr p;
	p.p = capn_new_struct(s, 8, 2);
	return p;
}
Annotation_list new_Annotation_list(struct capn_segment *s, int len) {
	Annotation_list p;
	p.p = capn_new_list(s, len, 8, 2);
	return p;
}
void read_Annotation(struct Annotation *s capnp_unused, Annotation_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->id = capn_read64(p.p, 0);
	s->brand.p = capn_getp(p.p, 1, 0);
	s->value.p = capn_getp(p.p, 0, 0);
}
void write_Annotation(const struct Annotation *s capnp_unused, Annotation_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, s->id);
	capn_setp(p.p, 1, s->brand.p);
	capn_setp(p.p, 0, s->value.p);
}
void get_Annotation(struct Annotation *s, Annotation_list l, int i) {
	Annotation_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Annotation(s, p);
}
void set_Annotation(const struct Annotation *s, Annotation_list l, int i) {
	Annotation_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Annotation(s, p);
}

uint64_t Annotation_get_id(Annotation_ptr p)
{
	uint64_t id;
	id = capn_read64(p.p, 0);
	return id;
}

Brand_ptr Annotation_get_brand(Annotation_ptr p)
{
	Brand_ptr brand;
	brand.p = capn_getp(p.p, 1, 0);
	return brand;
}

Value_ptr Annotation_get_value(Annotation_ptr p)
{
	Value_ptr value;
	value.p = capn_getp(p.p, 0, 0);
	return value;
}

void Annotation_set_id(Annotation_ptr p, uint64_t id)
{
	capn_write64(p.p, 0, id);
}

void Annotation_set_brand(Annotation_ptr p, Brand_ptr brand)
{
	capn_setp(p.p, 1, brand.p);
}

void Annotation_set_value(Annotation_ptr p, Value_ptr value)
{
	capn_setp(p.p, 0, value.p);
}

CodeGeneratorRequest_ptr new_CodeGeneratorRequest(struct capn_segment *s) {
	CodeGeneratorRequest_ptr p;
	p.p = capn_new_struct(s, 0, 2);
	return p;
}
CodeGeneratorRequest_list new_CodeGeneratorRequest_list(struct capn_segment *s, int len) {
	CodeGeneratorRequest_list p;
	p.p = capn_new_list(s, len, 0, 2);
	return p;
}
void read_CodeGeneratorRequest(struct CodeGeneratorRequest *s capnp_unused, CodeGeneratorRequest_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->nodes.p = capn_getp(p.p, 0, 0);
	s->requestedFiles.p = capn_getp(p.p, 1, 0);
}
void write_CodeGeneratorRequest(const struct CodeGeneratorRequest *s capnp_unused, CodeGeneratorRequest_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_setp(p.p, 0, s->nodes.p);
	capn_setp(p.p, 1, s->requestedFiles.p);
}
void get_CodeGeneratorRequest(struct CodeGeneratorRequest *s, CodeGeneratorRequest_list l, int i) {
	CodeGeneratorRequest_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_CodeGeneratorRequest(s, p);
}
void set_CodeGeneratorRequest(const struct CodeGeneratorRequest *s, CodeGeneratorRequest_list l, int i) {
	CodeGeneratorRequest_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_CodeGeneratorRequest(s, p);
}

Node_list CodeGeneratorRequest_get_nodes(CodeGeneratorRequest_ptr p)
{
	Node_list nodes;
	nodes.p = capn_getp(p.p, 0, 0);
	return nodes;
}

CodeGeneratorRequest_RequestedFile_list CodeGeneratorRequest_get_requestedFiles(CodeGeneratorRequest_ptr p)
{
	CodeGeneratorRequest_RequestedFile_list requestedFiles;
	requestedFiles.p = capn_getp(p.p, 1, 0);
	return requestedFiles;
}

void CodeGeneratorRequest_set_nodes(CodeGeneratorRequest_ptr p, Node_list nodes)
{
	capn_setp(p.p, 0, nodes.p);
}

void CodeGeneratorRequest_set_requestedFiles(CodeGeneratorRequest_ptr p, CodeGeneratorRequest_RequestedFile_list requestedFiles)
{
	capn_setp(p.p, 1, requestedFiles.p);
}

CodeGeneratorRequest_RequestedFile_ptr new_CodeGeneratorRequest_RequestedFile(struct capn_segment *s) {
	CodeGeneratorRequest_RequestedFile_ptr p;
	p.p = capn_new_struct(s, 8, 2);
	return p;
}
CodeGeneratorRequest_RequestedFile_list new_CodeGeneratorRequest_RequestedFile_list(struct capn_segment *s, int len) {
	CodeGeneratorRequest_RequestedFile_list p;
	p.p = capn_new_list(s, len, 8, 2);
	return p;
}
void read_CodeGeneratorRequest_RequestedFile(struct CodeGeneratorRequest_RequestedFile *s capnp_unused, CodeGeneratorRequest_RequestedFile_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->id = capn_read64(p.p, 0);
	s->filename = capn_get_text(p.p, 0, capn_val0);
	s->imports.p = capn_getp(p.p, 1, 0);
}
void write_CodeGeneratorRequest_RequestedFile(const struct CodeGeneratorRequest_RequestedFile *s capnp_unused, CodeGeneratorRequest_RequestedFile_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, s->id);
	capn_set_text(p.p, 0, s->filename);
	capn_setp(p.p, 1, s->imports.p);
}
void get_CodeGeneratorRequest_RequestedFile(struct CodeGeneratorRequest_RequestedFile *s, CodeGeneratorRequest_RequestedFile_list l, int i) {
	CodeGeneratorRequest_RequestedFile_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_CodeGeneratorRequest_RequestedFile(s, p);
}
void set_CodeGeneratorRequest_RequestedFile(const struct CodeGeneratorRequest_RequestedFile *s, CodeGeneratorRequest_RequestedFile_list l, int i) {
	CodeGeneratorRequest_RequestedFile_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_CodeGeneratorRequest_RequestedFile(s, p);
}

uint64_t CodeGeneratorRequest_RequestedFile_get_id(CodeGeneratorRequest_RequestedFile_ptr p)
{
	uint64_t id;
	id = capn_read64(p.p, 0);
	return id;
}

capn_text CodeGeneratorRequest_RequestedFile_get_filename(CodeGeneratorRequest_RequestedFile_ptr p)
{
	capn_text filename;
	filename = capn_get_text(p.p, 0, capn_val0);
	return filename;
}

CodeGeneratorRequest_RequestedFile_Import_list CodeGeneratorRequest_RequestedFile_get_imports(CodeGeneratorRequest_RequestedFile_ptr p)
{
	CodeGeneratorRequest_RequestedFile_Import_list imports;
	imports.p = capn_getp(p.p, 1, 0);
	return imports;
}

void CodeGeneratorRequest_RequestedFile_set_id(CodeGeneratorRequest_RequestedFile_ptr p, uint64_t id)
{
	capn_write64(p.p, 0, id);
}

void CodeGeneratorRequest_RequestedFile_set_filename(CodeGeneratorRequest_RequestedFile_ptr p, capn_text filename)
{
	capn_set_text(p.p, 0, filename);
}

void CodeGeneratorRequest_RequestedFile_set_imports(CodeGeneratorRequest_RequestedFile_ptr p, CodeGeneratorRequest_RequestedFile_Import_list imports)
{
	capn_setp(p.p, 1, imports.p);
}

CodeGeneratorRequest_RequestedFile_Import_ptr new_CodeGeneratorRequest_RequestedFile_Import(struct capn_segment *s) {
	CodeGeneratorRequest_RequestedFile_Import_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
CodeGeneratorRequest_RequestedFile_Import_list new_CodeGeneratorRequest_RequestedFile_Import_list(struct capn_segment *s, int len) {
	CodeGeneratorRequest_RequestedFile_Import_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_CodeGeneratorRequest_RequestedFile_Import(struct CodeGeneratorRequest_RequestedFile_Import *s capnp_unused, CodeGeneratorRequest_RequestedFile_Import_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	s->id = capn_read64(p.p, 0);
	s->name = capn_get_text(p.p, 0, capn_val0);
}
void write_CodeGeneratorRequest_RequestedFile_Import(const struct CodeGeneratorRequest_RequestedFile_Import *s capnp_unused, CodeGeneratorRequest_RequestedFile_Import_ptr p) {
	capn_resolve(&p.p);
	capnp_use(s);
	capn_write64(p.p, 0, s->id);
	capn_set_text(p.p, 0, s->name);
}
void get_CodeGeneratorRequest_RequestedFile_Import(struct CodeGeneratorRequest_RequestedFile_Import *s, CodeGeneratorRequest_RequestedFile_Import_list l, int i) {
	CodeGeneratorRequest_RequestedFile_Import_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_CodeGeneratorRequest_RequestedFile_Import(s, p);
}
void set_CodeGeneratorRequest_RequestedFile_Import(const struct CodeGeneratorRequest_RequestedFile_Import *s, CodeGeneratorRequest_RequestedFile_Import_list l, int i) {
	CodeGeneratorRequest_RequestedFile_Import_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_CodeGeneratorRequest_RequestedFile_Import(s, p);
}

uint64_t CodeGeneratorRequest_RequestedFile_Import_get_id(CodeGeneratorRequest_RequestedFile_Import_ptr p)
{
	uint64_t id;
	id = capn_read64(p.p, 0);
	return id;
}

capn_text CodeGeneratorRequest_RequestedFile_Import_get_name(CodeGeneratorRequest_RequestedFile_Import_ptr p)
{
	capn_text name;
	name = capn_get_text(p.p, 0, capn_val0);
	return name;
}

void CodeGeneratorRequest_RequestedFile_Import_set_id(CodeGeneratorRequest_RequestedFile_Import_ptr p, uint64_t id)
{
	capn_write64(p.p, 0, id);
}

void CodeGeneratorRequest_RequestedFile_Import_set_name(CodeGeneratorRequest_RequestedFile_Import_ptr p, capn_text name)
{
	capn_set_text(p.p, 0, name);
}

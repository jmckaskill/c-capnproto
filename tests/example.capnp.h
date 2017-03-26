#ifndef CAPN_D120E9A4C43868AB
#define CAPN_D120E9A4C43868AB
/* AUTO GENERATED - DO NOT EDIT */
#include <capnp_c.h>

#if CAPN_VERSION != 1
#error "version mismatch between capnp_c.h and generated code"
#endif

#include "c.capnp.h"

#ifdef __cplusplus
extern "C" {
#endif

struct Greeting;

typedef struct {capn_ptr p;} Greeting_ptr;

typedef struct {capn_ptr p;} Greeting_list;

struct Greeting {
	capn_text text;
	uint32_t timesToSay;
};

static const size_t Greeting_word_count = 1;

static const size_t Greeting_pointer_count = 1;

static const size_t Greeting_struct_bytes_count = 16;

capn_text Greeting_get_text(Greeting_ptr p);

uint32_t Greeting_get_timesToSay(Greeting_ptr p);

void Greeting_set_text(Greeting_ptr p, capn_text text);

void Greeting_set_timesToSay(Greeting_ptr p, uint32_t timesToSay);

Greeting_ptr new_Greeting(struct capn_segment*);

Greeting_list new_Greeting_list(struct capn_segment*, int len);

void read_Greeting(struct Greeting*, Greeting_ptr);

void write_Greeting(const struct Greeting*, Greeting_ptr);

void get_Greeting(struct Greeting*, Greeting_list, int i);

void set_Greeting(const struct Greeting*, Greeting_list, int i);

#ifdef __cplusplus
}
#endif
#endif

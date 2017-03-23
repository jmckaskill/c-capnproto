#include "example.capnp.h"
/* AUTO GENERATED - DO NOT EDIT */
static const capn_text capn_val0 = {0,"",0};
static const uint8_t capn_buf[32] = {
	68,101,102,97,117,108,116,32,
	103,114,101,101,116,105,110,103,
	58,32,104,101,108,108,111,32,
	119,111,114,108,100,33,0,0
};
static const struct capn_segment capn_seg = {{0},0,0,0,(char*)&capn_buf[0],32,32,0};
static capn_text capn_val1 = {30,(char*)&capn_buf[0],(struct capn_segment*)&capn_seg};

Greeting_ptr new_Greeting(struct capn_segment *s) {
	Greeting_ptr p;
	p.p = capn_new_struct(s, 8, 1);
	return p;
}
Greeting_list new_Greeting_list(struct capn_segment *s, int len) {
	Greeting_list p;
	p.p = capn_new_list(s, len, 8, 1);
	return p;
}
void read_Greeting(struct Greeting *s, Greeting_ptr p) {
	capn_resolve(&p.p);
	s->text = capn_get_text(p.p, 0, capn_val1);
	s->timesToSay = capn_read32(p.p, 0);
}
void write_Greeting(const struct Greeting *s, Greeting_ptr p) {
	capn_resolve(&p.p);
	capn_set_text(p.p, 0, (s->text.str != capn_val1.str) ? s->text : capn_val0);
	capn_write32(p.p, 0, s->timesToSay);
}
void get_Greeting(struct Greeting *s, Greeting_list l, int i) {
	Greeting_ptr p;
	p.p = capn_getp(l.p, i, 0);
	read_Greeting(s, p);
}
void set_Greeting(const struct Greeting *s, Greeting_list l, int i) {
	Greeting_ptr p;
	p.p = capn_getp(l.p, i, 0);
	write_Greeting(s, p);
}

capn_text Greeting_get_text(Greeting_ptr p)
{
	capn_text text;
	text = capn_get_text(p.p, 0, capn_val1);
	return text;
}

uint32_t Greeting_get_timesToSay(Greeting_ptr p)
{
	uint32_t timesToSay;
	timesToSay = capn_read32(p.p, 0);
	return timesToSay;
}

void Greeting_set_text(Greeting_ptr p, capn_text text)
{
	capn_set_text(p.p, 0, (text.str != capn_val1.str) ? text : capn_val0);
}

void Greeting_set_timesToSay(Greeting_ptr p, uint32_t timesToSay)
{
	capn_write32(p.p, 0, timesToSay);
}

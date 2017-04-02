/* example-test.cpp
 *
 * Some simple examples using c-capnproto.
 *
 * Based on the addressbook.capnp example in the capnproto C++ project:
 *  https://github.com/sandstorm-io/capnproto/blob/6816634a08b08bc8f52b4ee809afb58389f19655/c%2B%2B/samples/addressbook.capnp
 *
 * Copyright (C) 2017 Alex Helfet
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#include <gtest/gtest.h>
#include <cstdint>

#include "capnp_c.h"
#include "addressbook.capnp.h"

static capn_text chars_to_text(const char *chars) {
  return (capn_text) {
    .len = (int) strlen(chars),
    .str = chars,
    .seg = NULL,
  };
}

// EXPECT_CAPN_TEXT_EQ arguments:
//   const char * expected
//   capn_text t
#define EXPECT_CAPN_TEXT_EQ(expected, t) \
  do {                                                  \
    EXPECT_EQ(strlen((expected)), (uint32_t) (t).len);  \
    EXPECT_STREQ((expected), (t).str);                  \
  } while(0);


// Demonstrates serializing an object tree to a byte array, then deserializing it
// back into an object tree and asserting on the expected values therein.
//
// This example uses generated  read_*, write_*, get_*, set_* functions
// to deserialize into structs.
TEST(Examples, RoundTripPerson) {
  uint8_t buf[4096];
  ssize_t sz = 0;

  const char *name = "Firstname Lastname";
  const char *email = "username@domain.com";
  const char *school = "of life";

  {
    struct capn c;
    capn_init_malloc(&c);
    capn_ptr cr = capn_root(&c);
    struct capn_segment *cs = cr.seg;

    // Set initial object in `p`.
    struct Person p = {
      .id = 17,
      .name = chars_to_text(name),
      .email = chars_to_text(email),
    };
    p.employment_which = Person_employment_school;
    p.employment.school = chars_to_text(school);

    p.phones = new_Person_PhoneNumber_list(cs, 2);
    struct Person_PhoneNumber pn0 = {
      .number = chars_to_text("123"),
      .type = Person_PhoneNumber_Type_work,
    };
    set_Person_PhoneNumber(&pn0, p.phones, 0);
    struct Person_PhoneNumber pn1 = {
      .number = chars_to_text("234"),
      .type = Person_PhoneNumber_Type_home,
    };
    set_Person_PhoneNumber(&pn1, p.phones, 1);

    Person_ptr pp = new_Person(cs);
    write_Person(&p, pp);
    int setp_ret = capn_setp(capn_root(&c), 0, pp.p);
    ASSERT_EQ(0, setp_ret);
    sz = capn_write_mem(&c, buf, sizeof(buf), 0 /* packed */);
    capn_free(&c);
  }

  {
    // Write serialized object to file system.
    FILE *f = fopen("tests/example-test.cpp.Person.out", "wb");
    ASSERT_NE(f, (void*)0);
    fwrite(buf, 1 /* size */, sz /* count */, f);
    int close_ret = fclose(f);
    ASSERT_EQ(0, close_ret);
  }

  {
    // Deserialize `buf[0..sz-1]` to `rp`.
    struct capn rc;
    int init_mem_ret = capn_init_mem(&rc, buf, sz, 0 /* packed */);
    ASSERT_EQ(0, init_mem_ret);
    Person_ptr rroot;
    struct Person rp;
    rroot.p = capn_getp(capn_root(&rc), 0 /* off */, 1 /* resolve */);
    read_Person(&rp, rroot);

    // Assert deserialized values in `rp`
    EXPECT_EQ(rp.id, (uint32_t) 17);
    EXPECT_CAPN_TEXT_EQ(name, rp.name);
    EXPECT_CAPN_TEXT_EQ(email, rp.email);

    EXPECT_EQ(rp.employment_which, Person_employment_school);
    EXPECT_CAPN_TEXT_EQ(school, rp.employment.school);

    EXPECT_EQ(2, capn_len(rp.phones));

    struct Person_PhoneNumber rpn0;
    get_Person_PhoneNumber(&rpn0, rp.phones, 0);
    EXPECT_CAPN_TEXT_EQ("123", rpn0.number);
    EXPECT_EQ(rpn0.type, Person_PhoneNumber_Type_work);

    struct Person_PhoneNumber rpn1;
    get_Person_PhoneNumber(&rpn1, rp.phones, 1);
    EXPECT_CAPN_TEXT_EQ("234", rpn1.number);
    EXPECT_EQ(rpn1.type, Person_PhoneNumber_Type_home);

    capn_free(&rc);
  }
}

// Demonstrate accessing serialized objects using accessor functions without
// first copying values into structs.
TEST(Examples, PersonWithAccessors) {
  struct capn c;
  capn_init_malloc(&c);
  capn_ptr cr = capn_root(&c);
  struct capn_segment *cs = cr.seg;

  // Set fields with set_ accessors.
  Person_ptr pp = new_Person(cs);
  {
    Person_set_id(pp, 17);

    capn_text name = chars_to_text("Name");
    EXPECT_CAPN_TEXT_EQ("Name", name);
    Person_set_name(pp, name);

    Person_PhoneNumber_list pnl = new_Person_PhoneNumber_list(cs, 1);
    Person_set_phones(pp, pnl);
    Person_PhoneNumber_ptr pn0;
    pn0.p = capn_getp(pnl.p, 0 /* offset */, 0 /* resolve */);
    Person_PhoneNumber_set_type(pn0, Person_PhoneNumber_Type_home);
  }

  // Assert field values returned by get_ accessors.
  {
    EXPECT_EQ(Person_get_id(pp), 17);
    EXPECT_CAPN_TEXT_EQ("Name", Person_get_name(pp));

    Person_PhoneNumber_list pnl = Person_get_phones(pp);
    Person_PhoneNumber_ptr pn0;
    pn0.p = capn_getp(pnl.p, 0 /* offset */, 0 /* resolve */);
    EXPECT_EQ(Person_PhoneNumber_Type_home, Person_PhoneNumber_get_type(pn0));
  }

  capn_free(&c);
}

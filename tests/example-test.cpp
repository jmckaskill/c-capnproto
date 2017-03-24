/* example-test.cpp
 *
 * Some simple examples using c-capnproto
 *
 * Copyright (C) 2017 Alex Helfet
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#include <gtest/gtest.h>
#include <cstdint>

#include "capnp_c.h"
#include "example.capnp.h"

TEST(Examples, RoundTrip) {
  uint8_t buf[4096];
  ssize_t sz = 0;

  const char *s = "Hello.";

  {
    // Set initial object in `g`.
    const capn_text capn_val0 = {
      .len = (int) strlen(s),
      .str = s,
      .seg = NULL
    };
    struct Greeting g = {
      .text = capn_val0,
      .timesToSay = 17,
    };

    // Serialize `g` to `buf[0..sz-1]`.
    struct capn c;
    capn_init_malloc(&c);
    capn_ptr cr = capn_root(&c);
    struct capn_segment *cs = cr.seg;
    Greeting_ptr gp = new_Greeting(cs);
    write_Greeting(&g, gp);
    int setp_ret = capn_setp(capn_root(&c), 0, gp.p);
    ASSERT_EQ(0, setp_ret);
    sz = capn_write_mem(&c, buf, sizeof(buf), 0 /* packed */);
    capn_free(&c);
  }

  {
    // Write serialized object to file system.
    FILE *f = fopen("tests/example-test.cpp.Greeting.out", "wb");
    ASSERT_NE(f, (void*)0);
    fwrite(buf, 1 /* size */, sz /* count */, f);
    int close_ret = fclose(f);
    ASSERT_EQ(0, close_ret);
  }

  {
    // Deserialize `buf[0..sz-1]` to `rg`.
    struct capn rc;
    int init_mem_ret = capn_init_mem(&rc, buf, sz, 0 /* packed */);
    ASSERT_EQ(0, init_mem_ret);
    Greeting_ptr rroot;
    struct Greeting rg;
    rroot.p = capn_getp(capn_root(&rc), 0 /* off */, 1 /* resolve */);
    read_Greeting(&rg, rroot);

    // Assert deserialized values in `rg`
    EXPECT_EQ(rg.timesToSay, (uint32_t) 17);
    EXPECT_EQ(strlen(s), (uint32_t) rg.text.len);
    EXPECT_EQ(0, strncmp(s, rg.text.str, strlen(s)));
  }
}

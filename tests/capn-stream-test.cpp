/* capn-stream-test.cpp
 *
 * Copyright (C) 2013 James McKaskill
 * Copyright (C) 2014 Steve Dee
 *
 * This software may be modified and distributed under the terms
 * of the MIT license.  See the LICENSE file for details.
 */

#include "capn-stream.c"
#include <gtest/gtest.h>

template <int wordCount>
union AlignedData {
  uint8_t bytes[wordCount * 8];
  uint64_t words[wordCount];
};

TEST(Stream, ReadEmptyStream_Even) {
  AlignedData<2> data = {{
    1, 0, 0, 0, // num of segs - 1
    0, 0, 0, 0,
    0, 0, 0, 0,
    2, 3, 4, 0, // garbage that should be ignored
  }};

  struct capn ctx;
  ASSERT_NE(0, capn_init_mem(&ctx, data.bytes, 12, 0));
  ASSERT_EQ(0, capn_init_mem(&ctx, data.bytes, 16, 0));
  EXPECT_EQ(2, ctx.segnum);
  EXPECT_EQ(0, ctx.seglist->len);
  EXPECT_EQ(0, ctx.seglist->next->len);
  capn_free(&ctx);
}

TEST(Stream, ReadEmptyStream_Odd) {
  AlignedData<3> data = {{
    2, 0, 0, 0, // num of segs - 1
    0, 0, 0, 0,
    0, 0, 0, 0,
    0, 0, 0, 0,
    2, 3, 4, 0, // garbage that should be ignored
  }};

  struct capn ctx;
  ASSERT_NE(0, capn_init_mem(&ctx, data.bytes, 12, 0));

  ASSERT_EQ(0, capn_init_mem(&ctx, data.bytes, 16, 0));
  EXPECT_EQ(3, ctx.segnum);
  EXPECT_EQ(0, ctx.seglist->len);
  EXPECT_EQ(0, ctx.seglist->next->len);
  capn_free(&ctx);

  ASSERT_EQ(0, capn_init_mem(&ctx, data.bytes, 20, 0));
  EXPECT_EQ(3, ctx.segnum);
  EXPECT_EQ(0, ctx.seglist->len);
  EXPECT_EQ(0, ctx.seglist->next->len);
  capn_free(&ctx);
}

TEST(Stream, ReadStream_Even) {
  AlignedData<5> data = {{
     1, 0, 0, 0, // num of segs - 1
     1, 0, 0, 0,
     2, 0, 0, 0,
     2, 3, 4, 0, // garbage that should be ignored
     1, 2, 3, 4, 5, 6, 7, 8,
     9,10,11,12,13,14,15,16,
    17,18,19,20,21,22,23,24,
  }};

  struct capn ctx;
  ASSERT_NE(0, capn_init_mem(&ctx, data.bytes, 36, 0));
  ASSERT_EQ(0, capn_init_mem(&ctx, data.bytes, 40, 0));
  EXPECT_EQ(2, ctx.segnum);
  EXPECT_EQ(8, ctx.seglist->len);
  EXPECT_EQ(1, ctx.seglist->data[0]);
  EXPECT_EQ(16, ctx.seglist->next->len);
  EXPECT_EQ(9, ctx.seglist->next->data[0]);
  capn_free(&ctx);
}

TEST(Stream, WriteEmptyStream) {
  uint8_t buf[2048];

  struct capn ctx1, ctx2;
  capn_init_malloc(&ctx1);
  struct capn_ptr root = capn_root(&ctx1);
  ASSERT_EQ(CAPN_PTR_LIST, root.type);
  EXPECT_EQ(-1, capn_write_mem(&ctx1, buf, 2*8-1, 0));
  EXPECT_EQ(2*8, capn_write_mem(&ctx1, buf, 2048, 0));
  ASSERT_EQ(0, capn_init_mem(&ctx2, buf, 2048, 0));
  EXPECT_EQ(1, ctx2.segnum);
  EXPECT_EQ(8, ctx2.seglist->len);
  EXPECT_EQ(0, ctx2.seglist->next);

  capn_free(&ctx1);
  capn_free(&ctx2);
}

TEST(Stream, WriteEmptyStreamPacked) {
  uint8_t buf[2048];

  struct capn ctx1, ctx2;
  capn_init_malloc(&ctx1);
  struct capn_ptr root = capn_root(&ctx1);
  ASSERT_EQ(CAPN_PTR_LIST, root.type);
  EXPECT_EQ(-1, capn_write_mem(&ctx1, buf, 3, 1));
  EXPECT_EQ(4, capn_write_mem(&ctx1, buf, 2048, 1));
  ASSERT_EQ(0, capn_init_mem(&ctx2, buf, 2048, 1));
  EXPECT_EQ(1, ctx2.segnum);
  EXPECT_EQ(8, ctx2.seglist->len);
  EXPECT_EQ(0, ctx2.seglist->next);

  capn_free(&ctx1);
  capn_free(&ctx2);
}

TEST(Stream, WriteOneSegment) {
  uint8_t buf[2048];

  struct capn ctx1, ctx2;
  capn_init_malloc(&ctx1);

  struct capn_ptr root = capn_root(&ctx1);
  struct capn_ptr ptr = capn_new_struct(root.seg, 8, 0);
  EXPECT_EQ(0, capn_setp(root, 0, ptr));
  EXPECT_EQ(0, capn_write64(ptr, 0, UINT64_C(0x1011121314151617)));

  EXPECT_EQ(-1, capn_write_mem(&ctx1, buf, 3*8-1, 0));
  EXPECT_EQ(3*8, capn_write_mem(&ctx1, buf, 2048, 0));
  ASSERT_EQ(0, capn_init_mem(&ctx2, buf, 2048, 0));
  EXPECT_EQ(1, ctx2.segnum);

  root = capn_root(&ctx2);
  ptr = capn_getp(root, 0, 1);
  EXPECT_EQ(UINT64_C(0x1011121314151617), capn_read64(ptr, 0));

  capn_free(&ctx1);
  capn_free(&ctx2);
}

TEST(Stream, WriteOneSegmentPacked) {
  uint8_t buf[2048];

  struct capn ctx1, ctx2;
  capn_init_malloc(&ctx1);

  struct capn_ptr root = capn_root(&ctx1);
  struct capn_ptr ptr = capn_new_struct(root.seg, 8, 0);
  EXPECT_EQ(0, capn_setp(root, 0, ptr));
  EXPECT_EQ(0, capn_write64(ptr, 0, UINT64_C(0x1011121314151617)));

  EXPECT_EQ(-1, capn_write_mem(&ctx1, buf, 13, 1));
  EXPECT_EQ(14, capn_write_mem(&ctx1, buf, 2048, 1));
  ASSERT_EQ(0, capn_init_mem(&ctx2, buf, 2048, 1));
  EXPECT_EQ(1, ctx2.segnum);

  root = capn_root(&ctx2);
  ptr = capn_getp(root, 0, 1);
  EXPECT_EQ(UINT64_C(0x1011121314151617), capn_read64(ptr, 0));

  capn_free(&ctx1);
  capn_free(&ctx2);
}

static struct capn_segment *CreateSmallSegment(void *u, uint32_t id, int sz) {
  struct capn_segment *s = (struct capn_segment*) calloc(1, sizeof(*s));
  s->data = (char*) calloc(1, sz);
  s->cap = sz;
  return s;
}

TEST(Stream, WriteTwoSegments) {
  struct capn ctx1, ctx2;
  uint8_t buf[5*8];

  capn_init_malloc(&ctx1);
  ctx1.create = &CreateSmallSegment;
  struct capn_ptr root = capn_root(&ctx1);
  struct capn_ptr ptr1 = capn_new_struct(root.seg, 8, 0);
  EXPECT_EQ(0, capn_setp(root, 0, ptr1));
  EXPECT_EQ(0, capn_write64(ptr1, 0, UINT64_C(0xfffefdfcfbfaf9f8)));
  EXPECT_EQ(2, ctx1.segnum);

  /* 2 words: header
   * 1 word: segment 1
   * 2 words: segment 2
   */
  EXPECT_EQ(5*8, capn_write_mem(&ctx1, buf, 5*8, 0));

  ASSERT_EQ(0, capn_init_mem(&ctx2, buf, 2048, 0));
  root = capn_root(&ctx2);
  ptr1 = capn_getp(root, 0, 1);
  EXPECT_EQ(UINT64_C(0xfffefdfcfbfaf9f8), capn_read64(ptr1, 0));

  capn_free(&ctx1);
  capn_free(&ctx2);
}

TEST(Stream, WriteTwoSegmentsPacked) {
  struct capn ctx1, ctx2;
  uint8_t buf[5*8];

  capn_init_malloc(&ctx1);
  ctx1.create = &CreateSmallSegment;
  struct capn_ptr root = capn_root(&ctx1);
  struct capn_ptr ptr1 = capn_new_struct(root.seg, 8, 0);
  EXPECT_EQ(0, capn_setp(root, 0, ptr1));
  EXPECT_EQ(0, capn_write64(ptr1, 0, UINT64_C(0xfffefdfcfbfaf9f8)));
  EXPECT_EQ(2, ctx1.segnum);

  /* 2 words: header
   * 1 word: segment 1
   * 2 words: segment 2
   */
  EXPECT_EQ(20, capn_write_mem(&ctx1, buf, 5*8, 1));

  ASSERT_EQ(0, capn_init_mem(&ctx2, buf, 2048, 1));
  root = capn_root(&ctx2);
  ptr1 = capn_getp(root, 0, 1);
  EXPECT_EQ(UINT64_C(0xfffefdfcfbfaf9f8), capn_read64(ptr1, 0));

  capn_free(&ctx1);
  capn_free(&ctx2);
}

TEST(Stream, WriteThreeSegments) {
  struct capn ctx1, ctx2;
  uint8_t buf[2048];

  capn_init_malloc(&ctx1);
  ctx1.create = &CreateSmallSegment;
  struct capn_ptr root = capn_root(&ctx1);
  struct capn_ptr ptr1 = capn_new_struct(root.seg, 0, 1);
  EXPECT_EQ(0, capn_setp(root, 0, ptr1));
  struct capn_ptr ptr2 = capn_new_struct(ptr1.seg, 4, 0);
  EXPECT_EQ(0, capn_setp(ptr1, 0, ptr2));
  EXPECT_EQ(0, capn_write32(ptr2, 0, 0x12345678));
  EXPECT_EQ(3, ctx1.segnum);

  EXPECT_EQ(-1, capn_write_mem(&ctx1, buf, 7*8-1, 0));
  EXPECT_EQ(7*8, capn_write_mem(&ctx1, buf, 2048, 0));

  EXPECT_EQ(0, capn_init_mem(&ctx2, buf, 2048, 0));
  root = capn_root(&ctx2);
  ptr1 = capn_getp(root, 0, 1);
  ptr2 = capn_getp(ptr1, 0, 1);
  EXPECT_EQ(0x12345678, capn_read32(ptr2, 0));

  capn_free(&ctx1);
  capn_free(&ctx2);
}

TEST(Stream, WriteThreeSegmentsPacked) {
  struct capn ctx1, ctx2;
  uint8_t buf[2048];

  capn_init_malloc(&ctx1);
  ctx1.create = &CreateSmallSegment;
  struct capn_ptr root = capn_root(&ctx1);
  struct capn_ptr ptr1 = capn_new_struct(root.seg, 0, 1);
  EXPECT_EQ(0, capn_setp(root, 0, ptr1));
  struct capn_ptr ptr2 = capn_new_struct(ptr1.seg, 4, 0);
  EXPECT_EQ(0, capn_setp(ptr1, 0, ptr2));
  EXPECT_EQ(0, capn_write32(ptr2, 0, 0x12345678));
  EXPECT_EQ(3, ctx1.segnum);

  EXPECT_EQ(-1, capn_write_mem(&ctx1, buf, 20, 1));
  EXPECT_EQ(21, capn_write_mem(&ctx1, buf, 2048, 1));

  EXPECT_EQ(0, capn_init_mem(&ctx2, buf, 2048, 1));
  root = capn_root(&ctx2);
  ptr1 = capn_getp(root, 0, 1);
  ptr2 = capn_getp(ptr1, 0, 1);
  EXPECT_EQ(0x12345678, capn_read32(ptr2, 0));

  capn_free(&ctx1);
  capn_free(&ctx2);
}

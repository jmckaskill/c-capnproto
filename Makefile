.PHONY: all clean test

LDFLAGS=-O2 -Wall -Werror -fPIC
CFLAGS=-O2 -Wall -Werror -fPIC -I. -Wno-unused-function
GTEST_CFLAGS=-I../gtest/include
OBJS=capn-malloc.o capn-stream.o capn.o

all: capn.a capn.so capnpc-c test

clean:
	rm -f *.o *.so capnpc-c compiler/*.o

%.o: %.c *.h *.inc compiler/*.h
	$(CC) $(CFLAGS) -c $< -o $@

capn.so: $(OBJS)
	$(CC) -shared $(LDFLAGS) $^ -o $@

capn.a: $(OBJS)
	$(AR) rcs $@ $^

capnpc-c: compiler/capnpc-c.o compiler/schema.capnp.o compiler/str.o capn.a
	$(CC) $(LDFLAGS) $^ -o $@

test: capn-test
	./capn-test

%-test.o: %-test.cpp *.h *.c *.inc
	$(CXX) -g -Wall -Werror -I. $(GTEST_CFLAGS) -o $@ -c $<

capn-test: capn-test.o capn-stream-test.o compiler/test.capnp.o compiler/schema-test.o compiler/schema.capnp.o gtest-all-test.o
	$(CXX) -g -Wall -Werror -I. -o $@ $^

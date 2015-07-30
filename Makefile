.PHONY: all clean test

GTEST := gtest-1.7.0

LDFLAGS=-O2 -Wall -Werror -fPIC
CFLAGS=-O2 -Wall -Werror -fPIC -I. -Wno-unused-function
GTEST_CFLAGS=-I$(GTEST)/include

all: capn.so capnpc-c test

clean:
	rm -f *.o *.so capnpc-c compiler/*.o

%.o: %.c *.h *.inc compiler/*.h
	$(CC) $(CFLAGS) -c $< -o $@

capn.so: capn-malloc.o capn-stream.o capn.o
	$(CC) -shared $(LDFLAGS) $^ -o $@

capnpc-c: compiler/capnpc-c.o compiler/schema.capnp.o compiler/str.o capn.so
	$(CC) $(LDFLAGS) $^ -o $@

test: capn-test
	./capn-test

%-test.o: %-test.cpp *.h *.c *.inc
	$(CXX) -g -Wall -Werror -I. $(GTEST_CFLAGS) -o $@ -c $<

gtest-all.o: $(GTEST)/src/*.cc
	$(CXX) -g -Wall -Werror -I. $(GTEST_CFLAGS) -I$(GTEST) -o $@ -c $<

capn-test: capn-test.o capn-stream-test.o compiler/test.capnp.o compiler/schema-test.o compiler/schema.capnp.o gtest-all.o
	$(CXX) -g -Wall -Werror -I. -o $@ $^

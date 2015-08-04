.PHONY: all clean test

GTEST := gtest-1.7.0

LDFLAGS=-O2 -Wall -Werror -fPIC
CFLAGS=-O2 -Wall -Werror -fPIC -I. -Wno-unused-function
ifneq (,$(findstring gcc, $(CC)))
	# gcc's maybe-unintialized is too imprecise, disable it.
	# clang disbles this functionality by default and doesn't recognize the flag.
	# (check for CC that contains rather than equals 'gcc',
	#  to accommodate using specific versions, like gcc-4.9 etc)
	CFLAGS += -Wno-maybe-uninitialized
endif

GTEST_CFLAGS=-I$(GTEST)/include -std=c++11
GTEST_LDFLAGS=-lpthread

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
	$(CXX) -g -Wall -Werror -I. $^ $(GTEST_LDFLAGS) -o $@
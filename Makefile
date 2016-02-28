.PHONY: all clean test

LDFLAGS=-O2 -fPIC
CFLAGS=-O2 -std=gnu11 -Wall -Wextra -fPIC -I. \
       -Wno-unused-function -Wno-missing-field-initializers -Wno-unused-parameter
ifneq (,$(findstring gcc, $(CC)))
	# gcc's maybe-unintialized is too imprecise, disable it.
	# clang disbles this functionality by default and doesn't recognize the flag.
	# (check for CC that contains rather than equals 'gcc',
	#  to accommodate using specific versions, like gcc-4.9 etc)
	CFLAGS += -Wno-maybe-uninitialized
endif

GTEST_CFLAGS=-std=c++11 `gtest-config --cppflags --cxxflags`
GTEST_LDFLAGS=`gtest-config --ldflags --libs`

OBJS=capn-malloc.o capn-stream.o capn.o
prefix = /usr

all: capn.a capn.so capnpc-c test

clean:
	rm -f *.o *.so capnpc-c compiler/*.o *.a

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
	$(CXX) --std=c++11 -g -I. `gtest-config --cppflags --cxxflags` -o $@ -c $<

capn-test: capn-test.o capn-stream-test.o compiler/test.capnp.o compiler/schema-test.o compiler/schema.capnp.o capn.a
	$(CXX) -std=c++11 -g -I. $^ `gtest-config --ldflags --libs` -o $@

install:
	install -c capnpc-c $(prefix)/bin/capnpc-c
	install -c capn.so $(prefix)/lib/capn.so
	install -c capn.a $(prefix)/lib/capn.a

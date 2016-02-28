ACLOCAL_AMFLAGS = -I m4
AUTOMAKE_OPTIONS = foreign subdir-objects

lib_LTLIBRARIES =
bin_PROGRAMS =
check_PROGRAMS =
EXTRA_DIST =
noinst_HEADERS =
include_HEADERS =



lib_LTLIBRARIES += libcapn.la
libcapn_la_LDFLAGS = -version-info 1:0:0 
libcapn_la_SOURCES = \
	capn-malloc.c \
	capn-stream.c \
	capn.c

bin_PROGRAMS += capnpc-c
capnpc_c_SOURCES = \
	compiler/capnpc-c.c \
	compiler/schema.capnp.c \
	compiler/str.c
capnpc_c_LDADD = libcapn.la
include_HEADERS += \
	capn.h

EXTRA_DIST += \
	capn-list.inc
noinst_HEADERS += \
	compiler/str.h \
	compiler/schema.capnp.h \
	compiler/c++.capnp.h \
	compiler/test.capnp.h

if GTEST
AM_CXXFLAGS = -std=gnu++11
check_PROGRAMS += \
	capn-test
capn_test_SOURCES = \
	capn-test.cpp \
	capn-stream-test.cpp \
	compiler/test.capnp.c \
	compiler/schema-test.cpp \
	compiler/schema.capnp.c
capn_test_CFLAGS = $(GTEST_CFLAGS)
capn_test_LDADD = libcapn.la $(GTEST_LDFLAGS)
TESTS = capn-test 
endif

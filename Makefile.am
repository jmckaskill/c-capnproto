ACLOCAL_AMFLAGS = -I m4
AUTOMAKE_OPTIONS = foreign subdir-objects

lib_LTLIBRARIES =
bin_PROGRAMS =
check_PROGRAMS =
EXTRA_DIST =
noinst_HEADERS =
include_HEADERS =


AM_CPPFLAGS = -I${srcdir}/lib

lib_LTLIBRARIES += libcapnp_c.la
libcapnp_c_la_LDFLAGS = -version-info 0:0:0
libcapnp_c_la_SOURCES = \
	lib/capn-malloc.c \
	lib/capn-stream.c \
	lib/capn.c
EXTRA_DIST += \
	lib/capn-list.inc

bin_PROGRAMS += capnpc-c
capnpc_c_SOURCES = \
	compiler/capnpc-c.c \
	compiler/schema.capnp.c \
	compiler/str.c
capnpc_c_LDADD = libcapnp_c.la
include_HEADERS += \
	lib/capnp_c.h

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
capn_test_LDADD = libcapnp_c.la $(GTEST_LDFLAGS)
TESTS = capn-test 
endif

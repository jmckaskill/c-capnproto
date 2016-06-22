ACLOCAL_AMFLAGS = -I m4
AUTOMAKE_OPTIONS = foreign subdir-objects

lib_LTLIBRARIES =
bin_PROGRAMS =
check_PROGRAMS =
EXTRA_DIST =
noinst_HEADERS =
include_HEADERS =


EXTRA_DIST += README.md

EXTRA_DIST += c-capnproto.pc.in
pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = c-capnproto.pc

EXTRA_DIST += compiler/c.capnp
capnp_DATA = compiler/c.capnp

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

GTEST_LDADD = gtest/googletest/lib/libgtest.la
gtest/googletest/lib/libgtest.la:
	make -C gtest/googletest lib/libgtest.la
GTEST_CPPFLAGS = -I${srcdir}/gtest/googletest/include
DIST_SUBDIRS = gtest/googletest

check_PROGRAMS += \
	capn-test
capn_test_SOURCES = \
	tests/capn-test.cpp \
	tests/capn-stream-test.cpp \
	compiler/test.capnp.c \
	compiler/schema-test.cpp \
	compiler/schema.capnp.c
capn_test_CPPFLAGS = $(AM_CPPFLAGS) $(GTEST_CPPFLAGS)
capn_test_CXXFLAGS = -std=gnu++11 -pthread
capn_test_LDADD = libcapnp_c.la $(GTEST_LDADD)
capn_test_LDFLAGS = -pthread
TESTS = capn-test

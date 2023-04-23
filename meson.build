project('capnp-c', ['c','cpp'], meson_version: '>=1.0.0', default_options : ['c_std=c99', 'cpp_std=c++14'])

cc = meson.get_compiler('c')

common_c_args = []
common_cpp_args = ['-std=c++14']
libcapnp_c_args = []
libcapnp_src = [
  'lib' / 'capn-malloc.c',
  'lib' / 'capn-stream.c',
  'lib' / 'capn.c',
]

libcapnp = library('capnp', libcapnp_src,
    c_args : common_c_args + libcapnp_c_args,
    dependencies: [],
    implicit_include_directories: false,
    include_directories: include_directories(['compiler', 'lib'])
)

libcapnp_dep = declare_dependency(
    link_with: libcapnp,
    dependencies: [],
    include_directories: include_directories(['compiler', 'lib'])
)

capnpc_src = [
  'compiler' / 'capnpc-c.c',
  'compiler' / 'schema.capnp.c',
  'compiler' / 'str.c'
]

capnpc_c = executable('capnpc-c', capnpc_src,
      include_directories: include_directories(['lib']),
      dependencies: [libcapnp_dep],
      c_args : common_c_args,
)

capn_test_src = [
  'tests' / 'capn-test.cpp',
  'tests' / 'capn-stream-test.cpp',
  'tests' / 'example-test.cpp',
  'tests' / 'addressbook.capnp.c',
  'compiler' / 'test.capnp.c',
  'compiler' / 'schema-test.cpp',
  'compiler' / 'schema.capnp.c'
]

if get_option('enable_tests') and not meson.is_subproject()

  thread_dep = dependency('threads')

  gtest_proj = subproject('gtest')
  gtest_dep = gtest_proj.get_variable('gtest_dep')
  gmock_dep = gtest_proj.get_variable('gmock_dep')

  test_dependencies = [libcapnp_dep, gtest_dep, gmock_dep, thread_dep]

  if get_option('b_sanitize').contains('address')
    test_dependencies += cc.find_library('asan')
  endif
  if get_option('b_sanitize').contains('undefined')
    test_dependencies += cc.find_library('ubsan')
  endif

  exe = executable('capn-test', capn_test_src,
      include_directories: include_directories(['lib', 'tests', 'compiler']),
      dependencies: test_dependencies,
      c_args : common_c_args,
      cpp_args : common_cpp_args,
      install: false,
      install_rpath: '',
      implicit_include_directories: false
    )
  test('capn-test', exe)

endif

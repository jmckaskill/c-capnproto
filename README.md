capnpc-c
========

This is a C plugin for [Cap'n Proto](http://kentonv.github.io/capnproto), an
efficient protocol for sharing data and capabilities.

This is only the plugin, to properly make use of it you need to download, build
and install capnpc and then build and install this project and then you can
utilize it as:

    capnpc compiler/test.capnp -oc

[![Build Status](https://travis-ci.org/opensourcerouting/c-capnproto.svg?branch=master)](https://travis-ci.org/opensourcerouting/c-capnproto)

## status

This is a merge of 3 forks of [James McKaskill's great
work](https://github.com/jmckaskill/c-capnproto), which has been untouched for
a while:

- [liamstask's fork](https://github.com/liamstask/c-capnproto)
- [baruch's fork](https://github.com/baruch/c-capnproto)
- [kylemanna's fork](https://github.com/kylemanna/c-capnproto)


## usage

The `compiler` directory contains the C language plugin (`capnpc-c`) for use with the `capnp` tool: https://capnproto.org/capnp-tool.html.

`capnp` will by default search `$PATH` for `capnpc-c` - if it's on your PATH, you can generate code for your schema as follows:

    $ capnp compile -o c myschema.capnp

Otherwise, you can specify the path to the c plugin:

    $ capnp compile -o ./capnpc-c myschema.capnp

`capnp` generates a C struct that corresponds to each capn proto struct, along with read/write functions that convert to/from capn proto form.

TBD whether it will make sense in the future to provide accessor functions for struct members, rather than converting entire structs.

## building on linux

```
git clone https://github.com/opensourcerouting/c-capnproto
cd c-capnproto
git submodule update --init --recursive
autoreconf -f -i -s 
./configure
make
make check
```



# c-capnproto

C support for [Cap'n Proto](http://kentonv.github.io/capnproto), an efficient protocol for sharing data and capabilities.

[![Build Status](https://travis-ci.org/liamstask/c-capnproto.svg?branch=master)](https://travis-ci.org/liamstask/c-capnproto)

## status

This is a fork of [James McKaskill's great work](https://github.com/jmckaskill/c-capnproto), which has been untouched for a while, so I've been bringing it up to date with current cap'n proto progress, and doing some doc/testing work. Should the upstream fork become active again, I'd hope to merge any relevant changes back in.

## usage

The `compiler` directory contains the C language plugin (`capnpc-c`) for use with the `capnp` tool: https://capnproto.org/capnp-tool.html.

`capnp` will by default search `$PATH` for `capnpc-c` - if it's on your PATH, you can generate code for your schema as follows:

    $ capnp compile -o c myschema.capnp

Otherwise, you can specify the path to the c plugin:

    $ capnp compile -o ./capnpc-c myschema.capnp

`capnp` generates a C struct that corresponds to each capn proto struct, along with read/write functions that convert to/from capn proto form.

TBD whether it will make sense in the future to provide accessor functions for struct members, rather than converting entire structs.

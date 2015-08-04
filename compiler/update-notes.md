
occasionally, it may be required to sync with upstream capn proto changes. some quick notes on the process i've used here, assuming the updated capnproto repo is at CAPNP_CPP:

    $ cp ${CAPNP_CPP}/c++/src/capnp/test.capnp .
    $ cp ${CAPNP_CPP}/c++/src/capnp/schema.capnp .
    $ cp ${CAPNP_CPP}/c++/src/capnp/c++.capnp .

fix up `schema.capnp` to reference the in-tree copy of `c++.capnp` (ie, `using Cxx = import "c++.capnp";` at the top of the file)

then, regenerate the schema support:

    $ capnp compile -o ./capnpc-c compiler/schema.capnp

now try to regenerate again, based on the previously regenerated schema.

you can always check the capnpc formatted output during debugging:

    $ capnp compile -ocapnpc-capnpc compiler/schema.capnp

@0xd120e9a4c43868ab;

using C = import "../compiler/c.capnp";

$C.fieldgetset;

struct Greeting  {
  text @0 :Text = "Default greeting: hello world!";
  timesToSay @1 :UInt32;
}

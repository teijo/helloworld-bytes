Slightly obfuscated C program finding first offsets of "helo wrd"
=================================================================

A piece of old code found from disk and now archived to Github.

Run `./bytes.c` on *nix to get first byte offsets from random stream of
characters matching "helo wrd".

File self-compiles into a binary, runs, and then removes itself.

```
% ./bytes.c
{maybe some compiler warnings :)}
d: 0x13
r: 0x1E
h: 0x3F
l: 0x4F
w: 0x69
 : 0x77
o: 0xB3
e: 0x2A6
```

# kickc-segments

A project using
[kickc](https://gitlab.com/camelot/kickc) c compiler.

This illustrates a bug with segments not being used correctly in the generated asm.

e.g.

```
.segment Code2
// int main(int argc, char **argv)
main: {

```

however main should be in Code segment.

## Building

```
# build the xex
make

# run under altirra
make EMURUN=bin/segments.xex wine_altirra
```

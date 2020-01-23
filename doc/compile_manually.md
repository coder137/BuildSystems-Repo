- [Compile Manually](#compile-manually)
- [Simple program](#simple-program)
  - [One command](#one-command)
  - [Modular Approach](#modular-approach)
- [Simple program with multiple files](#simple-program-with-multiple-files)
- [Different include paths](#different-include-paths)
- [Adding static and dynamic libraries](#adding-static-and-dynamic-libraries)

# Compile Manually

Understanding how gcc/g++ is called when a program is to be compiled

# Simple program

## One command
```
gcc -o main.exe main.c
```
This gives you a main.exe executable that is compiled for the host machine

## Modular Approach
```
gcc -c main.c
gcc -o main.exe main.o
```
This gives you main.o as an intermediate however this is a more modular approach to the above method.

The strength of this method will be clear in the next section

# Simple program with multiple files

> TODO, 

# Different include paths

> TODO,

# Adding static and dynamic libraries

> TODO,

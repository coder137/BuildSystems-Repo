- [BuildSystems-Repo](#buildsystems-repo)
- [GCC](#gcc)
  - [Understanding GCC and Compilation Process](#understanding-gcc-and-compilation-process)
  - [Understanding GCC Flags](#understanding-gcc-flags)
- [Compiling Manually](#compiling-manually)
- [Compiling using CMAKE](#compiling-using-cmake)
- [Compiling using SCONS](#compiling-using-scons)

# BuildSystems-Repo

Learn how to build C/C++ programs manually as well as using build tools

# GCC

- Preprocess
- Compile
- Assemble
- Linking
  - [ ] Creating a static library
  - [ ] Link a static library
  - [ ] Creating a dynamic library
  - [ ] Link a dynamic library

## [Understanding GCC and Compilation Process](doc/understand_compile_process.md)

## Understanding GCC Flags

- [x] g, Debug Options
  - -g0, no debug information
  - -g1, minimal debug information
  - -g, default debug information
  - g3, maximal debug information
- [x] O, Optimization
  - -O0, optimize for compile time
  - -O1 or O, optimize for code size and execution time
  - -O2, optimize more over O1
  - -O3, optimize more over O2
  - -Os, optimize for code size
  - -Ofast, O3 with fast none accurate math calculations
- [x] [W, Warning](https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html)
  - -Wall 

- [ ] f, flag
- [ ] m, mode
- [ ] param
- [ ] specs
- [ ] std

# [Compiling Manually](doc/compile_manually.md)

Understanding how gcc/g++ is called when a program is to be compiled

# Compiling using CMAKE

> TODO

# Compiling using SCONS

> TODO

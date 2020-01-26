cmake_minimum_required(VERSION 3.10)

# TODO, Add your own Path to CMAKE_C_COMPILER and CMAKE_CXX_COMPILER
# NOTE, Make sure that you are using `forward slash -> /` instead of `back slash -> \`
set(CMAKE_C_COMPILER "C:/ProgramData/chocolatey/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/ProgramData/chocolatey/bin/g++.exe")

project(Simple)
add_executable(Simple main.c)

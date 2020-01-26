cmake_minimum_required(VERSION 3.10)

# TODO, Add your own Path to CMAKE_C_COMPILER and CMAKE_CXX_COMPILER
# NOTE, Make sure thgat you are using `forward slash -> /` instead of `back slash -> \`
set(CMAKE_C_COMPILER "C:/ProgramData/chocolatey/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/ProgramData/chocolatey/bin/g++.exe")

project(Multiple_Files)
add_executable(Multiple_Files 
  main.c
  test.c
)

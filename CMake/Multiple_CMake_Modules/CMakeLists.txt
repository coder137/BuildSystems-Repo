cmake_minimum_required(VERSION 3.16)

set(CMAKE_VERBOSE_MAKEFILE ON)

# TODO, Add your own Path to CMAKE_C_COMPILER and CMAKE_CXX_COMPILER
# NOTE, Make sure thgat you are using `forward slash -> /` instead of `back slash -> \`
set(CMAKE_C_COMPILER "C:/ProgramData/chocolatey/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/ProgramData/chocolatey/bin/g++.exe")

project(Multiple_CMake_Modules)
message("project_name: ${PROJECT_NAME}")

add_subdirectory(submodule)
add_executable(${PROJECT_NAME} 
  main.c
  src/test.c
)

target_include_directories(${PROJECT_NAME} PRIVATE include)
target_link_libraries(${PROJECT_NAME} PRIVATE submodule)
target_link_libraries(${PROJECT_NAME} PRIVATE m)

add_custom_target(run 
  COMMAND ${PROJECT_NAME}
  DEPENDS ${PROJECT_BINARY_DIR}/${PROJECT_NAME}
  VERBATIM
  USES_TERMINAL
)

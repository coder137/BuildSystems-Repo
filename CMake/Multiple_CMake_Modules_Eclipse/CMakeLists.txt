cmake_minimum_required(VERSION 3.16)

project(Multiple_CMake_Modules_Eclipse)
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


message("Running submodule")

add_library(submodule 
  hello.c 
)

target_include_directories(submodule PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

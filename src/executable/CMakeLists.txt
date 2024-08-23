
add_executable(executable)
target_sources(executable
 PRIVATE
  main.cpp)

target_link_libraries(executable
 PRIVATE
  cmake_example::library
  fmt::fmt)

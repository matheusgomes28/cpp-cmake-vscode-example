add_library(library)

target_sources(library
 PRIVATE
  library.cpp
 PUBLIC
  include/library/library.hpp)

target_include_directories(library PUBLIC include)
target_link_libraries(library PRIVATE fmt::fmt)

add_library(cmake_example::library ALIAS library)

cmake_minimum_required(VERSION 3.21)
project(CmakeCppExample LANGUAGES CXX)

# Global C++ standard settings:
#   - Use C++ 17
#   - Require C++ 17 support from compiler
#   - Dissalow compiler-specific extensions
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

# Adding fmt with FetchContent
include(FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY "https://github.com/fmtlib/fmt"
    GIT_TAG "11.0.2"
    GIT_SHALLOW On
)
FetchContent_MakeAvailable(fmt)

# Add our library and the main
# executable to the build
add_subdirectory(src/library)
add_subdirectory(src/executable)

#include <library/library.hpp>

#include <fmt/format.h>

#include <vector>

int main()
{
    std::vector<int> const test{1, 2, 3, 4, 5};
    library::say_hello();
    fmt::println("Hello from the executable");
}

#include <iostream>

#include "Foo.hpp"

int main(int const argc, char const* const* argv) {
  auto foo = qux::Foo<int, 2>{};
  std::cout << foo[0] << std::endl;
  return 0;
}

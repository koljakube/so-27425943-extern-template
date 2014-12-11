#ifndef FOO_HPP
#define FOO_HPP

#include <array>

namespace qux {

using Int = int;

template <typename T, std::size_t N>
class Foo {
public:
  using size_type = std::size_t;

  constexpr Foo() : Foo{T{}} {}

  constexpr Foo(T const& val) {
    for (auto& el : _data) {
      el = val;
    }
  }

  constexpr auto operator[](size_type index) const -> T {
    return _data[index];
  }

private:
  std::array<T, N> _data;
};

extern template class Foo<Int, 2>;

}

#endif

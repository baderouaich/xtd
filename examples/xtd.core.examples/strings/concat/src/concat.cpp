#include <xtd/console>
#include <xtd/string>

using namespace xtd;

auto main() -> int {
  console::write_line(ustring::concat("Hello", ", ", "World", "!"));
}

// This code produces the following output :
//
// Hello, World!

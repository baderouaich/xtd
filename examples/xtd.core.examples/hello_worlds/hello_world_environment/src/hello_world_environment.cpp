#include <xtd/xtd>

using namespace xtd;

auto main()->int {
  console::write_line("Hello, {}!", environment::user_name());
}

// This code can produces the following output:
//
// Hello, gammasoft71!

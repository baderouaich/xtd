#include <xtd/xtd>
#include <string>

using namespace std;
using namespace xtd::tunit;

namespace unit_tests {
  class test_class_(hello_world_test) {
  public:
    void test_method_(create_string_from_literal) {
      string s = "Hello, World!";
      assert::are_equal("Hello, World!", s);
    }
    
    void test_method_(create_string_from_chars) {
      string s = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
      assert::are_equal("Hello, World!", s);
    }
  };
}

// The main entry point for the application.
int main(int argc, char* argv[]) {
  return console_unit_test(argv, argc).run();
}

// This code produces the following output:
//
// SStart 2 tests from 1 test case
// Run tests:
//   SUCCEED hello_world_test.create_string_from_literal (0 ms total)
//   SUCCEED hello_world_test.create_string_from_chars (0 ms total)
//
// Test results:
//   SUCCEED 2 tests.
// End 2 tests from 1 test case ran. (0 ms total)

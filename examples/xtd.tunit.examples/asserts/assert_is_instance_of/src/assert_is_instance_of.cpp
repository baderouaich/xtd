#include <xtd/xtd.tunit>
#include <stdexcept>

using namespace xtd::tunit;

namespace unit_tests {
  class test_class_(test) {
    void test_method_(test_case_succeed) {
      auto except = std::invalid_argument {"invalid argument"};
      assert::is_instance_of<std::logic_error>(except);
    }
    
    void test_method_(test_case_failed) {
      auto except = std::invalid_argument {"invalid argument"};
      assert::is_instance_of<std::bad_cast>(except);
    }
  };
}

auto main() -> int {
  return console_unit_test().run();
}

// This code produces the following output :
//
// Start 2 tests from 1 test case
// Run tests:
//   SUCCEED unit_tests::test.test_case_succeed (0 ms total)
//   FAILED  unit_tests::test.test_case_failed (0 ms total)
//     Expected: instance of <std::bad_cast>
//     But was:  <std::invalid_argument>
//     Stack Trace: in |---OMITTED---|/assert_is_instance_of.cpp:16
//
// Test results:
//   SUCCEED 1 test.
//   FAILED  1 test.
// End 2 tests from 1 test case ran. (0 ms total)

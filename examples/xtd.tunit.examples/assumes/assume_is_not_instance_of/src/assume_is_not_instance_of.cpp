#include <xtd/xtd.tunit>
#include <stdexcept>

using namespace xtd::tunit;

namespace unit_tests {
  class test_class_(test) {
    void test_method_(test_case_succeed) {
      std::invalid_argument except("invalid argument");
      assume::is_not_instance_of<std::bad_cast>(except);
    }
    
    void test_method_(test_case_aborted) {
      std::invalid_argument except("invalid argument");
      assume::is_not_instance_of<std::logic_error>(except);
    }
  };
}

int main() {
  return console_unit_test().run();
}

// This code produces the following output :
//
// Start 2 tests from 1 test case
// Run tests:
//   SUCCEED unit_tests::test.test_case_succeed (0 ms total)
//   ABORTED test.test_case_aborted (0 ms total)
//     Expected: not instance of <std::logic_error>
//     But was:  <std::invalid_argument>
//     Stack Trace: in |---OMITTED---|/assume_is_not_instance_of.cpp:16
//
// Test results:
//   SUCCEED 1 test.
//   ABORTED 1 test.
// End 2 tests from 1 test case ran. (0 ms total)

#include <xtd/tunit/assert.h>
#include <xtd/tunit/test_class_attribute.h>
#include <xtd/tunit/test_method_attribute.h>
#include "../../../assert_unit_tests/assert_unit_tests.h"
#include <vector>

namespace xtd::tunit::tests {
  class test_class_(assert_is_empty_collection_failed_tests) {
  public:
    void test_method_(test_case_failed) {
      std::vector v = {0, 1, 2, 3};
      xtd::tunit::assert::is_empty(v);
    }
  };
}

void test_(assert_is_empty_collection_failed_tests, test_output) {
  auto [output, result] = run_test_("assert_is_empty_collection_failed_tests.*");
  assert_value_("Start 1 test from 1 test case\n"
    "  FAILED  assert_is_empty_collection_failed_tests.test_case_failed\n"
    "    Expected: collection <empty>\n"
    "    But was:  < 0, 1, 2, 3 >\n"
    "End 1 test from 1 test case ran.\n", output);
}

void test_(assert_is_empty_collection_failed_tests, test_result) {
  auto [output, result] = run_test_("assert_is_empty_collection_failed_tests.*");
  assert_value_(1, result);
}

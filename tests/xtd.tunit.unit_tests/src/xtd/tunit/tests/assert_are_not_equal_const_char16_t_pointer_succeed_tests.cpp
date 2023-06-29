#include <xtd/tunit/assert.h>
#include <xtd/tunit/test_class_attribute.h>
#include <xtd/tunit/test_method_attribute.h>
#include "../../../assert_unit_tests/assert_unit_tests.h"

namespace xtd::tunit::tests {
  class test_class_(assert_are_not_equal_const_char16_t_pointer_succeed_tests) {
  public:
    void test_method_(test_case_succeed) {
      const char16* s = u"string";
      xtd::tunit::assert::are_not_equal(u"str", s);
    }
  };
}

void test_(assert_are_not_equal_const_char16_t_pointer_succeed_tests, test_output) {
  auto [output, result] = run_test_("assert_are_not_equal_const_char16_t_pointer_succeed_tests.*");
  assert_value_("Start 1 test from 1 test case\n"
    "  SUCCEED assert_are_not_equal_const_char16_t_pointer_succeed_tests.test_case_succeed\n"
    "End 1 test from 1 test case ran.\n", output);
}

void test_(assert_are_not_equal_const_char16_t_pointer_succeed_tests, test_result) {
  auto [output, result] = run_test_("assert_are_not_equal_const_char16_t_pointer_succeed_tests.*");
  assert_value_(0, result);
}

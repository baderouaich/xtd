#include "../../../assert_unit_tests/assert_unit_tests.h"
#include <xtd/xtd.tunit>
#include <memory>

namespace xtd::tunit::tests {
  class test_class_(assert_is_null_shared_ptr_succeed_tests) {
  public:
    void test_method_(test_case_succeed) {
      std::shared_ptr<int> p;
      xtd::tunit::assert::is_null(p);
    }
  };
}

void test_(assert_is_null_shared_ptr_succeed_tests, test_output) {
  xtd::tunit::settings::default_settings().exit_status(0);
  xtd::tunit::settings::default_settings().filter_tests("assert_is_null_shared_ptr_succeed_tests.*");
  std::stringstream ss;
  xtd::tunit::unit_test(std::make_unique<assert_unit_tests::unit_tests_event_listener>(ss)).run();
  assert_value_("Start 1 test from 1 test case\n"
    "  SUCCEED assert_is_null_shared_ptr_succeed_tests.test_case_succeed\n"
    "End 1 test from 1 test case ran.\n", ss.str());
}

void test_(assert_is_null_shared_ptr_succeed_tests, test_result) {
  xtd::tunit::settings::default_settings().exit_status(0);
  xtd::tunit::settings::default_settings().filter_tests("assert_is_null_shared_ptr_succeed_tests.*");
  std::stringstream ss;
  assert_value_(0, xtd::tunit::unit_test(std::make_unique<assert_unit_tests::unit_tests_event_listener>(ss)).run());
}

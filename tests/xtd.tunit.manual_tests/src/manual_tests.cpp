#include <xtd/tunit>

using namespace xtd::tunit;

namespace unit_tests {
  class test_class_(manual_test) {
  public:
    void test_method_(test_case1) {
      valid::are_equal_(42, 24);
      assert::are_equal_(12, 42);
      valid::are_equal_(45, 24);
    }
  };
}

int main(int argc, char* argv[]) {
  return console_unit_test(argv, argc).run();
}

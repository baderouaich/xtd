#include <xtd/console>
#include <xtd/environment>
#include <xtd/iformatable>

using namespace std;
using namespace xtd;

class foo : public object, public iformatable {
public:
  explicit foo(int value) : value_ {value} {}
  
  using object::to_string;
  ustring to_string(const ustring& format, const locale& loc) const override {return ustring::format(ustring::format("{{:{}}}", format), value_);}
  
private:
  int value_ = 0;
};

auto main() -> int {
  auto f = foo {42};  
  console::out << "standard output :" << environment::new_line;
  console::out << "  " << f << environment::new_line;
  console::out << "  " << f.to_string() << environment::new_line;
  console::out << ustring::format("  {}", f) << environment::new_line;
  console::out << ustring::format("  0b{:b8}", f) << environment::new_line;
  console::out << "  0b" << f.to_string("b8", locale {}) << environment::new_line;
  console::write_line();

  console::write_line("write_line :");
  console::write("  ");
  console::write_line(f);
  console::write("  ");
  console::write_line(f.to_string());
  console::write_line("  {}", f);
  console::write_line("  0b{:b8}", f);
  console::write("  0b");
  console::write_line(f.to_string("b8", locale {}));
}

// This code produces the following output :
//
// standard output :
//   42
//   42
//   42
//   0b00101010
//   0b00101010
//
// write_line :
//   42
//   42
//   42
//   0b00101010
//   0b00101010

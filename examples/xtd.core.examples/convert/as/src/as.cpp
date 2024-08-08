#include <xtd/as>
#include <xtd/console>
#include <xtd/convert>
#include <xtd/random>

using namespace xtd;

auto main() -> int {
  double d = 41.6;
  int i1 = convert::to_int32(d);
  int i2 = as<int>(d);
  console::write_line("d = {0}, convert::to_int32(d) = {1}, as<int>(d) = {2}", d, i1, i2);
  
  int i = 42;
  ustring s1 = convert::to_string(i);
  ustring s2 = as<ustring>(i);
  console::write_line("i = {0}, convert::to_string(i) = {1}, as<ustring>(i) = {2}", i, s1, s2);
  
  std::any a = "string";
  s1 = convert::to_string(a);
  s2 = as<ustring>(a);
  console::write_line("a = {0}, convert::to_string(a) = {1}, as<ustring>(a) = {2}", a, s1, s2);
  
  ptr<object> value = new_ptr<ustring>("a");
  ptr<ustring> value2 = as<ustring>(value);
  console::write_line("value = {0}, as<ustring>(value) = {1}", *value, *value2);
  
  xtd::random rand;
  try {
    console::write_line("as<ustring>(rand) = {0}", as<ustring>(rand));
  } catch (const invalid_cast_exception& e) {
    console::write_line("Bad cast : {0} !", e.message());
  }
  
  ptr<object> ver = new_ptr<version>(1, 1, 5);
  ptr<ustring> str = as<ustring>(ver);
  if (str == nullptr)
    console::write_line("Bad cast!");
}

// This code produces the following output :
//
// d = 41.6, convert::to_int32(d) = 42, as<int>(d) = 42
// i = 42, convert::to_string(i) = 42, as<ustring>(i) = 42
// a = string, convert::to_string(a) = string, as<ustring>(a) = string
// value = a, as<ustring>(value) = a
// Bad cast : std::bad_cast !
// Bad cast!

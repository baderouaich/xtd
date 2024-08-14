#include <xtd/console>
#include <xtd/environment>
#include <xtd/ustring>

using namespace std;
using namespace xtd;

enum class cap { title, middle, end };

void print_number(ustring text, int value, cap c) {
  if (c == cap::title)
    console::out << "┌───────────┬────────────┬──────────────────────────────────┐" << environment::new_line
                 << "│  number   │   format   │      representation              │" << environment::new_line
                 << "├───────────┼────────────┼──────────────────────────────────┤" << environment::new_line;
  
  console::out << "│ " << text.pad_right(9) << " │ {}         │ " << ustring::format("{}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:b}       │ " << ustring::format("{:b}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:b32}     │ " << ustring::format("{:b32}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:B}       │ " << ustring::format("{:B}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:B32}     │ " << ustring::format("{:B32}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:c}       │ " << ustring::format("{:c}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:C}       │ " << ustring::format("{:C}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:d}       │ " << ustring::format("{:d}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:d16}     │ " << ustring::format("{:d16}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:D}       │ " << ustring::format("{:D}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:D16}     │ " << ustring::format("{:D16}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:e}       │ " << ustring::format("{:e}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:E}       │ " << ustring::format("{:E}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:f}       │ " << ustring::format("{:f}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:f4}      │ " << ustring::format("{:f4}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:F}       │ " << ustring::format("{:F}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:F4}      │ " << ustring::format("{:F4}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:g}       │ " << ustring::format("{:g}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:G}       │ " << ustring::format("{:G}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:o}       │ " << ustring::format("{:o}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:o16}     │ " << ustring::format("{:o16}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:O}       │ " << ustring::format("{:O}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:O16}     │ " << ustring::format("{:O16}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:n}       │ " << ustring::format("{:n}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:N}       │ " << ustring::format("{:N}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:p}       │ " << ustring::format("{:p}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:P}       │ " << ustring::format("{:P}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:x}       │ " << ustring::format("{:x}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:x16}     │ " << ustring::format("{:x16}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:X}       │ " << ustring::format("{:X}", value).pad_right(32) << " |" << environment::new_line;
  console::out << "│ " << text.pad_right(9) << " │ {:X16}     │ " << ustring::format("{:X16}", value).pad_right(32) << " |" << environment::new_line;

  if (c != cap::end)
    console::out << "├───────────┼────────────┼──────────────────────────────────┤" << environment::new_line;
  else
    console::out << "└───────────┴────────────┴──────────────────────────────────┘" << environment::new_line;
}


auto main() -> int {
  locale::global(locale {"en_US.UTF-8"}); // change to us for currency
  print_number("0", 0, cap::title);
  print_number("42", 42, cap::middle);
  print_number("123456789", 123456789, cap::end);
}

// This code produces the following output :
//
// ┌───────────┬────────────┬──────────────────────────────────┐
// │  number   │   format   │      representation              │
// ├───────────┼────────────┼──────────────────────────────────┤
// │ 0         │ {}         │ 0                                │
// │ 0         │ {:b}       │ 0                                │
// │ 0         │ {:b32}     │ 00000000000000000000000000000000 │
// │ 0         │ {:B}       │ 0                                │
// │ 0         │ {:B32}     │ 00000000000000000000000000000000 │
// │ 0         │ {:c}       │ $0.00                            │
// │ 0         │ {:C}       │ $0.00                            │
// │ 0         │ {:d}       │ 0                                │
// │ 0         │ {:d16}     │ 0000000000000000                 │
// │ 0         │ {:D}       │ 0                                │
// │ 0         │ {:D16}     │ 0000000000000000                 │
// │ 0         │ {:e}       │ 0.000000e+00                     │
// │ 0         │ {:E}       │ 0.000000E+00                     │
// │ 0         │ {:f}       │ 0.00                             │
// │ 0         │ {:f4}      │ 0.0000                           │
// │ 0         │ {:F}       │ 0.00                             │
// │ 0         │ {:F4}      │ 0.0000                           │
// │ 0         │ {:g}       │ 0                                │
// │ 0         │ {:G}       │ 0                                │
// │ 0         │ {:o}       │ 0                                │
// │ 0         │ {:o16}     │ 0000000000000000                 │
// │ 0         │ {:O}       │ 0                                │
// │ 0         │ {:O16}     │ 0000000000000000                 │
// │ 0         │ {:n}       │ 0.00                             │
// │ 0         │ {:N}       │ 0.00                             │
// │ 0         │ {:p}       │ 0.00 %                           │
// │ 0         │ {:P}       │ 0.00 %                           │
// │ 0         │ {:x}       │ 0                                │
// │ 0         │ {:x16}     │ 0000000000000000                 │
// │ 0         │ {:X}       │ 0                                │
// │ 0         │ {:X16}     │ 0000000000000000                 │
// ├───────────┼────────────┼──────────────────────────────────┤
// │ 42        │ {}         │ 42                               │
// │ 42        │ {:b}       │ 101010                           │
// │ 42        │ {:b32}     │ 00000000000000000000000000101010 │
// │ 42        │ {:B}       │ 101010                           │
// │ 42        │ {:B32}     │ 00000000000000000000000000101010 │
// │ 42        │ {:c}       │ $42.00                           │
// │ 42        │ {:C}       │ $42.00                           │
// │ 42        │ {:d}       │ 42                               │
// │ 42        │ {:d16}     │ 0000000000000042                 │
// │ 42        │ {:D}       │ 42                               │
// │ 42        │ {:D16}     │ 0000000000000042                 │
// │ 42        │ {:e}       │ 4.200000e+01                     │
// │ 42        │ {:E}       │ 4.200000E+01                     │
// │ 42        │ {:f}       │ 42.00                            │
// │ 42        │ {:f4}      │ 42.0000                          │
// │ 42        │ {:F}       │ 42.00                            │
// │ 42        │ {:F4}      │ 42.0000                          │
// │ 42        │ {:g}       │ 42                               │
// │ 42        │ {:G}       │ 42                               │
// │ 42        │ {:o}       │ 52                               │
// │ 42        │ {:o16}     │ 0000000000000052                 │
// │ 42        │ {:O}       │ 52                               │
// │ 42        │ {:O16}     │ 0000000000000052                 │
// │ 42        │ {:n}       │ 42.00                            │
// │ 42        │ {:N}       │ 42.00                            │
// │ 42        │ {:p}       │ 4200.00 %                        │
// │ 42        │ {:P}       │ 4200.00 %                        │
// │ 42        │ {:x}       │ 2a                               │
// │ 42        │ {:x16}     │ 000000000000002a                 │
// │ 42        │ {:X}       │ 2A                               │
// │ 42        │ {:X16}     │ 000000000000002A                 │
// ├───────────┼────────────┼──────────────────────────────────┤
// │ 123456789 │ {}         │ 123456789                        │
// │ 123456789 │ {:b}       │ 111010110111100110100010101      │
// │ 123456789 │ {:b32}     │ 00000111010110111100110100010101 │
// │ 123456789 │ {:B}       │ 111010110111100110100010101      │
// │ 123456789 │ {:B32}     │ 00000111010110111100110100010101 │
// │ 123456789 │ {:c}       │ $123,456,789.00                  │
// │ 123456789 │ {:C}       │ $123,456,789.00                  │
// │ 123456789 │ {:d}       │ 123456789                        │
// │ 123456789 │ {:d16}     │ 0000000123456789                 │
// │ 123456789 │ {:D}       │ 123456789                        │
// │ 123456789 │ {:D16}     │ 0000000123456789                 │
// │ 123456789 │ {:e}       │ 1.234568e+08                     │
// │ 123456789 │ {:E}       │ 1.234568E+08                     │
// │ 123456789 │ {:f}       │ 123456789.00                     │
// │ 123456789 │ {:f4}      │ 123456789.0000                   │
// │ 123456789 │ {:F}       │ 123456789.00                     │
// │ 123456789 │ {:F4}      │ 123456789.0000                   │
// │ 123456789 │ {:g}       │ 123456789                        │
// │ 123456789 │ {:G}       │ 123456789                        │
// │ 123456789 │ {:o}       │ 726746425                        │
// │ 123456789 │ {:o16}     │ 0000000726746425                 │
// │ 123456789 │ {:O}       │ 726746425                        │
// │ 123456789 │ {:O16}     │ 0000000726746425                 │
// │ 123456789 │ {:n}       │ 123,456,789.00                   │
// │ 123456789 │ {:N}       │ 123,456,789.00                   │
// │ 123456789 │ {:p}       │ 12345678900.00 %                 │
// │ 123456789 │ {:P}       │ 12345678900.00 %                 │
// │ 123456789 │ {:x}       │ 75bcd15                          │
// │ 123456789 │ {:x16}     │ 00000000075bcd15                 │
// │ 123456789 │ {:X}       │ 75BCD15                          │
// │ 123456789 │ {:X16}     │ 00000000075BCD15                 │
// └───────────┴────────────┴──────────────────────────────────┘

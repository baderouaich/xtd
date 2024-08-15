#include <xtd/console>
#include <xtd/environment>
#include <xtd/string>

using namespace xtd;

enum class cap {title, middle, end};

void print_character(ustring text, char32 value, cap c) {
  if (c == cap::title)
    console::out << "┌───────────┬────────────┬──────────────────────────────────┐" << environment::new_line
                 << "│  char     │   format   │      representation              │" << environment::new_line
                 << "├───────────┼────────────┼──────────────────────────────────┤" << environment::new_line;
  
  console::out <<  "│ " << text.pad_right<char32>(9) << " │ {}         │ " << ustring::format("{}", value).pad_right<char32>(32) << " |" << environment::new_line;
  console::out <<  "│ " << text.pad_right<char32>(9) << " │ {:g}       │ " << ustring::format("{:g}", value).pad_right<char32>(32) << " |" << environment::new_line;
  console::out <<  "│ " << text.pad_right<char32>(9) << " │ {:G}       │ " << ustring::format("{:G}", value).pad_right<char32>(32) << " |" << environment::new_line;
  console::out <<  "│ " << text.pad_right<char32>(9) << " │ {:d}       │ " << ustring::format("{:d}", value).pad_right<char32>(32) << " |" << environment::new_line;
  console::out <<  "│ " << text.pad_right<char32>(9) << " │ {:D}       │ " << ustring::format("{:D}", value).pad_right<char32>(32) << " |" << environment::new_line;
  console::out <<  "│ " << text.pad_right<char32>(9) << " │ {:x}       │ " << ustring::format("{:x}", value).pad_right<char32>(32) << " |" << environment::new_line;
  console::out <<  "│ " << text.pad_right<char32>(9) << " │ {:X}       │ " << ustring::format("{:X}", value).pad_right<char32>(32) << " |" << environment::new_line;
  console::out <<  "│ " << text.pad_right<char32>(9) << " │ {:ANY_FMT} │ " << ustring::format("{:ANY_FMT}", value).pad_right<char32>(32) << " |" << environment::new_line;

  if (c != cap::end)
    console::out << "├───────────┼────────────┼──────────────────────────────────┤" << environment::new_line;
  else
    console::out << "└───────────┴────────────┴──────────────────────────────────┘" << environment::new_line;
}

auto main() -> int {
  console::output_code_page(65001);
  
  print_character(ustring {'a'}, 'a', cap::title);
  print_character(ustring {u8'1'}, u8'1', cap::middle);
  print_character(ustring {L'\x1F603'}, L'\x1F603', cap::middle);
  print_character(ustring {u'\u4eb0'}, u'\u4eb0', cap::middle);
  print_character(ustring {U'\U0001F428'}, U'\U0001F428', cap::end);
}
  
// This code produces the following output :
//
// ┌───────────┬────────────┬──────────────────────────────────┐
// │  char     │   format   │      representation              │
// ├───────────┼────────────┼──────────────────────────────────┤
// │ a         │ {}         │ a                                |
// │ a         │ {:g}       │ a                                |
// │ a         │ {:G}       │ a                                |
// │ a         │ {:d}       │ a                                |
// │ a         │ {:D}       │ a                                |
// │ a         │ {:x}       │ a                                |
// │ a         │ {:X}       │ a                                |
// │ a         │ {:ANY_FMT} │ a                                |
// ├───────────┼────────────┼──────────────────────────────────┤
// │ 1         │ {}         │ 1                                |
// │ 1         │ {:g}       │ 1                                |
// │ 1         │ {:G}       │ 1                                |
// │ 1         │ {:d}       │ 1                                |
// │ 1         │ {:D}       │ 1                                |
// │ 1         │ {:x}       │ 1                                |
// │ 1         │ {:X}       │ 1                                |
// │ 1         │ {:ANY_FMT} │ 1                                |
// ├───────────┼────────────┼──────────────────────────────────┤
// │ 😃         │ {}         │ 😃                                |
// │ 😃         │ {:g}       │ 😃                                |
// │ 😃         │ {:G}       │ 😃                                |
// │ 😃         │ {:d}       │ 😃                                |
// │ 😃         │ {:D}       │ 😃                                |
// │ 😃         │ {:x}       │ 😃                                |
// │ 😃         │ {:X}       │ 😃                                |
// │ 😃         │ {:ANY_FMT} │ 😃                                |
// ├───────────┼────────────┼──────────────────────────────────┤
// │ 亰         │ {}         │ 亰                                |
// │ 亰         │ {:g}       │ 亰                                |
// │ 亰         │ {:G}       │ 亰                                |
// │ 亰         │ {:d}       │ 亰                                |
// │ 亰         │ {:D}       │ 亰                                |
// │ 亰         │ {:x}       │ 亰                                |
// │ 亰         │ {:X}       │ 亰                                |
// │ 亰         │ {:ANY_FMT} │ 亰                                |
// ├───────────┼────────────┼──────────────────────────────────┤
// │ 🐨         │ {}         │ 🐨                                |
// │ 🐨         │ {:g}       │ 🐨                                |
// │ 🐨         │ {:G}       │ 🐨                                |
// │ 🐨         │ {:d}       │ 🐨                                |
// │ 🐨         │ {:D}       │ 🐨                                |
// │ 🐨         │ {:x}       │ 🐨                                |
// │ 🐨         │ {:X}       │ 🐨                                |
// │ 🐨         │ {:ANY_FMT} │ 🐨                                |
// └───────────┴────────────┴──────────────────────────────────┘

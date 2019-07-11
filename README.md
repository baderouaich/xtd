[![console](docs/pictures/header.png)](https://gammasoft71.wixsite.com/xtd-console)

[![Build Status](https://travis-ci.org/gammasoft71/xtd.svg?branch=master)](https://travis-ci.org/gammasoft71/xtd)
[![Build status](https://ci.appveyor.com/api/projects/status/uqn1xbctwy88eghu?svg=true)](https://ci.appveyor.com/project/gammasoft71/xtd)
[![codecov](https://codecov.io/gh/gammasoft71/xtd/branch/master/graph/badge.svg)](https://codecov.io/gh/gammasoft71/xtd)
[![Documentation](https://codedocs.xyz/gammasoft71/xtd.svg)](https://codedocs.xyz/gammasoft71/xtd/)
[![Website](https://img.shields.io/website-up-down-green-red/http/shields.io.svg?label=xtd-console%20website)](https://gammasoft71.wixsite.com/xtd-console)
[![license](https://img.shields.io/github/license/gammasoft71/xtd.svg)](LICENSE.md)
[![Download xtd](https://img.shields.io/sourceforge/dt/xtdpro.svg)](https://sourceforge.net/projects/xtdpro/files/latest/download)
[![GitHub top language](https://img.shields.io/github/languages/top/gammasoft71/xtd.svg)](README.md)
[![Windows](https://img.shields.io/badge/os-Windows-004080.svg)](README.md)
[![macOS](https://img.shields.io/badge/os-macOS-004080.svg)](README.md)
[![Linux](https://img.shields.io/badge/os-Linux-004080.svg)](README.md)

# Features

For more information see [Documentation](docs).

# Examples

The classic first application 'Hello World'.

## Console

src/hello_world_console.cpp:

```c++
#include <xtd/xtd>
#include <string>

using namespace std;
using namespace xtd;

// The main entry point for the application.
int main() {
  const char* s1 = "Hello,";
  string s2 = "World!";
  
  console::out << background_color(console_color::cyan);
  cout << foreground_color(console_color::yellow);
  cout << format("{}{,7}", s1, s2);
  cout << reset_color() << endl;
  
  console::out << background_color(console_color::white);
  console::out << foreground_color(console_color::black);
  console::out << format("{}{,7}", s1, s2);
  console::out << reset_color() << endl;
  
  console::background_color(console_color::blue);
  console::foreground_color(console_color::white);
  console::write_line("{}{,7}", s1, s2);
  console::reset_color();
}
```

CMakeLists.txt:

```cmake
cmake_minimum_required(VERSION 3.3)

project(hello_world_console)
find_package(xtd REQUIRED)
add_executable(${PROJECT_NAME} src/hello_world_console.cpp)
target_link_libraries(${PROJECT_NAME} xtd)
```

## Forms

src/hello_world_forms.cpp:

```c++
#include <xtd/xtd>

using namespace xtd;
using namespace xtd::drawing;
using namespace xtd::forms;

// The main entry point for the application.
int main() {
  application::enable_visual_styles();
  
  button button1;
  button1.text("Click me");
  button1.location(point(10, 10));
  button1.click += [&](const control& sender, const event_args& e) {
    message_box::show("Hello, World!");
  };
  
  form form1;
  form1.text("Hello World Form");
  form.controls().push_back(button1);
  
  application::run(form1);
}
```

CMakeLists.txt:

```cmake
cmake_minimum_required(VERSION 3.3)

project(hello_world_forms)
find_package(xtd REQUIRED)
add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE src/hello_world_forms.cpp)
target_link_libraries(${PROJECT_NAME} xtd)
```

## Unit tests

src/hello_world_tunit.cpp:

```c++
#include <xtd/xtd>
#include <string>

using namespace std;
using namespace xtd::tunit;

namespace unit_tests {
  class test_class_(hello_world_test) {
  public:
    void test_method_(create_string_from_literal) {
      string s = "Hello, World!";
      valid::are_equal(13, s.size());
      assert::are_equal("Hello, World!", s);
    }
    
    void test_method_(create_string_from_chars) {
      string s = {'H', 'e', 'l', 'l', 'o', ',', ' ', 'W', 'o', 'r', 'l', 'd', '!'};
      valid::are_equal(13, s.size());
      string_assert::starts_with("Hello,", s);
      string_assert::ends_with(" World!", s);
    }
  };
}

// The main entry point for the application.
int main(int argc, char* argv[]) {
  return console_unit_test(argv, argc).run();
}
```

CMakeLists.txt:

```cmake
cmake_minimum_required(VERSION 3.3)

project(hello_world_tunit)
find_package(xtd REQUIRED)
add_executable(${PROJECT_NAME} src/hello_world_tunit.cpp)
target_link_libraries(${PROJECT_NAME} xtd)
```

For more examples see [examples](examples)

# Download and install

Before running examples you must download and install xtd. To download and install it read Downloads file.


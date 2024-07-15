#include <xtd/collections/generic/list>
#include <xtd/background_color>
#include <xtd/foreground_color>
#include <xtd/reset_color>

using namespace std;
using namespace xtd;
using namespace xtd::collections;

auto main() -> int {
  const auto logo = generic::list {
    u8"████████████████████████████████████████████████████████████",
    u8"██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████",
    u8"██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████",
    u8"██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░██████████",
    u8"██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████",
    u8"██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████",
    u8"██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████",
    u8"███████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░█████████████",
    u8"██████████████████████████████████████████████████████████████████████",
    u8"██████████████████████████████████████████████████████████████████████",
    u8"██████████████████████████▀▄▄▄▄▀███████▀▄▄▄▄▀█████████████████████████",
    u8"███████████████████████████▀▀▀▀███████▀▀▀▀▀███████████████████████████",
    u8"██████████████████████████      ▀████       ▀█████████████████████████",
    u8"███████████             ▐         ▀▀         ▐              ██████████",
    u8"█████████               ▐   ███   ▌▐   ███   ▐               █████████",
    u8"█████████               ▐   █▄▄▌  ▌▐  ▐▄▄█   ▐               █████████",
    u8"█████████                ▐▄  ▀▀ ▄▀  ▀▄ ▀▀  ▄▀                █████████",
    u8"█████████                  ▀▀▄▄▀      ▀▀▄▄▀                  █████████",
    u8"█████████                                                    █████████",
    u8"█████████                 █▄                ▌                █████████",
    u8"█████████                  ▌▀▀▄          ▄██                 █████████",
    u8"█████████                  ▐   ▀▀▄▄▄▄▄▄█▀ █▌                 █████████",
    u8"█████████                   ▐            ▄█                  █████████",
    u8"█████████                    █          ▄█                   █████████",
    u8"█████████                     ▀▄       █▀                    █████████",
    u8"█████████                       ▀▄▄▄▄██▀                     █████████",
    u8"█████████                                                    █████████",
    u8"█████████                                                    █████████",
    u8"█████████                                                    █████████",
    u8"█████████                                                    █████████",
    u8"█████████                                                    █████████",
    u8"██████████████████████████████████████████████████████████████████",
  };
  
  console::output_code_page(65001);
  
  for (auto index = 0ul; index < logo.size(); ++index)
    cout << (index == 0 || index == logo.size() - 1 ? "       " : "     ") << background_color(console_color::white) << foreground_color(console_color::dark_blue) << logo[index] << reset_color() << endl;
    
  cout << foreground_color(console_color::dark_blue) << "                                    Gammasoft                                   " << endl;
  cout << foreground_color(console_color::dark_gray) << " More than thirty years of passion for high technology especially in development" << endl;
  cout << " (c++, c#, objective-c, ...)." << reset_color() << endl;
}

// This code produces the following output with colors:
//
//        ████████████████████████████████████████████████████████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░██████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░██████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
//      ██████████████████████████████░░░░░░░░░░░░░░░░░░░░░░████░░████████████
//      ███████████████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░█████████████
//      ██████████████████████████████████████████████████████████████████████
//      ██████████████████████████████████████████████████████████████████████
//      ██████████████████████████▀▄▄▄▄▀███████▀▄▄▄▄▀█████████████████████████
//      ███████████████████████████▀▀▀▀███████▀▀▀▀▀███████████████████████████
//      ██████████████████████████      ▀████       ▀█████████████████████████
//      ███████████             ▐         ▀▀         ▐              ██████████
//      █████████               ▐   ███   ▌▐   ███   ▐               █████████
//      █████████               ▐   █▄▄▌  ▌▐  ▐▄▄█   ▐               █████████
//      █████████                ▐▄  ▀▀ ▄▀  ▀▄ ▀▀  ▄▀                █████████
//      █████████                  ▀▀▄▄▀      ▀▀▄▄▀                  █████████
//      █████████                                                    █████████
//      █████████                 █▄                ▌                █████████
//      █████████                  ▌▀▀▄          ▄██                 █████████
//      █████████                  ▐   ▀▀▄▄▄▄▄▄█▀ █▌                 █████████
//      █████████                   ▐            ▄█                  █████████
//      █████████                    █          ▄█                   █████████
//      █████████                     ▀▄       █▀                    █████████
//      █████████                       ▀▄▄▄▄██▀                     █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//      █████████                                                    █████████
//        ██████████████████████████████████████████████████████████████████
//                                    Gammasoft
// More than thirty years of passion for high technology especially in development
// (c++, c#, objective-c, ...).

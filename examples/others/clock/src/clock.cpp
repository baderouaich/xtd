#include <ctime>
#include <xtd/xtd.forms>

using namespace xtd;
using namespace xtd::drawing;
using namespace xtd::forms;

int main() {
  bool show_seconds = true;
  bool center_to_screen_next_time = false;
  
  timer timer;
  timer.interval(100);
  timer.enabled(true);

  form form_main;
  form_main.text("Clock");
  form_main.start_position(form_start_position::center_screen);
  form_main.auto_size_mode(forms::auto_size_mode::grow_and_shrink);
  form_main.auto_size(true);
  
  lcd_label label;
  label.parent(form_main);
  label.height(403);
  label.auto_size(true);
  label.fore_color(color::lime);
  label.back_color(color::average(label.fore_color(), color::black, 0.20));
  label.segment_style(forms::segment_style::modern);
  label.show_background_digit(false);
  label.text(strings::format("{:t}", std::chrono::system_clock::now()));
  
  timer.tick += [&] {
    ustring time_str = strings::format(show_seconds ? "{:t}" : "{:v}", std::chrono::system_clock::now());
    time_t time = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
    if (!show_seconds && std::localtime(&time)->tm_sec % 2) time_str = strings::replace(time_str, ':', ' ');
    label.text(time_str);
    if (center_to_screen_next_time) form_main.center_to_screen();
    center_to_screen_next_time = false;
  };
  
  label.click += [&] {
    show_seconds = !show_seconds;
    center_to_screen_next_time = true;
  };

  application::run(form_main);
}

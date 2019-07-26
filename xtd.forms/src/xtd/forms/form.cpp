#include <stdexcept>
#include <xtd/xtd.diagnostics>
#include <xtd/forms/native/control.hpp>
#include <xtd/forms/native/form.hpp>
#include <xtd/forms/window_messages.hpp>
#include "../../../include/xtd/forms/form.hpp"

using namespace std;
using namespace xtd;
using namespace xtd::forms;

form::form() {
  create_control();
}

void form::create_handle() {
  this->handle_ = native::form::create(this->default_size());
  this->visible_ = false;
  this->location_ = native::control::location(this->handle_);
  this->control::create_handle();
}

void form::parent(const control& parent) {
  throw std::invalid_argument("Top-level control cannot be added to a control.");
}

void form::wnd_proc(message &message) {
  switch (message.msg()) {
    case WM_CLOSE: this->wm_close(message); break;
    default: this->control::wnd_proc(message); break;
  }
}

void form::wm_close(message &message) {
  this->def_wnd_proc(message);
  form_closing_event_args event_args;
  this->on_form_closing(event_args);
  if (event_args.cancel() != true) this->destroy_handle();
  this->on_form_closed(form_closed_event_args());
}


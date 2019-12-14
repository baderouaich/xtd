#include <xtd/forms/native/control.hpp>
#include <xtd/forms/native/tab_control.hpp>
#include <xtd/forms/native/tab_control_styles.hpp>
#include <xtd/forms/native/window_styles.hpp>
#include "../../../include/xtd/forms/tab_control.hpp"

using namespace xtd;
using namespace xtd::forms;

tab_control::tab_control() {
  this->can_focus_ = false;
  this->size_ = this->default_size();
  this->controls_.item_added += [this](size_t index, std::reference_wrapper<control> item) {
    native::tab_control::insert_item(handle_, index, item.get().handle());
    native::tab_control::page_text(handle_, index, item.get().text());
  };
  
  /* tab_page is removed by tab_page::destroy_handle() method.
  this->controls_.item_erased += [this](size_t index, std::reference_wrapper<control> item) {
    native::tab_control::delete_item(handle_, index);
  };*/
}

tab_control& tab_control::alignment(tab_alignment alignment) {
  if (this->alignment_ != alignment) {
    this->alignment_ = alignment;
    this->recreate_handle();
  }
  return *this;
}

forms::create_params tab_control::create_params() const {
  forms::create_params create_params = this->control::create_params();
  
  create_params.class_name("tabcontrol");
  create_params.style(create_params.style() | WS_CLIPSIBLINGS);
  
  switch (this->alignment_) {
    case tab_alignment::bottom: create_params.style(create_params.style() | TCS_BOTTOM); break;
    case tab_alignment::left: create_params.style(create_params.style() | TCS_VERTICAL); break;
    case tab_alignment::right: create_params.style(create_params.style() | TCS_VERTICAL | TCS_RIGHT); break;
    default: break;
  }
  
  return create_params;
}

drawing::size tab_control::measure_control() const {
  drawing::rectangle bounds;
  for (auto item : this->controls())
    if (item.get().visible()) bounds = drawing::rectangle::make_union(bounds, item.get().bounds());
  return drawing::size(bounds.location() + bounds.size());
}

void tab_control::recreate_handle() {
  control::recreate_handle();

  for (int index = 0; index < controls().size(); index++) {
    native::tab_control::insert_item(handle_, index, controls()[index].get().handle());
    native::tab_control::page_text(handle_, index, controls()[index].get().text());
  }
}

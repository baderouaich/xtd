#include "../../../include/xtd/forms/button.hpp"

using namespace xtd;
using namespace xtd::forms;

button::button() {
  this->make_control(*this);
}

button& button::operator=(const button& value) {
  this->control::operator=(value);
  return *this;
}


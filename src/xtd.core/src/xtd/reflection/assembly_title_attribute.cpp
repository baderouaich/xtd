#include "../../../include/xtd/reflection/assembly_title_attribute.h"

using namespace std;
using namespace xtd;
using namespace xtd::reflection;

assembly_title_attribute::assembly_title_attribute(const ustring& title) : title_(title) {
}

assembly_title_attribute::assembly_title_attribute(const ustring& title, const object& executing_assembly) : title_(title) {
  __assembly_title_attribute__() = xtd::new_sptr<xtd::reflection::assembly_title_attribute>(title);
}

const ustring& assembly_title_attribute::title() const noexcept {
  return title_;
}

xtd::sptr<object> assembly_title_attribute::get_type_id() const noexcept {
  return xtd::guid::new_guid().memberwise_clone<xtd::guid>();
}

xtd::sptr<xtd::reflection::assembly_title_attribute>& __assembly_title_attribute__() {
  static auto title = xtd::sptr<xtd::reflection::assembly_title_attribute> {};
  return title;
}

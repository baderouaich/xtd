#include "../../../include/xtd/reflection/assembly_file_version_attribute.h"

using namespace std;
using namespace xtd;
using namespace xtd::reflection;

assembly_file_version_attribute::assembly_file_version_attribute(const ustring& version) : version_(version) {
}

assembly_file_version_attribute::assembly_file_version_attribute(const ustring& version, const object& executing_assembly) : version_(version) {
  __assembly_file_version_attribute__() = xtd::new_sptr<xtd::reflection::assembly_file_version_attribute>(version);
}

const ustring& assembly_file_version_attribute::version() const noexcept {
  return version_;
}

xtd::sptr<object> assembly_file_version_attribute::get_type_id() const noexcept {
  return xtd::guid::new_guid().memberwise_clone<xtd::guid>();
}

xtd::sptr<xtd::reflection::assembly_file_version_attribute>& __assembly_file_version_attribute__() {
  static auto version = xtd::sptr<xtd::reflection::assembly_file_version_attribute> {};
  return version;
}

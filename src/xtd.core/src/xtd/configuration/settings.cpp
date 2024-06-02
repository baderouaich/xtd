#include "../../../include/xtd/environment.h"
#include "../../../include/xtd/configuration/file_settings.h"
#include "../../../include/xtd/configuration/settings.h"
#include "../../../include/xtd/io/directory.h"
#include "../../../include/xtd/io/file.h"
#include "../../../include/xtd/io/path.h"
#include "../../../include/xtd/io/stream_reader.h"
#include "../../../include/xtd/io/stream_writer.h"
#include "../../../include/xtd/reflection/assembly.h"
#define __XTD_CORE_NATIVE_LIBRARY__
#include <xtd/native/settings>
#undef __XTD_CORE_NATIVE_LIBRARY__
#include <map>

using namespace xtd;
using namespace xtd::configuration;
using namespace xtd::io;
using namespace xtd::reflection;

struct settings::data {
  configuration::file_settings file_settings;
};

settings::settings() : data_(std::make_shared<data>()) {
  auto product_name = [] noexcept {
    if (assembly::get_executing_assembly().product() != ustring::empty_string) return assembly::get_executing_assembly().product();
    if (environment::get_command_line_args().size() != 0) return xtd::io::path::get_file_name_without_extension(environment::get_command_line_args()[0]);
    return "noname"_s;
  };
  
  auto company_name = [&] noexcept {
    if (assembly::get_executing_assembly().company() != ustring::empty_string) return assembly::get_executing_assembly().company();
    return product_name();
  };

  data_->file_settings = file_settings {native::settings::get_path(company_name(), product_name())};
}

const xtd::ustring& settings::file_path() const noexcept {
  return data_->file_settings.file_path();
}

xtd::ustring settings::read(const xtd::ustring& key, const xtd::ustring& default_value) {
  return read_string(key, default_value);
}

void settings::reset() {
  data_->file_settings.reset();
}

void settings::save() {
  data_->file_settings.save();
}

void settings::write(const xtd::ustring& key, const xtd::ustring& value) {
  write_string(key, value);
}

xtd::ustring settings::read_string(const xtd::ustring& key, const xtd::ustring& default_value) {
  return data_->file_settings.read(key, default_value);
}

void settings::write_string(const xtd::ustring& key, const xtd::ustring& value) {
  data_->file_settings.write(key, value);
}

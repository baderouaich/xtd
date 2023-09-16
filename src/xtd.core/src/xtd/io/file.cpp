#include "../../../include/xtd/argument_exception.h"
#include "../../../include/xtd/diagnostics/stack_frame.h"
#include "../../../include/xtd/unauthorized_access_exception.h"
#include "../../../include/xtd/io/directory.h"
#include "../../../include/xtd/io/file.h"
#include "../../../include/xtd/io/file_not_found_exception.h"
#include "../../../include/xtd/io/path.h"
#include "../../../include/xtd/io/path_too_long_exception.h"
#define __XTD_CORE_NATIVE_LIBRARY__
#include <xtd/native/file.h>
#include <xtd/native/file_system.h>
#undef __XTD_CORE_NATIVE_LIBRARY__

using namespace std;
using namespace xtd;
using namespace io;

ofstream file::append_text(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!exists(path)) create_text(path);
  if ((get_attributes(path) & file_attributes::read_only) == file_attributes::read_only) throw unauthorized_access_exception {csf_};
  
  auto stream = ofstream {path, ios::out | ios::app};
  if (!stream.good()) throw io_exception {csf_};
  return stream;
}

void file::copy(const ustring& src, const ustring& dest) {
  return copy(src, dest, true);
}

void file::copy(const ustring& src, const ustring& dest, bool overwrite) {
  if (src.index_of_any(io::path::get_invalid_path_chars()) != src.npos) throw argument_exception {csf_};
  if (src.empty() || src.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(src)) throw path_too_long_exception {csf_};
  if (!exists(src)) throw file_not_found_exception {csf_};
  
  if (dest.index_of_any(io::path::get_invalid_path_chars()) != dest.npos) throw argument_exception {csf_};
  if (dest.empty() || dest.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(dest)) throw path_too_long_exception {csf_};
  if (!overwrite && exists(dest)) throw io_exception {csf_};
  
  if (overwrite && native::file::exists(dest)) {
    if ((get_attributes(dest) & file_attributes::read_only) == file_attributes::read_only) throw unauthorized_access_exception {csf_};
    if (native::file::remove(dest) != 0) throw io_exception {csf_};
  }
  
  if (native::file::copy(src, dest) != 0) throw io_exception {csf_};
}

ofstream file::create(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (exists(path) && (get_attributes(path) & file_attributes::read_only) == file_attributes::read_only) throw unauthorized_access_exception {csf_};
  
  auto stream = ofstream {path, ios::binary | ios::out};
  if (!stream.good()) throw io_exception {csf_};
  return stream;
}

ofstream file::create_text(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (exists(path) && (get_attributes(path) & file_attributes::read_only) == file_attributes::read_only) throw unauthorized_access_exception {csf_};
  
  auto stream = ofstream {path};
  if (!stream.good()) throw io_exception {csf_};
  return stream;
}

bool file::exists(const ustring& path) noexcept {
  return native::file::exists(path);
}

file_attributes file::get_attributes(const ustring& path) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  auto attributes = 0;
  if (native::file_system::get_attributes(path, attributes) != 0) throw file_not_found_exception {csf_};
  return static_cast<file_attributes>(attributes);
}

date_time file::get_creation_time(const xtd::ustring& path) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  [[maybe_unused]] auto [creation_time, last_access_time, last_write_time] = get_file_times(path);
  return date_time::from_time_t(creation_time, date_time_kind::local);
}

date_time file::get_last_access_time(const xtd::ustring& path) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  [[maybe_unused]] auto [creation_time, last_access_time, last_write_time] = get_file_times(path);
  return date_time::from_time_t(last_access_time, date_time_kind::local);
}

date_time file::get_last_write_time(const xtd::ustring& path) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  [[maybe_unused]] auto [creation_time, last_access_time, last_write_time] = get_file_times(path);
  return date_time::from_time_t(last_write_time, date_time_kind::local);
}

file_permissions file::get_permissions(const ustring& path) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  auto permission = 0;
  if (native::file_system::get_permissions(path, permission) != 0) throw file_not_found_exception {csf_};
  return static_cast<file_permissions>(permission);
}

void file::move(const ustring& src, const ustring& dest) {
  move(src, dest, false);
}

void file::move(const ustring& src, const ustring& dest, bool overwrite) {
  if (src.index_of_any(io::path::get_invalid_path_chars()) != src.npos) throw argument_exception {csf_};
  if (src.empty() || src.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(src)) throw path_too_long_exception {csf_};
  if (!exists(src)) throw file_not_found_exception {csf_};
  
  if (dest.index_of_any(io::path::get_invalid_path_chars()) != dest.npos) throw argument_exception {csf_};
  if (dest.empty() || dest.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(src)) throw path_too_long_exception {csf_};
  if (!overwrite && exists(dest)) throw io_exception {csf_};
  
  if (overwrite && native::file::exists(dest)) {
    if ((get_attributes(dest) & file_attributes::read_only) == file_attributes::read_only) throw unauthorized_access_exception {csf_};
    if (native::file::remove(dest) != 0) throw io_exception {csf_};
  }
  
  if (native::file::move(src, dest) != 0) throw io_exception {csf_};
}

fstream file::open(const ustring& path, ios::openmode mode) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if ((mode & ios::in) == ios::in && !exists(string(path))) throw file_not_found_exception {csf_};
  if ((mode & ios::in) == ios::in && (get_attributes(path) & file_attributes::read_only) == file_attributes::read_only) throw unauthorized_access_exception {csf_};
  
  auto stream = fstream {path, mode};
  if (!stream.good()) throw io_exception {csf_};
  return stream;
}

ifstream file::open_read(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!exists(path)) throw file_not_found_exception {csf_};
  
  auto stream = ifstream {path, ios::binary | ios::in};
  if (!stream.good()) throw io_exception {csf_};
  return stream;
}

ifstream file::open_text(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!exists(path)) throw file_not_found_exception {csf_};
  
  auto stream = ifstream {path};
  if (!stream.good()) throw io_exception {csf_};
  return stream;
}

ofstream file::open_write(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  
  auto stream =  ofstream {path, ios::binary | ios::out};
  if (!stream.good()) throw io_exception {csf_};
  return stream;
}

vector<xtd::byte> file::read_all_bytes(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!exists(path)) throw file_not_found_exception {csf_};
  
  auto stream = ifstream {path, ios::binary};
  if (!stream.good()) throw io_exception {csf_};
  return vector<xtd::byte> {istreambuf_iterator<char>(stream), istreambuf_iterator<char>()};
}

vector<ustring> file::read_all_lines(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!exists(path)) throw file_not_found_exception {csf_};
  
  auto contents = vector<ustring> {};
  stream_reader sr(path);
  while (!sr.end_of_stream())
    contents.push_back(sr.read_line());
  return contents;
}

ustring file::read_all_text(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!exists(path)) throw file_not_found_exception {csf_};
  
  auto sr = stream_reader {path};
  return sr.read_to_end();
}

void file::remove(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!exists(path)) throw file_not_found_exception {csf_};
  
  if (native::file::remove(path) != 0) throw io_exception {csf_};
}

void file::replace(const ustring& source_file_name, const ustring& destination_file_name, const ustring& destination_backup_file_name) {
  if (!exists(source_file_name) || !exists(destination_file_name)) throw file_not_found_exception {csf_};
  if (destination_backup_file_name != "") copy(destination_file_name, destination_backup_file_name);
  move(source_file_name, destination_file_name, true);
}

void file::set_attributes(const xtd::ustring& path, xtd::io::file_attributes attributes) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  if (native::file_system::set_attributes(path, static_cast<int32>(attributes)) != 0) throw io_exception {csf_};
}

void file::set_creation_time(const xtd::ustring& path, const xtd::date_time& creation_time) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  if (native::file_system::set_creation_time(path, creation_time.to_time_t()) != 0) throw io_exception {csf_};
}

void file::set_last_access_time(const xtd::ustring& path, const xtd::date_time& last_access_time) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  if (native::file_system::set_last_access_time(path, last_access_time.to_time_t()) != 0) throw io_exception {csf_};
}

void file::set_last_write_time(const xtd::ustring& path, const xtd::date_time& last_write_time) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  if (native::file_system::set_last_write_time(path, last_write_time.to_time_t()) != 0) throw io_exception {csf_};
}

void file::set_permissions(const xtd::ustring& path, xtd::io::file_permissions permissions) {
  if (path.index_of_any(io::path::get_invalid_path_chars()) != path.npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  if (!(exists(path) || directory::exists(path))) throw file_not_found_exception {csf_};
  
  if (native::file_system::set_permissions(path, static_cast<int32>(permissions)) != 0) throw io_exception {csf_};
}

ofstream file::write_text(const ustring& path) {
  if (path.index_of_any(xtd::io::path::get_invalid_path_chars()) != ustring::npos) throw argument_exception {csf_};
  if (path.empty() || path.trim(' ').empty()) throw argument_exception {csf_};
  if (native::file_system::is_path_too_long(path)) throw path_too_long_exception {csf_};
  
  auto stream = ofstream {path};
  if (!stream.good()) throw io_exception {csf_};
  return stream;
}

tuple<time_t, time_t, time_t> file::get_file_times(const ustring& path) {
  auto creation_time = time_t {}, last_access_time = time_t {}, last_write_time = time_t {};
  if (native::file_system::get_file_times(path, creation_time, last_access_time, last_write_time) != 0) throw io_exception {csf_};
  return make_tuple(creation_time, last_access_time, last_write_time);
}

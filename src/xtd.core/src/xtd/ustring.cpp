#define __XTD_CORE_NATIVE_LIBRARY__
#include <xtd/native/types.h>
#undef __XTD_CORE_NATIVE_LIBRARY__
#include <iomanip>
#include "../../include/xtd/ustring.h"
#include "../../include/xtd/typeof.h"
#include "../../include/xtd/convert_string.h"
#include "../../include/xtd/format_exception.h"
#include "../../include/xtd/null_pointer_exception.h"
#include "../../include/xtd/diagnostics/stack_frame.h"

using namespace std;
using namespace xtd;

void __throw_ustring_format_exception() {
  throw format_exception {csf_};
}

void __throw_ustring_format_exception_close_bracket() {
  throw format_exception("Invalid format expression : closing bracket '{' without open bracket '}'"_t, csf_);
}

void __throw_ustring_format_exception_open_bracket() {
  throw format_exception("Invalid format expression : open bracket '}' without end bracket '{'"_t, csf_);
}

void __throw_ustring_format_exception_start_colon() {
  throw format_exception("Invalid format expression : format argument must be start by ':'"_t, csf_);
}

const ustring ustring::empty_string;

ustring::ustring() noexcept {
}

ustring::ustring(const allocator_type& allocator) noexcept : basic_string<value_type>(allocator) {
}

ustring::ustring(size_t count, value_type character) : basic_string<value_type>(count, character) {
}

ustring::ustring(size_t count, value_type character, const allocator_type& allocator) : basic_string<value_type>(count, character, allocator) {
}

#if defined(__cpp_lib_char8_t)
ustring::ustring(size_t count, char8 character) : basic_string<value_type>(count, static_cast<value_type>(character)) {
}

ustring::ustring(size_t count, char8 character, const allocator_type& allocator) : basic_string<value_type>(count, static_cast<value_type>(character), allocator) {
}
#endif

ustring::ustring(size_t count, char16 character) {
  *this = convert_string::to_ustring(u16string(count, character));
}

ustring::ustring(size_t count, char16 character, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  *this = convert_string::to_ustring(u16string(count, character));
}

ustring::ustring(size_t count, char32 character) {
  *this = convert_string::to_ustring(u32string(count, character));
}

ustring::ustring(size_t count, char32 character, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  *this = convert_string::to_ustring(u32string(count, character));
}

ustring::ustring(size_t count, wchar character) {
  *this = convert_string::to_ustring(wstring(count, character));
}

ustring::ustring(size_t count, wchar character, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  *this = convert_string::to_ustring(wstring(count, character));
}

ustring::ustring(const ustring& str, size_t index, size_t count) : basic_string<value_type>(str, index, count) {
}

ustring::ustring(const ustring& str, size_t index, size_t count, const allocator_type& allocator) : basic_string<value_type>(str, index, count, allocator) {
}

ustring::ustring(const ustring& str, size_t index) : basic_string<value_type>(str, index) {
}

ustring::ustring(const ustring& str, size_t index, const allocator_type& allocator) : basic_string<value_type>(str, index, allocator) {
}

ustring::ustring(const value_type* str, size_t count) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(str, count);
}

ustring::ustring(const value_type* str, size_t count, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(str, count);
}

ustring::ustring(const value_type* str) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(str);
}

ustring::ustring(const value_type* str, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(str);
}

ustring::ustring(value_type* str) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(str);
}

ustring::ustring(value_type* str, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(str);
}

ustring::ustring(const ustring& str) noexcept : basic_string<value_type>(str) {
}

ustring::ustring(const ustring& str, const allocator_type& allocator) noexcept : basic_string<value_type>(str, allocator) {
}

ustring::ustring(const std::string& str) noexcept : basic_string<value_type>(str) {
}

ustring::ustring(const std::string& str, const allocator_type& allocator) noexcept : basic_string<value_type>(reinterpret_cast<const value_type*>(str.c_str()), allocator) {
}

#if defined(__cpp_lib_char8_t)
ustring::ustring(const u8string& str) noexcept : basic_string<value_type>(reinterpret_cast<const value_type*>(str.c_str())) {
}

ustring::ustring(const u8string& str, const allocator_type& allocator) noexcept : basic_string<value_type>(reinterpret_cast<const value_type*>(str.c_str()), allocator) {
}

ustring::ustring(const char8* str) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(reinterpret_cast<const value_type*>(str));
}

ustring::ustring(const char8* str, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(reinterpret_cast<const value_type*>(str));
}

ustring::ustring(char8* str) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(reinterpret_cast<value_type*>(str));
}

ustring::ustring(char8* str, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(reinterpret_cast<value_type*>(str));
}
#endif

ustring::ustring(const std::u16string& str) noexcept : ustring(str, allocator_type()) {
}

ustring::ustring(const std::u16string& str, const allocator_type& allocator) noexcept : basic_string<value_type>(allocator) {
  *this = convert_string::to_ustring(str);
}

ustring::ustring(const char16* str) {
  *this = str;
}

ustring::ustring(const char16* str, const allocator_type& allocator) : ustring(allocator) {
  *this = str;
}

ustring::ustring(char16* str) {
  *this = str;
}

ustring::ustring(char16* str, const allocator_type& allocator) : ustring(allocator) {
  *this = str;
}

ustring::ustring(const std::u32string& str) noexcept : ustring(str, allocator_type()) {
}

ustring::ustring(const std::u32string& str, const allocator_type& allocator) noexcept : basic_string<value_type>(allocator) {
  *this = convert_string::to_ustring(str);
}

ustring::ustring(const char32* str) {
  *this = str;
}

ustring::ustring(const char32* str, const allocator_type& allocator) : ustring(allocator) {
  *this = str;
}

ustring::ustring(char32* str) {
  *this = str;
}

ustring::ustring(char32* str, const allocator_type& allocator) : ustring(allocator) {
  *this = str;
}

ustring::ustring(const std::wstring& str) noexcept : ustring(str, allocator_type()) {
}

ustring::ustring(const std::wstring& str, const allocator_type& allocator) noexcept : basic_string<value_type>(allocator) {
  *this = convert_string::to_ustring(str);
}

ustring::ustring(const wchar* str) {
  *this = str;
}

ustring::ustring(const wchar* str, const allocator_type& allocator) : ustring(allocator) {
  *this = str;
}

ustring::ustring(wchar* str) {
  *this = str;
}

ustring::ustring(wchar* str, const allocator_type& allocator) : ustring(allocator) {
  *this = str;
}

ustring::ustring(ustring&& str) noexcept : basic_string<value_type>(str) {
}

ustring::ustring(ustring&& str, const allocator_type& allocator) noexcept : basic_string<value_type>(str, allocator) {
}

ustring::ustring(initializer_list<value_type> il) : basic_string<value_type>(il) {
}

ustring::ustring(initializer_list<value_type> il, const allocator_type& allocator) : basic_string<value_type>(il, allocator) {
}

#if defined(__cpp_lib_char8_t)
ustring::ustring(initializer_list<char8> il) {
  for (auto& c : il)
    push_back(static_cast<value_type>(c));
}

ustring::ustring(initializer_list<char8> il, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  for (auto& c : il)
    push_back(static_cast<value_type>(c));
}
#endif

ustring::ustring(initializer_list<char16> il) {
  *this = convert_string::to_ustring(u16string(il));
}

ustring::ustring(initializer_list<char16> il, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  *this = convert_string::to_ustring(u16string(il));
}

ustring::ustring(initializer_list<char32> il) {
  *this = convert_string::to_ustring(u32string(il));
}

ustring::ustring(initializer_list<char32> il, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  *this = convert_string::to_ustring(u32string(il));
}

ustring::ustring(initializer_list<wchar> il) {
  *this = convert_string::to_ustring(wstring(il));
}

ustring::ustring(initializer_list<wchar> il, const allocator_type& allocator) : basic_string<value_type>(allocator) {
  *this = convert_string::to_ustring(wstring(il));
}

ustring& ustring::operator =(const ustring& str) noexcept {
  assign(str);
  return *this;
}

ustring& ustring::operator =(const std::string& str) noexcept {
  assign(str.c_str());
  return *this;
}

ustring& ustring::operator =(const value_type* str) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(str);
  return *this;
}

#if defined(__cpp_lib_char8_t)
ustring& ustring::operator =(const std::u8string& str) noexcept {
  assign(reinterpret_cast<const value_type*>(str.c_str()));
  return *this;
}

ustring& ustring::operator =(const char8* str) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  assign(reinterpret_cast<const value_type*>(str));
  return *this;
}
#endif

ustring& ustring::operator =(const std::u16string& str) noexcept {
  *this = convert_string::to_ustring(str);
  return *this;
}

ustring& ustring::operator =(const char16* str) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  return operator =(u16string(str));
}

ustring& ustring::operator =(const std::u32string& str) noexcept {
  *this = convert_string::to_ustring(str);
  return *this;
}

ustring& ustring::operator =(const char32* str) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  return operator =(u32string(str));
}

ustring& ustring::operator =(const std::wstring& str) noexcept {
  *this = convert_string::to_ustring(str);
  return *this;
}

ustring& ustring::operator =(const wchar* str) {
  if (str == nullptr) throw null_pointer_exception {csf_};
  return operator =(wstring(str));
}

ustring& ustring::operator =(ustring&& str) noexcept {
  std::basic_string<value_type>::operator =(str);
  return *this;
}

ustring& ustring::operator =(value_type character) {
  *this = ustring(1, character);
  return  *this;
}

#if defined(__cpp_lib_char8_t)
ustring& ustring::operator =(char8 character) {
  *this = ustring(1, character);
  return  *this;
}
#endif

ustring& ustring::operator =(char16 character) {
  *this = ustring(1, character);
  return  *this;
}

ustring& ustring::operator =(char32 character) {
  *this = ustring(1, character);
  return  *this;
}

ustring& ustring::operator =(wchar character) {
  *this = ustring(1, character);
  return  *this;
}

ustring& ustring::operator =(const std::initializer_list<value_type>& il) {
  assign(il);
  return *this;
}

#if defined(__cpp_lib_char8_t)
ustring& ustring::operator =(const std::initializer_list<char8>& il) {
  for (auto c : il)
    *this += static_cast<value_type>(c);
  return *this;
}
#endif

ustring& ustring::operator =(const std::initializer_list<char16>& il) {
  clear();
  *this = convert_string::to_ustring(u16string(il));
  return *this;
}

ustring& ustring::operator =(const std::initializer_list<char32>& il) {
  clear();
  *this = convert_string::to_ustring(u32string(il));
  return *this;
}

ustring& ustring::operator =(const std::initializer_list<wchar>& il) {
  clear();
  *this = convert_string::to_ustring(wstring(il));
  return *this;
}

ustring& ustring::operator +=(const ustring& str) {
  *this = *this + str;
  return *this;
}

ustring& ustring::operator +=(const std::string& str) {
  *this = *this + str;
  return *this;
}

ustring& ustring::operator +=(const value_type* str) {
  *this = *this + str;
  return *this;
}

#if defined(__cpp_lib_char8_t)
ustring& ustring::operator +=(const std::u8string& str) {
  *this = *this + str;
  return *this;
}

ustring& ustring::operator +=(const char8* str) {
  *this = *this + str;
  return *this;
}
#endif

ustring& ustring::operator +=(const std::u16string& str) {
  *this = *this + str;
  return *this;
}

ustring& ustring::operator +=(const char16* str) {
  *this = *this + str;
  return *this;
}

ustring& ustring::operator +=(const std::u32string& str) {
  *this = *this + str;
  return *this;
}

ustring& ustring::operator +=(const char32* str) {
  *this = *this + str;
  return *this;
}

ustring& ustring::operator +=(const std::wstring& str) {
  *this = *this + str;
  return *this;
}

ustring& ustring::operator +=(const wchar* str) {
  *this = *this + str;
  return *this;
}

ustring& ustring::operator +=(value_type character) {
  *this = *this + character;
  return *this;
}

#if defined(__cpp_lib_char8_t)
ustring& ustring::operator +=(char8 character) {
  *this = *this + character;
  return *this;
}
#endif

ustring& ustring::operator +=(char16 character) {
  *this = *this + character;
  return *this;
}

ustring& ustring::operator +=(char32 character) {
  *this = *this + character;
  return *this;
}

ustring& ustring::operator +=(wchar character) {
  *this = *this + character;
  return *this;
}

ustring& ustring::operator +=(const std::initializer_list<value_type>& il) {
  *this = *this + il;
  return *this;
}

#if defined(__cpp_lib_char8_t)
ustring& ustring::operator +=(const std::initializer_list<char8>& il) {
  *this = *this + il;
  return *this;
}
#endif

ustring& ustring::operator +=(const std::initializer_list<char16>& il) {
  *this = *this + il;
  return *this;
}

ustring& ustring::operator +=(const std::initializer_list<char32>& il) {
  *this = *this + il;
  return *this;
}

ustring& ustring::operator +=(const std::initializer_list<wchar>& il) {
  *this = *this + il;
  return *this;
}

bool ustring::operator ==(const ustring& other) const {
  return std::basic_string<value_type>(*this) == std::basic_string<value_type>(other);
}

bool ustring::operator !=(const ustring& other) const {
  return !operator ==(other);
}

bool ustring::operator ==(const std::string& other) const {
  return *this == ustring(other);
}

bool ustring::operator !=(const std::string& other) const {
  return !operator ==(other);
}

bool ustring::operator ==(const value_type* other) const {
  return std::basic_string<value_type>(*this) == other;
}

bool ustring::operator !=(const value_type* other) const {
  return !operator ==(other);
}

#if defined(__cpp_lib_char8_t)
bool ustring::operator ==(const char8* other) const {
  return *this == ustring(other);
}

bool ustring::operator !=(const char8* other) const {
  return !operator ==(other);
}
#endif

bool ustring::operator ==(const std::u16string& other) const {
  return *this == ustring(other);
}

bool ustring::operator !=(const std::u16string& other) const {
  return !operator ==(other);
}

bool ustring::operator ==(const char16* other) const {
  return *this == ustring(other);
}

bool ustring::operator !=(const char16* other) const {
  return !operator ==(other);
}

bool ustring::operator ==(const std::u32string& other) const {
  return *this == ustring(other);
}

bool ustring::operator !=(const std::u32string& other) const {
  return !operator ==(other);
}

bool ustring::operator ==(const char32* other) const {
  return *this == ustring(other);
}

bool ustring::operator !=(const char32* other) const {
  return !operator ==(other);
}

bool ustring::operator ==(const std::wstring& other) const {
  return *this == ustring(other);
}

bool ustring::operator !=(const std::wstring& other) const {
  return !operator ==(other);
}

bool ustring::operator ==(const wchar* other) const {
  return *this == ustring(other);
}

bool ustring::operator !=(const wchar* other) const {
  return !operator ==(other);
}

const ustring::value_type& ustring::operator [](size_t index) {
  return basic_string<value_type>::operator [](index);
}

const ustring::value_type& ustring::operator [](size_t index) const {
  return basic_string<value_type>::operator [](index);
}

ustring ustring::substr(size_type index, size_type count) const {
  return basic_string<value_type>::substr(index, count);
}

ustring ustring::class_name(const std::type_info& info) {
  return typeof_(info).name();
}

int32 ustring::compare(const ustring& str_a, const ustring& str_b) noexcept {
  return compare(str_a, str_b, false);
}

int32 ustring::compare(const ustring& str_a, const ustring& str_b, bool ignore_case) noexcept {
  return compare(str_a, str_b, ignore_case ? xtd::string_comparison::ordinal_ignore_case : xtd::string_comparison::ordinal);
}

int32 ustring::compare(const ustring& str_a, const ustring& str_b, xtd::string_comparison comparison_type) noexcept {
  if (comparison_type == xtd::string_comparison::ordinal_ignore_case)
    return str_a.to_lower().compare(str_b.to_lower());
  return str_a.compare(str_b);
}

int32 ustring::compare(const ustring& str_a, size_t index_a, const ustring& str_b, size_t index_b, size_t length) noexcept {
  return compare(str_a, index_a, str_b, index_b, length, false);
}

int32 ustring::compare(const ustring& str_a, size_t index_a, const ustring& str_b, size_t index_b, size_t length, bool ignore_case) noexcept {
  return compare(str_a, index_a, str_b, index_b, length, ignore_case ? xtd::string_comparison::ordinal_ignore_case : xtd::string_comparison::ordinal);
}

int32 ustring::compare(const ustring& str_a, size_t index_a, const ustring& str_b, size_t index_b, size_t length, xtd::string_comparison comparison_type) noexcept {
  ustring sa(str_a.substr(index_a, length));
  ustring sb(str_b.substr(index_b, length));
  if (comparison_type == xtd::string_comparison::ordinal_ignore_case)
    return sa.to_lower().compare(sb.to_lower());
  return sa.compare(sb);
}

int32 ustring::compare_to(const ustring& value) const noexcept {
  return compare(*this, value);
}

ustring ustring::concat(const ustring& str_a, const ustring& str_b, const ustring& str_c, const ustring& str_d) noexcept {
  return str_a + str_b + str_c + str_d;
}

ustring ustring::concat(const ustring& str_a, const ustring& str_b, const ustring& str_c) noexcept {
  return str_a + str_b + str_c;
}

ustring ustring::concat(const ustring& str_a, const ustring& str_b) noexcept {
  return str_a + str_b;
}

ustring ustring::concat(const std::vector<ustring>& values) noexcept {
  ustring result;
  for_each(values.begin(), values.end(), [&](const auto & item) {result += item;});
  return result;
}

ustring ustring::concat(const std::vector<const value_type*>& values) noexcept {
  ustring result;
  for_each(values.begin(), values.end(), [&](const auto & item) {result += item;});
  return result;
}

#if defined(__cpp_lib_char8_t)
ustring ustring::concat(const std::vector<const char8*>& values) noexcept {
  ustring result;
  for_each(values.begin(), values.end(), [&](const auto & item) {result += ustring(item);});
  return result;
}
#endif

ustring ustring::concat(const std::initializer_list<ustring>& values) noexcept {
  ustring result;
  for_each(values.begin(), values.end(), [&](const auto & item) {result += item;});
  return result;
}

ustring ustring::concat(const std::initializer_list<const value_type*>& values) noexcept {
  ustring result;
  for_each(values.begin(), values.end(), [&](const auto & item) {result += item;});
  return result;
}

#if defined(__cpp_lib_char8_t)
ustring ustring::concat(const std::initializer_list<const char8*>& values) noexcept {
  ustring result;
  for_each(values.begin(), values.end(), [&](const auto & item) {result += ustring(item);});
  return result;
}
#endif

ustring ustring::demangle(const ustring& name) {
  return native::types::demangle(name);
}

bool ustring::contains(const ustring& value) const noexcept {
  return find(value) != npos;
}

bool ustring::equals(const ustring& other) const noexcept {
  return compare_to(other) == 0;
}

bool ustring::ends_with(value_type value) const noexcept {
  return rfind(value) == size() - 1;
}

#if defined(__cpp_lib_char8_t)
bool ustring::ends_with(char8 value) const noexcept {
  return rfind(value) == size() - 1;
}
#endif

bool ustring::ends_with(const ustring& value) const noexcept {
  return ends_with(value, false);
}

bool ustring::ends_with(const ustring& value, bool ignore_case) const noexcept {
  return ends_with(value, ignore_case ? xtd::string_comparison::ordinal_ignore_case : xtd::string_comparison::ordinal);
}

bool ustring::ends_with(const ustring& value, xtd::string_comparison comparison_type) const noexcept {
  if (comparison_type == xtd::string_comparison::ordinal_ignore_case)
    return to_lower().rfind(value.to_lower()) + value.to_lower().size() == size();
  return rfind(value) + value.size() == size();
}

ustring ustring::full_class_name(const std::type_info& info) {
  return typeof_(info).full_name();
}

size_t ustring::get_hash_code() const noexcept {
  return std::hash<std::basic_string<value_type>>()(*this);
}

size_t ustring::index_of(value_type value) const noexcept {
  return index_of(value, 0, size());
}

size_t ustring::index_of(const ustring& value) const noexcept {
  return index_of(value, 0, size());
}

size_t ustring::index_of(value_type value, size_t start_index) const noexcept {
  return index_of(value, start_index, size() - start_index);
}

size_t ustring::index_of(const ustring& value, size_t start_index) const noexcept {
  return index_of(value, start_index, size() - start_index);
}

size_t ustring::index_of(value_type value, size_t start_index, size_t count) const noexcept {
  size_t result = find(value, start_index);
  return result > start_index + count ? npos : result;
}

size_t ustring::index_of(const ustring& value, size_t start_index, size_t count) const noexcept {
  size_t result = find(value, start_index);
  return result > start_index + count ? npos : result;
}

size_t ustring::index_of_any(const std::vector<value_type>& values) const noexcept {
  return index_of_any(values, 0, size());
}

size_t ustring::index_of_any(const std::vector<value_type>& values, size_t start_index) const noexcept {
  return index_of_any(values, start_index, size() - start_index);
}

size_t ustring::index_of_any(const std::vector<value_type>& values, size_t start_index, size_t count) const noexcept {
  size_t index = 0;
  for (const auto& item : *this) {
    if (index++ < start_index) continue;
    if (index - 1 > start_index + count) break;
    if (std::find(values.begin(), values.end(), item) != values.end()) return index - 1;
  }
  return npos;
}

size_t ustring::index_of_any(const std::initializer_list<value_type>& values) const noexcept {
  return index_of_any(std::vector<value_type>(values));
}

size_t ustring::index_of_any(const std::initializer_list<value_type>& values, size_t start_index) const noexcept {
  return index_of_any(std::vector<value_type>(values), start_index);
}

size_t ustring::index_of_any(const std::initializer_list<value_type>& values, size_t start_index, size_t count) const noexcept {
  return index_of_any(std::vector<value_type>(values), start_index, count);
}

ustring ustring::insert(size_t start_index, const ustring& value) const noexcept {
  ustring result(*this);
  result.basic_string<value_type>::insert(start_index, value);
  return result;
}

bool ustring::is_empty(const ustring& sttring) noexcept {
  return sttring.empty();
}

size_t ustring::last_index_of(value_type value) const noexcept {
  return last_index_of(value, 0, size());
}

size_t ustring::last_index_of(const ustring& value) const noexcept {
  return last_index_of(value, 0, size());
}

size_t ustring::last_index_of(value_type value, size_t start_index) const noexcept {
  return last_index_of(value, start_index, size() - start_index);
}

size_t ustring::last_index_of(const ustring& value, size_t start_index) const noexcept {
  return last_index_of(value, start_index, size() - start_index);
}

size_t ustring::last_index_of(value_type value, size_t start_index, size_t count) const noexcept {
  size_t result = rfind(value, start_index + count - 1);
  return result < start_index ? npos : result;
}

size_t ustring::last_index_of(const ustring& value, size_t start_index, size_t count) const noexcept {
  size_t result = rfind(value, start_index + count - value.size());
  return result < start_index ? npos : result;
}

size_t ustring::last_index_of_any(const std::vector<value_type>& values) const noexcept {
  return last_index_of_any(values, 0, size());
}

size_t ustring::last_index_of_any(const std::vector<value_type>& values, size_t start_index) const noexcept {
  return last_index_of_any(values, start_index, size() - start_index);
}

size_t ustring::last_index_of_any(const std::vector<value_type>& values, size_t start_index, size_t count) const noexcept {
  size_t index = size() - 1;
  for (const_reverse_iterator it = crbegin(); it != crend(); ++it) {
    if (index-- > start_index + count) continue;
    if (index + 1 < start_index) break;
    if (std::find(values.begin(), values.end(), *it) != values.end()) return index + 1;
  }
  return npos;
}

size_t ustring::last_index_of_any(const std::initializer_list<value_type>& values) const noexcept {
  return last_index_of_any(std::vector<value_type>(values));
}

size_t ustring::last_index_of_any(const std::initializer_list<value_type>& values, size_t start_index) const noexcept {
  return last_index_of_any(std::vector<value_type>(values), start_index);
}

size_t ustring::last_index_of_any(const std::initializer_list<value_type>& values, size_t start_index, size_t count) const noexcept {
  return last_index_of_any(std::vector<value_type>(values), start_index, count);
}

ustring ustring::pad_left(size_t total_width) const noexcept {
  return pad_left(total_width, static_cast<value_type>(0x20));
}

ustring ustring::pad_left(size_t total_width, value_type padding_char) const noexcept {
  if (total_width < size()) return *this;
  return ustring(total_width - size(), padding_char).append(*this);
}

ustring ustring::pad_right(size_t total_width) const noexcept {
  return pad_right(total_width, static_cast<value_type>(0x20));
}

ustring ustring::pad_right(size_t total_width, value_type padding_char) const noexcept {
  if (total_width < size()) return *this;
  ustring result(*this);
  return result.append(total_width - size(), padding_char);
}

ustring ustring::quoted() const {
  return quoted('"', '\\');
}

ustring ustring::quoted(value_type delimiter, value_type escape) const {
  return ustring::format("{}", std::quoted(*this, delimiter, escape));
}

ustring ustring::remove(size_t start_index) const noexcept {
  return remove(start_index, size() - start_index);
}

ustring ustring::remove(size_t start_index, size_t count) const noexcept {
  if (start_index > size()) return *this;
  ustring result(*this);
  return result.erase(start_index, count);
}

ustring ustring::replace(value_type old_char, value_type new_char) const noexcept {
  return replace(ustring(1, old_char), ustring(1, new_char));
}

ustring ustring::replace(const ustring& old_string, const ustring& new_string) const noexcept {
  ustring result(*this);
  auto old_size = old_string.length();
  auto new_size = new_string.length();
  size_t index = 0;
  while (true) {
    index = result.find(old_string, index);
    if (index == npos) break;
    if (old_size == new_size) result.replace(index, old_size, new_string);
    else {
      result.erase(index, old_string.size());
      result.basic_string<value_type>::insert(index, new_string);
    }
    index += new_string.size();
  }
  return result;
}

std::vector<ustring> ustring::split(const std::vector<value_type>& separators, size_t count, string_split_options options) const noexcept {
  if (count == 0) return {};
  if (count == 1) return {*this};
  
  std::vector<ustring> list;
  ustring sub_string;
  std::vector<value_type> split_char_separators = separators.size() == 0 ? std::vector<value_type> {9, 10, 11, 12, 13, 32} : separators;
  for (const_iterator it = begin(); it != end(); ++it) {
    bool is_separator =  std::find(split_char_separators.begin(), split_char_separators.end(), *it) != split_char_separators.end();
    if (!is_separator) sub_string.append(ustring(1, *it));
    if ((static_cast<size_t>(it - begin()) == length() - 1 || is_separator) && (sub_string.length() > 0 || (sub_string.length() == 0 && options != string_split_options::remove_empty_entries))) {
      if (list.size() == count - 1) {
        list.push_back(sub_string + ustring(c_str(), it - begin() + (is_separator ? 0 : 1), length() - (it - begin()) + (is_separator ? 0 : 1)));
        return list;
      }
      list.push_back(sub_string);
      sub_string.clear();
    }
  }
  
  return list;
}

std::vector<ustring> ustring::split() const noexcept {
  return split(std::vector<value_type> {9, 10, 11, 12, 13, 32}, std::numeric_limits<size_t>::max(), string_split_options::none);
}

std::vector<ustring> ustring::split(const std::vector<value_type>& separators) const noexcept {
  return split(separators, std::numeric_limits<size_t>::max(), string_split_options::none);
}

std::vector<ustring> ustring::split(const std::vector<value_type>& separators, string_split_options options) const noexcept {
  return split(separators, std::numeric_limits<size_t>::max(), options);
}

std::vector<ustring> ustring::split(const std::vector<value_type>& separators, size_t count) const noexcept {
  return split(separators, count, string_split_options::none);
}

bool ustring::starts_with(value_type value) const noexcept {
  return starts_with(value, false);
}

bool ustring::starts_with(value_type value, bool ignore_case) const noexcept {
  if (ignore_case) return to_lower().find(static_cast<value_type>(tolower(value))) == 0;
  return find(value) == 0;
}

bool ustring::starts_with(const ustring& value) const noexcept {
  return starts_with(value, false);
}

bool ustring::starts_with(const ustring& value, bool ignore_case) const noexcept {
  if (ignore_case) return to_lower().find(value.to_lower()) == 0;
  return find(value) == 0;
}

ustring ustring::substring(size_t start_index) const noexcept {
  if (start_index >= size()) return "";
  return substr(start_index);
}

ustring ustring::substring(size_t start_index, size_t length) const noexcept {
  if (start_index >= size()) return "";
  return substr(start_index, length);
}

std::vector<ustring::value_type> ustring::to_array() const noexcept {
  return to_array(0, size());
}

std::vector<ustring::value_type> ustring::to_array(size_t start_index) const noexcept {
  return to_array(start_index, size() - start_index);
}

std::vector<ustring::value_type> ustring::to_array(size_t start_index, size_t length) const noexcept {
  if (start_index >= size()) return {};
  if (start_index + length >= size()) return {begin() + start_index, end()};
  return {begin() + start_index, begin() + start_index + length};
}

ustring ustring::to_lower() const noexcept {
  ustring result;
  for_each(begin(), end(), [&](auto c) {result += static_cast<char>(std::tolower(c));});
  return result;
}

ustring ustring::to_title_case() const noexcept {
  auto words = split({' '});
  for (auto& word : words)
    if (word.size() && word != word.to_upper()) word = static_cast<char>(std::toupper(word[0])) + word.substring(1).to_lower();
  return ustring::join(" ", words);
}

ustring ustring::to_string() const noexcept {
  return *this;
}

ustring ustring::to_upper() const noexcept {
  ustring result;
  for_each(begin(), end(), [&](auto c) {result += static_cast<char>(std::toupper(c));});
  return result;
}

ustring ustring::trim() const noexcept {
  return trim(std::vector<value_type> {9, 10, 11, 12, 13, 32});
}

ustring ustring::trim(value_type trim_char) const noexcept {
  return trim(std::vector<value_type> {trim_char});
}

ustring ustring::trim(const std::vector<value_type>& trim_chars) const noexcept {
  return trim_start(trim_chars).trim_end(trim_chars);
}

ustring ustring::trim_end() const noexcept {
  return trim_end(std::vector<value_type> {9, 10, 11, 12, 13, 32});
}

ustring ustring::trim_end(value_type trim_char) const noexcept {
  return trim_end(std::vector<value_type> {trim_char});
}

ustring ustring::trim_end(const std::vector<value_type>& trim_chars) const noexcept {
  if (!size()) return *this;
  ustring result(*this);
  while (std::find(trim_chars.begin(), trim_chars.end(), result[result.size() - 1]) != trim_chars.end())
    result.erase(result.size() - 1, 1);
  return result;
}

ustring ustring::trim_start() const noexcept {
  return trim_start(std::vector<value_type> {9, 10, 11, 12, 13, 32});
}

ustring ustring::trim_start(value_type trim_char) const noexcept {
  return trim_start(std::vector<value_type> {trim_char});
}

ustring ustring::trim_start(const std::vector<value_type>& trim_chars) const noexcept {
  ustring result(*this);
  while (std::find(trim_chars.begin(), trim_chars.end(), result[0]) != trim_chars.end())
    result.erase(0, 1);
  return result;
}

ustring ustring::get_class_name(const ustring& full_name) {
  size_t length = full_name.last_index_of("<");
  if (length == npos) length = full_name.length();
  if (full_name.last_index_of("::", 0, length) == npos) return full_name;
  return full_name.substring(full_name.last_index_of("::", 0, length) + 2);
}

ustring xtd::to_ustring(int val) {
  return ustring::format("{}", val);
}

ustring xtd::to_ustring(unsigned val) {
  return ustring::format("{}", val);
}

ustring xtd::to_ustring(long val) {
  return ustring::format("{}", val);
}

ustring xtd::to_ustring(unsigned long val) {
  return ustring::format("{}", val);
}

ustring xtd::to_ustring(long long val) {
  return ustring::format("{}", val);
}

ustring xtd::to_ustring(unsigned long long val) {
  return ustring::format("{}", val);
}

ustring xtd::to_ustring(float val) {
  return ustring::format("{}", val);
}

ustring xtd::to_ustring(double val) {
  return ustring::format("{}", val);
}

ustring xtd::to_ustring(long double val) {
  return ustring::format("{}", val);
}

/// @file
/// @brief Contains xtd::ustring class.
#pragma once
/// @cond
#define __XTD_CORE_INTERNAL__
#include "internal/__format_information.h"
#include "internal/__sprintf.h"
#undef __XTD_CORE_INTERNAL__
#define __XTD_STD_INTERNAL__
#include "internal/__xtd_std_version.h"
#undef __XTD_STD_INTERNAL__
/// @endcond
#include "icomparable.h"
#include "iequatable.h"
#include "string_comparison.h"
#include "string_split_options.h"
#include "types.h"
#include "object.h"
#include "parse.h"
#include "to_string.h"
#include "types.h"
#include "unused.h"
#if defined(__xtd__cpp_lib_format)
#include <format>
#endif
#include <ostream>
#include <string>

/// @cond
namespace xtd {
  class ustring;
}
template<typename ...args_t>
void __ustring_extract_format_arg(xtd::ustring& fmt, std::vector<__format_information<char>>& format, args_t&& ... args);
void __throw_ustring_format_exception(const char* file, xtd::uint32 line, const char* func);
void __throw_ustring_format_exception_close_bracket(const char* file, xtd::uint32 line, const char* func);
void __throw_ustring_format_exception_open_bracket(const char* file, xtd::uint32 line, const char* func);
void __throw_ustring_format_exception_start_colon(const char* file, xtd::uint32 line, const char* func);
/// @endcond

namespace xtd {
  /// @brief Represents text as a sequence of UTF-8 code units.
  /// @par Namespace
  /// xtd
  /// @par Library
  /// xtd.core
  /// @ingroup xtd_core system
  /// @remarks A string is a sequential collection of characters that's used to represent text. A xtd::ustring object is a sequential collection of char that represent a string; a char corresponds to a UTF-8 code unit. The value of the xtd::ustring object is the content of the sequential collection of char, and unlike [std::basic_string<char>](https://en.cppreference.com/w/cpp/string/basic_string) that value is immutable (that is, it is read-only).
  /// @remarks If you want the same mutable string class, you can use xtd::text::ustring_builder class.
  /// @remarks xtd::ustring is inherited from [std::basic_string<char>](https://en.cppreference.com/w/cpp/string/basic_string) and therefore offers the full (immutable) API of std::string.
  /// @remarks xtd::ustring cannot inherit from xtd::iequatable <xtd::ustring> because [std::basic_string<char>](https://en.cppreference.com/w/cpp/string/basic_string) defines the [== and != operators](https://en.cppreference.com/w/cpp/string/basic_string/operator_cmp).
  class ustring : public object, public xtd::icomparable<ustring>, public std::basic_string<char> {
  public:
    /// @name Public Fields
    
    /// @{
    /// @brief Represents the empty string.
    /// @remarks The value of this method is the zero-length string, "".
    static const ustring empty_string;
    /// @}
    
    /// @name Public Constructors
    
    /// @{
    /// @brief Initializes a new instance of xtd::ustring.
    ustring() noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified allocator.
    /// @param allocator The allocator to use for all memory allocations of this string.
    explicit ustring(const allocator_type& allocator) noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    ustring(size_t count, value_type character);
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character and specified allocator.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(size_t count, value_type character, const allocator_type& allocator);
#if defined(__xtd__cpp_lib_char8_t)
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    ustring(size_t count, char8 character);
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character and specified allocator.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(size_t count, char8 character, const allocator_type& allocator);
#endif
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    ustring(size_t count, char16 character);
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character and specified allocator.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(size_t count, char16 character, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    ustring(size_t count, char32 character);
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character and specified allocator.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(size_t count, char32 character, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    ustring(size_t count, wchar character);
    /// @brief Initializes a new instance of xtd::ustring with specified count copies of character and specified allocator.
    /// @param str The string to copy.
    /// @param count The number of copies of character.
    /// @param character The character copied.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(size_t count, wchar character, const allocator_type& allocator);
    
    /// @brief Initializes a new instance of xtd::ustring with specified substring at index and count characters.
    /// @param str The string to copy.
    /// @param index The index of the first substring character where start copy.
    /// @param count The number of substring characters to copy.
    ustring(const ustring& str, size_t index, size_t count);
    /// @brief Initializes a new instance of xtd::ustring with specified substring at index, count characters and allocator.
    /// @param str The string to copy.
    /// @param index The index of the first substring character where start copy.
    /// @param count The number of substring characters to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const ustring& str, size_t index, size_t count, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified substring at index.
    /// @param str The string to copy.
    /// @param index The index of the first substring character where start copy.
    ustring(const ustring& str, size_t index);
    /// @brief Initializes a new instance of xtd::ustring with specified substring at index and allocator.
    /// @param str The string to copy.
    /// @param index The index of the first substring character where start copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const ustring& str, size_t index, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified substring and count characters.
    /// @param count The number of substring characters to copy.
    ustring(const value_type* str, size_t count);
    /// @brief Initializes a new instance of xtd::ustring with specified substring, count characters and allocator.
    /// @param str The string to copy.
    /// @param count The number of substring characters to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const value_type* str, size_t count, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(const value_type* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const value_type* str, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(value_type* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(value_type* str, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    /// @param str The string to copy.
    ustring(const ustring& str) noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const ustring& str, const allocator_type& allocator) noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    /// @param str The string to copy.
    ustring(const std::string& str) noexcept; // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const std::string& str, const allocator_type& allocator) noexcept;
#if defined(__xtd__cpp_lib_char8_t)
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    /// @param str The string to copy.
    ustring(const std::u8string& str) noexcept; // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const std::u8string& str, const allocator_type& allocator) noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(const char8* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const char8* str, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(char8* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(char8* str, const allocator_type& allocator);
#endif
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    /// @param str The string to copy.
    ustring(const std::u16string& str) noexcept; // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const std::u16string& str, const allocator_type& allocator) noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(const char16* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const char16* str, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(char16* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(char16* str, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    /// @param str The string to copy.
    ustring(const std::u32string& str) noexcept; // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const std::u32string& str, const allocator_type& allocator) noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(const char32* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const char32* str, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(char32* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(char32* str, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    /// @param str The string to copy.
    ustring(const std::wstring& str) noexcept; // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const std::wstring& str, const allocator_type& allocator) noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(const wchar* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(const wchar* str, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy.
    ustring(wchar* str); // Can't be explicit by design.
    /// @brief Initializes a new instance of xtd::ustring with specified string to copy, and allocator.
    /// @param str The string to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(wchar* str, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified string to move.
    /// @param str The string to move.
    ustring(ustring&& str) noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified string to move and allocator.
    /// @param str The string to move.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(ustring&& str, const allocator_type& allocator) noexcept;
    /// @brief Initializes a new instance of xtd::ustring with specified first and last iterators of substring.
    /// @param first The first iterator of substring.
    /// @param last The first iterator of substring.
    template<typename input_iterator_t>
    ustring(input_iterator_t first, input_iterator_t last) : std::basic_string<value_type>(first, last) {}
    /// @brief Initializes a new instance of xtd::ustring with specified first and last iterators of substring and allocator.
    /// @param first The first iterator of substring.
    /// @param last The first iterator of substring.
    /// @param allocator The allocator to use for all memory allocations of this string.
    template<typename input_iterator_t>
    ustring(input_iterator_t first, input_iterator_t last, const allocator_type& allocator) : std::basic_string<value_type>(first, last, allocator) {}
    /// @brief Initializes a new instance of xtd::ustring with specified string view of substring and allocator.
    /// @param string_view The string view.
    /// @param allocator The allocator to use for all memory allocations of this string.
    template<typename string_view_like_t>
    explicit constexpr ustring(const string_view_like_t& string_view, const allocator_type& allocator = allocator_type()) : std::basic_string<value_type>(string_view, allocator) {}
    /// @brief Initializes a new instance of xtd::ustring with specified string view of substring and allocator.
    /// @param string_view The string view.
    /// @param index The index of the first substring character where start copy.
    /// @param count The number of substring characters to copy.
    /// @param allocator The allocator to use for all memory allocations of this string.
    template<typename string_view_like_t>
    constexpr ustring(const string_view_like_t& string_view, size_type index, size_type count, const allocator_type& allocator = allocator_type()) : std::basic_string<value_type>(string_view, index, count, allocator) {}
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list.
    /// @param il The initializer list to fill.
    ustring(std::initializer_list<value_type> il);
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list and allocator.
    /// @param il The initializer list to fill.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(std::initializer_list<value_type> il, const allocator_type& allocator);
#if defined(__xtd__cpp_lib_char8_t)
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list.
    /// @param il The initializer list to fill.
    ustring(std::initializer_list<char8> il);
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list and allocator.
    /// @param il The initializer list to fill.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(std::initializer_list<char8> il, const allocator_type& allocator);
#endif
    
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list.
    /// @param il The initializer list to fill.
    ustring(std::initializer_list<char16> il);
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list and allocator.
    /// @param il The initializer list to fill.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(std::initializer_list<char16> il, const allocator_type& allocator);
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list.
    /// @param il The initializer list to fill.
    ustring(std::initializer_list<char32> il);
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list and allocator.
    /// @param il The initializer list to fill.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(std::initializer_list<char32> il, const allocator_type& allocator);
    
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list.
    /// @param il The initializer list to fill.
    ustring(std::initializer_list<wchar> il);
    /// @brief Initializes a new instance of xtd::ustring with specified initializer list and allocator.
    /// @param il The initializer list to fill.
    /// @param allocator The allocator to use for all memory allocations of this string.
    ustring(std::initializer_list<wchar> il, const allocator_type& allocator);
    /// @}
    /// @cond
    /*
    template<typename type_t>
    ustring(const type_t& object) : std::basic_string<value_type>(object) {}
    template<typename type_t>
    ustring(const type_t& object, const allocator_type& allocator) : std::basic_string<value_type>(object, allocator) {}
    template<typename type_t>
    ustring(const type_t& object, size_t index, size_t count) : std::basic_string<value_type>(object, index, count) {}
    template<typename type_t>
    ustring(const type_t& object, size_t index, size_t count, const allocator_type& allocator) : std::basic_string<value_type>(object, index, count, allocator) {}
    template<typename type_t>
    ustring(const type_t& object, size_t count) : std::basic_string<value_type>(object, 0, count) {}
    template<typename type_t>
    ustring(const type_t& object, size_t count, const allocator_type& allocator) : std::basic_string<value_type>(object, 0, count, allocator) {}
     */
    
    ustring& operator =(const ustring& str) noexcept;
    ustring& operator =(const std::string& str) noexcept;
    ustring& operator =(const value_type* str);
#if defined(__xtd__cpp_lib_char8_t)
    ustring& operator =(const std::u8string& str) noexcept;
    ustring& operator =(const char8* str);
#endif
    ustring& operator =(const std::u16string& str) noexcept;
    ustring& operator =(const char16* str);
    ustring& operator =(const std::u32string& str) noexcept;
    ustring& operator =(const char32* str);
    ustring& operator =(const std::wstring& str) noexcept;
    ustring& operator =(const wchar* str);
    ustring& operator =(ustring&& str) noexcept;
    
    ustring& operator =(value_type character);
#if defined(__xtd__cpp_lib_char8_t)
    ustring& operator =(char8 character);
#endif
    ustring& operator =(char16 character);
    ustring& operator =(char32 character);
    ustring& operator =(wchar character);
    ustring& operator =(const std::initializer_list<value_type>& il);
#if defined(__xtd__cpp_lib_char8_t)
    ustring& operator =(const std::initializer_list<char8>& il);
#endif
    ustring& operator =(const std::initializer_list<char16>& il);
    ustring& operator =(const std::initializer_list<char32>& il);
    ustring& operator =(const std::initializer_list<wchar>& il);
    //template<typename type_t>
    //ustring& operator =(const type_t& object) {return std::basic_string<value_type>::assign(object);}
    
    template<typename type_t>
    ustring operator +(const type_t& object) const {
      ustring result(*this);
      result.append(object);
      return result;
    }
    
    template<typename type_t>
    ustring operator +(const type_t* object) const {
      ustring result(*this);
      result.append(ustring(object));
      return result;
    }
    
    template<typename type_t>
    ustring operator +(type_t* object) const {
      ustring result(*this);
      result.append(ustring(object));
      return result;
    }

    ustring& operator +=(const ustring& str);
    ustring& operator +=(const std::string& str);
    ustring& operator +=(const value_type* str);
#if defined(__xtd__cpp_lib_char8_t)
    ustring& operator +=(const std::u8string& str);
    ustring& operator +=(const char8* str);
#endif
    ustring& operator +=(const std::u16string& str);
    ustring& operator +=(const char16* str);
    ustring& operator +=(const std::u32string& str);
    ustring& operator +=(const char32* str);
    ustring& operator +=(const std::wstring& str);
    ustring& operator +=(const wchar* str);
    ustring& operator +=(value_type character);
#if defined(__xtd__cpp_lib_char8_t)
    ustring& operator +=(char8 character);
#endif
    ustring& operator +=(char16 character);
    ustring& operator +=(char32 character);
    ustring& operator +=(wchar character);
    ustring& operator +=(const std::initializer_list<value_type>& il);
#if defined(__xtd__cpp_lib_char8_t)
    ustring& operator +=(const std::initializer_list<char8>& il);
#endif
    ustring& operator +=(const std::initializer_list<char16>& il);
    ustring& operator +=(const std::initializer_list<char32>& il);
    ustring& operator +=(const std::initializer_list<wchar>& il);
    template<typename type_t>
    ustring& operator +=(const type_t& object) {
      *this = *this + ustring(object);
      return *this;
    }
    
    bool operator ==(const ustring& other) const;
    bool operator !=(const ustring& other) const;
    bool operator ==(const std::string& other) const;
    bool operator !=(const std::string& other) const;
    bool operator ==(const value_type* other) const;
    bool operator !=(const value_type* other) const;
#if defined(__xtd__cpp_lib_char8_t)
    bool operator ==(const std::u8string& other) const;
    bool operator !=(const std::u8string& other) const;
    bool operator ==(const char8* other) const;
    bool operator !=(const char8* other) const;
#endif
    bool operator ==(const std::u16string& other) const;
    bool operator !=(const std::u16string& other) const;
    bool operator ==(const char16* other) const;
    bool operator !=(const char16* other) const;
    bool operator ==(const std::u32string& other) const;
    bool operator !=(const std::u32string& other) const;
    bool operator ==(const char32* other) const;
    bool operator !=(const char32* other) const;
    bool operator ==(const std::wstring& other) const;
    bool operator !=(const std::wstring& other) const;
    bool operator ==(const wchar* other) const;
    bool operator !=(const wchar* other) const;
    const value_type& operator [](size_t index);
    const value_type& operator [](size_t index) const;
    ustring substr(size_type index = 0, size_type count = npos) const;
    /// @endcond
    
    /// @name Public Methods
    
    /// @{
    int32 compare_to(const ustring& tzi) const noexcept override;
    
    /// @brief Returns a value indicating whether a specified char occurs within this string.
    /// @param value The char to seek.
    /// @return true if the value parameter occurs within this string; otherwise, false.
    bool contains(value_type value) const noexcept;
#if defined(__xtd__cpp_lib_char8_t)
    /// @brief Returns a value indicating whether a specified char occurs within this string.
    /// @param value The char to seek.
    /// @return true if the value parameter occurs within this string; otherwise, false.
    bool contains(char8 value) const noexcept;
#endif
    /// @brief Returns a value indicating whether a specified substring occurs within this string.
    /// @param value The string to seek.
    /// @return true if the value parameter occurs within this string, or if value is the empty string (""); otherwise, false.
    bool contains(const ustring& value) const noexcept;

    bool equals(const object& obj) const noexcept override;
    bool equals(const ustring& tzi) const noexcept;
    
    /// @brief Determines whether the end of this string matches the specified character.
    /// @param value The char_t to compare to the substring at the end of this instance.
    /// @return true if value matches the end of this instance; otherwise, false.
    bool ends_with(value_type value) const noexcept;
#if defined(__xtd__cpp_lib_char8_t)
    /// @brief Determines whether the end of this string matches the specified character.
    /// @param value The char_t to compare to the substring at the end of this instance.
    /// @return true if value matches the end of this instance; otherwise, false.
    bool ends_with(char8 value) const noexcept;
#endif
    /// @brief Determines whether the end of this string matches the specified string.
    /// @param value The string to compare to the substring at the end of this instance.
    /// @return true if value matches the end of this instance; otherwise, false.
    bool ends_with(const ustring& value) const noexcept;
    /// @brief Determines whether the end of this string instance matches the specified string when compared using the specified culture.
    /// @param ignore_case true to ignore case during the comparison; otherwise, false.
    /// @return bool true if value matches the end of the specified string; otherwise, false.
    bool ends_with(const ustring& value, bool ignore_case) const noexcept;
    /// @brief Determines whether the end of this string matches the specified string when compared using the specified comparison option.
    /// @param comparison_type One of the enumeration values that determines how this string and value are compared.
    /// @return bool true if value matches the end of the specified string; otherwise, false.
    bool ends_with(const ustring& value, xtd::string_comparison comparison_type) const noexcept;
    
    /// @brief Returns the hash code for this string.
    /// @return A hash code.
    size_t get_hash_code() const noexcept override;
    
    /// @brief Reports the index of the first occurrence of the specified character in this string.
    /// @param value An unicode character to seek
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t index_of(value_type value) const noexcept;
    /// @brief Reports the index of the first occurrence of the specified string in this string.
    /// @param value An unicode character to seek
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t index_of(const ustring& value) const noexcept;
    /// @brief Reports the index of the first occurrence of the specified character in this string. The search starts at a specified character position.
    /// @param value An unicode character to seek
    /// @param start_index The search starting position
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t index_of(value_type value, size_t start_index) const noexcept;
    /// @brief Reports the index of the first occurrence of the specified character in this string. The search starts at a specified character position.
    /// @param value An unicode character to seek
    /// @param start_index The search starting position
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t index_of(const ustring& value, size_t start_index) const noexcept;
    /// @brief Reports the index of the first occurrence of the specified character in this string. The search starts at a specified character position and examines a specified number of character positions.
    /// @param value An unicode character to seek
    /// @param start_index The search starting position
    /// @param count The number of character positions to examine
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t index_of(value_type value, size_t start_index, size_t count) const noexcept;
    /// @brief Reports the index of the first occurrence of the specified character in this string. The search starts at a specified character position and examines a specified number of character positions.
    /// @param value An unicode character to seek
    /// @param start_index The search starting position
    /// @param count The number of character positions to examine
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t index_of(const ustring& value, size_t start_index, size_t count) const noexcept;
    
    /// @brief Reports the index of the first occurrence in this instance of any character in a specified array of characters.
    /// @param values An unicode character array containing one or more characters to seek
    /// @return The index position of the first occurrence in this instance where any character in values was found; otherwise, std::basic_string<char_t>::npos if no character in values was found.
    size_t index_of_any(const std::vector<value_type>& values) const noexcept;
    /// @brief Reports the index of the first occurrence in this instance of any character in a specified array of characters. The search starts at a specified character position.
    /// @param values An unicode character array containing one or more characters to seek
    /// @param start_index The search starting position
    /// @return The index position of the first occurrence in this instance where any character in values was found; otherwise, std::basic_string<char_t>::npos if no character in values was found.
    size_t index_of_any(const std::vector<value_type>& values, size_t start_index) const noexcept;
    /// @brief Reports the index of the first occurrence in this instance of any character in a specified array of characters. The search starts at a specified character position.
    /// @param values An unicode character array containing one or more characters to seek
    /// @param start_index The search starting position
    /// @param count The number of character positions to examine.
    /// @return The index position of the first occurrence in this instance where any character in values was found; otherwise, std::basic_string<char_t>::npos if no character in values was found.
    size_t index_of_any(const std::vector<value_type>& values, size_t start_index, size_t count) const noexcept;
    /// @cond
    size_t index_of_any(const std::initializer_list<value_type>& values) const noexcept;
    size_t index_of_any(const std::initializer_list<value_type>& values, size_t start_index) const noexcept;
    size_t index_of_any(const std::initializer_list<value_type>& values, size_t start_index, size_t count) const noexcept;
    /// @endcond
    
    /// @brief Inserts a specified instance of string at a specified index position in this instance.
    /// @param start_index The index position of the insertion.
    /// @param value The string to insert.
    /// @return A new string equivalent to this instance but with value inserted at position start_index.
    /// @remarks If start_index is equal to the length of this instance, value is appended to the end of this instance.
    /// @remarks For example, the return value of "abc".Insert(2, "XYZ") is "abXYZc".
    ustring insert(size_t start_index, const ustring& value) const noexcept;
    
    /// @brief Indicates whether this string is an empty string ("").
    /// @return true if the value parameter is null or an empty string (""); otherwise, false.
    /// @deprecated Replaced by xtd::ustring::is_empty(const xtd::ustring&) - Will be removed in version 0.4.0
    [[deprecated("Replaced by xtd::ustring::is_empty(const xtd::ustring&) - Will be removed in version 0.4.0")]]
    bool is_empty() const noexcept {return is_empty(*this);}
    
    /// @brief Reports the index of the last occurrence of the specified character in this tring.
    /// @param value An unicode character to seek
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t last_index_of(value_type value) const noexcept;
    /// @brief Reports the index of the last occurrence of the specified string in this string.
    /// @param value An unicode character to seek
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t last_index_of(const ustring& value) const noexcept;
    /// @brief Reports the index of the last occurrence of the specified character in this string. The search starts at a specified character position.
    /// @param value An unicode character to seek
    /// @param start_index The search starting position
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t last_index_of(value_type value, size_t start_index) const noexcept;
    /// @brief Reports the index of the last occurrence of the specified character in this string. The search starts at a specified character position.
    /// @param value An unicode character to seek
    /// @param start_index The search starting position
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t last_index_of(const ustring& value, size_t start_index) const noexcept;
    /// @brief Reports the index of the last occurrence of the specified character in this string. The search starts at a specified character position and examines a specified number of character positions.
    /// @param str A string to find last index of.
    /// @param value An unicode character to seek
    /// @param start_index The search starting position
    /// @param count The number of character positions to examine
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t last_index_of(value_type value, size_t start_index, size_t count) const noexcept;
    /// @brief Reports the index of the last occurrence of the specified character in this string. The search starts at a specified character position and examines a specified number of character positions.
    /// @param value An unicode character to seek
    /// @param start_index The search starting position
    /// @param count The number of character positions to examine
    /// @return The index position of value if that character is found, or std::basic_string<char_t>::npos if it is not.
    size_t last_index_of(const ustring& value, size_t start_index, size_t count) const noexcept;

    /// @brief Reports the index of the last occurrence in this instance of any character in a specified array of characters.
    /// @param values An unicode character array containing one or more characters to seek
    /// @return The index position of the first occurrence in this instance where any character in values was found; otherwise, std::basic_string<char_t>::npos if no character in values was found.
    size_t last_index_of_any(const std::vector<value_type>& values) const noexcept;
    /// @brief Reports the index of the last occurrence in this instance of any character in a specified array of characters. The search starts at a specified character position.
    /// @param values An unicode character array containing one or more characters to seek
    /// @param start_index The search starting position
    /// @return The index position of the first occurrence in this instance where any character in values was found; otherwise, std::basic_string<char_t>::npos if no character in values was found.
    size_t last_index_of_any(const std::vector<value_type>& values, size_t start_index) const noexcept;
    /// @brief Reports the index of the last occurrence in this instance of any character in a specified array of characters. The search starts at a specified character position.
    /// @param values An unicode character array containing one or more characters to seek
    /// @param start_index The search starting position
    /// @param count The number of character positions to examine.
    /// @return The index position of the first occurrence in this instance where any character in values was found; otherwise, std::basic_string<char_t>::npos if no character in values was found.
    size_t last_index_of_any(const std::vector<value_type>& values, size_t start_index, size_t count) const noexcept;
    /// @cond
    size_t last_index_of_any(const std::initializer_list<value_type>& values) const noexcept;
    size_t last_index_of_any(const std::initializer_list<value_type>& values, size_t start_index) const noexcept;
    size_t last_index_of_any(const std::initializer_list<value_type>& values, size_t start_index, size_t count) const noexcept;
    /// @endcond
    
    /// @brief Right-aligns the characters in this string, padding with spaces on the left for a specified total length.
    /// @param total_width The number of characters in the resulting string, equal to the number of original characters plus any additional padding characters.
    /// @return A new string that is equivalent to the specified string, but right-aligned and padded on the left with as many spaces as needed to create a length of total_width. Or, if total_width is less than the length of the specified string, a new string object that is identical to the specified string.
    /// @remarks An unicode space is defined as hexadecimal 0x20.
    /// @remarks The pad_left(const std::basic_string<char_t>&, int) method pads the beginning of the returned string. This means that, when used with right-to-left languages, it pads the right portion of the string..
    ustring pad_left(size_t total_width) const noexcept;
    /// @brief Right-aligns the characters in this string, padding with spaces on the left for a specified total length.
    /// @param total_width The number of characters in the resulting string, equal to the number of original characters plus any additional padding characters.
    /// @param paddingChar An unicode padding character.
    /// @return A new string that is equivalent to the specified string, but right-aligned and padded on the left with as many spaces as needed to create a length of total_width. Or, if total_width is less than the length of the specified string, a new string object that is identical the specified string.
    /// @remarks An unicode space is defined as hexadecimal 0x20.
    /// @remarks The pad_left(const std::basic_string<char_t>&, int) method pads the beginning of the returned string. This means that, when used with right-to-left languages, it pads the right portion of the string..
    ustring pad_left(size_t total_width, value_type padding_char) const noexcept;
    
    /// @brief Left-aligns the characters in this string, padding with spaces on the right for a specified total length.
    /// @param totalWidth The number of characters in the resulting string, equal to the number of original characters plus any additional padding characters.
    /// @return A new string that is equivalent to the specified string, but left-aligned and padded on the right with as many spaces as needed to create a length of totalWidth. Or, if totalWidth is less than the length of the specified string, a new string object that is identical to the specified string.
    /// @remarks An unicode space is defined as hexadecimal 0x20.
    /// @remarks The PadRight(const std::basic_string<char_t>&, int) method pads the end of the returned string. This means that, when used with right-to-left languages, it pads the left portion of the string..
    ustring pad_right(size_t total_width) const noexcept;
    /// @brief Left-aligns the characters in this string, padding with spaces on the right for a specified total length.
    /// @param totalWidth The number of characters in the resulting string, equal to the number of original characters plus any additional padding characters.
    /// @param paddingChar An unicode padding character.
    /// @return A new string that is equivalent to the specified string, but left-aligned and padded on the tight with as many spaces as needed to create a length of totalWidth. Or, if totalWidth is less than the length of the specified string, a new string object that is identical to the specified string.
    /// @remarks An unicode space is defined as hexadecimal 0x20.
    /// @remarks The xtd::ustring::pad_right method pads the end of the returned string. This means that, when used with right-to-left languages, it pads the left portion of the string..
    ustring pad_right(size_t total_width, value_type padding_char) const noexcept;
    
    /// @brief Allows insertion and extraction of quoted strings, such as the ones found in [CSV](https://en.wikipedia.org/wiki/Comma-separated_values) or [XML](https://en.wikipedia.org/wiki/XML).
    /// @return A new quoted string.
    /// @remarks the delimiter is set to @verbatim " @endverbatim by default and the escape is set to `\` by  default.
    /// @remarks for more information see [std::quoted](https://en.cppreference.com/w/cpp/io/manip/quoted).
    ustring quoted() const;
    /// @brief Allows insertion and extraction of quoted strings, such as the ones found in [CSV](https://en.wikipedia.org/wiki/Comma-separated_values) or [XML](https://en.wikipedia.org/wiki/XML) ith specified delimiter and escape.
    /// @param delimiter The character to use as the delimiter, defaults to `"`.
    /// @param escape The character to use as the escape character, defaults to `\`.
    /// @return A new quoted string.
    /// @remarks for more information see [std::quoted](https://en.cppreference.com/w/cpp/io/manip/quoted).
    ustring quoted(value_type delimiter, value_type escape) const;
    
    /// @brief Deletes all the characters from this string beginning at a specified position and continuing through the last position.
    /// @param start_index The position to begin deleting characters.
    /// @return A new string object that is equivalent to this string less the removed characters.
    ustring remove(size_t start_index) const noexcept;
    /// @brief Deletes all the characters from this string beginning at a specified position and continuing through the last position.
    /// @param start_index The position to begin deleting characters.
    /// @param count The number of characters to delete.
    /// @return A new string object that is equivalent to this string less the removed characters.
    ustring remove(size_t start_index, size_t count) const noexcept;
    
    /// @brief Replaces all occurrences of a specified char_t in this string with another specified char_t.
    /// @param old_char A char_t to be replaced.
    /// @param new_char A char_t to replace all occurrences of old_char.
    /// @return A new string equivalent to the specified string but with all instances of old_char replaced with new_char.
    ustring replace(value_type old_char, value_type new_char) const noexcept;
    /// @brief Replaces all occurrences of a specified string in this string with another specified string.
    /// @param old_string A string to be replaced.
    /// @param new_string A string to replace all occurrences of old_string.
    /// @return A new string equivalent to the specified string but with all instances of old_string replaced with new_string.
    /// @remarks If new_string is empty, all occurrences of old_string are removed
    ustring replace(const ustring& old_string, const ustring& new_string) const noexcept;
    
    /// @brief Splits this string into a maximum number of substrings based on the characters in an array.
    /// @param separators A character array that delimits the substrings in this string, an empty array that contains no delimiters.
    /// @param count The maximum number of substrings to return.
    /// @param options xtd::string_split_options::remove_empty_entries to omit empty array elements from the array returned; or None to include empty array elements in the array returned.
    /// @return An array whose elements contain the substrings in this string that are delimited by one or more characters in separators. For more information, see the Remarks section.
    /// @remarks Delimiter characters are not included in the elements of the returned array.
    /// @remarks If the specified string does not contain any of the characters in separator, or the count parameter is 1, the returned array consists of a single element that contains the specified string.
    /// @remarks If the count parameter is zero, or the options parameter is remove_empty_entries and the length of the specified string is zero, an empty array is returned.
    /// @remarks Each element of separator defines a separate delimiter character. If the options parameter is None, and two delimiters are adjacent or a delimiter is found at the beginning or end of the specified string, the corresponding array element contains an empty string.
    /// @remarks If there are more than count substrings in the specified string, the first count minus 1 substrings are returned in the first count minus 1 elements of the return value, and the remaining characters in the specified string are returned in the last element of the return value.
    /// @remarks If count is greater than the number of substrings, the available substrings are returned.
    std::vector<ustring> split(const std::vector<value_type>& separators, size_t count, string_split_options options) const noexcept;
    /// @brief Splits this string into substrings that are based on the default white-space characters. White-space characters are defined by the c++ standard and return true if they are passed to the xtd::char_object::isspace() or std::iswspace() method.
    /// @return An array whose elements contain the substrings in this string that are delimited by one or more characters in white-space separators. For more information, see the Remarks section.
    /// @remarks Delimiter characters are not included in the elements of the returned array.
    /// @remarks If the specified string does not contain any of the characters in separator, or the count parameter is 1, the returned array consists of a single element that contains the specified string.
    std::vector<ustring> split() const noexcept;
    /// @brief Splits this string into substrings that are based on the characters in an array.
    /// @param separators A character array that delimits the substrings in this string, an empty array that contains no delimiters.
    /// @return An array whose elements contain the substrings in this string that are delimited by one or more characters in separators. For more information, see the Remarks section.
    /// @remarks Delimiter characters are not included in the elements of the returned array.
    /// @remarks If the specified string does not contain any of the characters in separator, or the count parameter is 1, the returned array consists of a single element that contains the specified string.
    std::vector<ustring> split(const std::vector<value_type>& separators) const noexcept;
    /// @brief Splits this string into substrings based on the characters in an array. You can specify whether the substrings include empty array elements.
    /// @param separators A character array that delimits the substrings in this string, an empty array that contains no delimiters.
    /// @param options xtd::string_split_options::remove_empty_entries to omit empty array elements from the array returned; or None to include empty array elements in the array returned.
    /// @return An array whose elements contain the substrings in this string that are delimited by one or more characters in separators. For more information, see the Remarks section.
    /// @remarks Delimiter characters are not included in the elements of the returned array.
    /// @remarks If the specified string does not contain any of the characters in separator, or the count parameter is 1, the returned array consists of a single element that contains the specified string.
    /// @remarks If the specified string does not contain any of the characters in separator, the returned array consists of a single element that contains the specified string.
    /// @remarks If the options parameter is remove_empty_entries and the length of the specified string is zero, the method returns an empty array.
    /// @remarks Each element of separator defines a separate delimiter that consists of a single character. If the options argument is none, and two delimiters are adjacent or a delimiter is found at the beginning or end of the specified string, the corresponding array element contains empty string. For example, if separator includes two elements, "-" and "_", the value of the string instance is "-_aa-_", and the value of the options argument is None, the method returns a string array with the following five elements:
    ///   1. empty string, which represents the empty string that precedes the "-" character at index 0.
    ///   2. empty string, which represents the empty string between the "-" character at index 0 and the "_" character at index 1.
    ///   3. "aa",
    ///   4. empty string, which represents the empty string that follows the "_" character at index 4.
    ///   5. empty string, which represents the empty string that follows the "-" character at index 5.
    /// @remarks If the separator parameter contains no characters, white-space characters are assumed to be the delimiters. White-space characters are defined by the c++ standard and return true if they are passed to the xtd::char_object::isspace() or std::iswspace() method.
    /// @remarks If count is greater than the number of substrings, the available substrings are returned.
    std::vector<ustring> split(const std::vector<value_type>& separators, string_split_options options) const noexcept;
    /// @brief Splits this string into a maximum number of substrings based on the characters in an array. You also specify the maximum number of substrings to return.
    /// @param separators A character array that delimits the substrings in this string, an empty array that contains no delimiters.
    /// @param count The maximum number of substrings to return.
    /// @remarks Delimiter characters are not included in the elements of the returned array.
    /// @remarks If the specified string does not contain any of the characters in separator, or the count parameter is 1, the returned array consists of a single element that contains the specified string.
    /// @remarks If the separator parameter contains no characters, white-space characters are assumed to be the delimiters. White-space characters are defined by the Unicode standard and return true if they are passed to the char_t.IsWhiteSpace method.
    /// @remarks Each element of separator defines a separate delimiter character. If two delimiters are adjacent, or a delimiter is found at the beginning or end of the specified string, the corresponding array element contains empty string.
    /// @remarks If there are more than count substrings in the specified string, the first count minus 1 substrings are returned in the first count minus 1 elements of the return value, and the remaining characters in the specified string are returned in the last element of the return value.
    std::vector<ustring> split(const std::vector<value_type>& separators, size_t count) const noexcept;
    
    /// @brief Determines whether the beginning of this instance of xtd::ustring matches a specified xtd::ustring.
    /// @param value A xtd::ustring to compare to.
    /// @return bool true if value matches the beginning of the specified string; otherwise, false.
    /// @remarks This method compares value to the substring at the beginning of the specified string that is the same length as value, and returns an indication whether they are equal. To be equal, value must be a reference to this same instance, or match the beginning of the specified string.
    bool starts_with(value_type value) const noexcept;
    /// @brief Determines whether the beginning of this instance of xtd::ustring matches a specified xtd::ustring, ignoring or honoring their case.
    /// @param value A xtd::ustring to compare to.
    /// @param ignore_case true to ignore case when comparing the specified string and value; otherwise, false
    /// @return bool true if value matches the beginning of the specified string; otherwise, false.
    /// @remarks This method compares value to the substring at the beginning of the specified string that is the same length as value, and returns an indication whether they are equal. To be equal, value must be a reference to this same instance, or match the beginning of the specified string.
    bool starts_with(value_type value, bool ignore_case) const noexcept;
    /// @brief Determines whether the beginning of this instance of xtd::ustring matches a specified xtd::ustring.
    /// @param value A xtd::ustring to compare to.
    /// @return bool true if value matches the beginning of the specified string; otherwise, false.
    /// @remarks This method compares value to the substring at the beginning of the specified string that is the same length as value, and returns an indication whether they are equal. To be equal, value must be a reference to this same instance, or match the beginning of the specified string.
    bool starts_with(const ustring& value) const noexcept;
    /// @brief Determines whether the beginning of this instance of xtd::ustring matches a specified xtd::ustring, ignoring or honoring their case.
    /// @param value A xtd::ustring to compare to.
    /// @param ignore_case true to ignore case when comparing the specified string and value; otherwise, false
    /// @return bool true if value matches the beginning of the specified string; otherwise, false.
    /// @remarks This method compares value to the substring at the beginning of the specified string that is the same length as value, and returns an indication whether they are equal. To be equal, value must be a reference to this same instance, or match the beginning of the specified string.
    bool starts_with(const ustring& value, bool ignore_case) const noexcept;
    
    /// @brief Retrieves a substring from this instance. The substring starts at a specified character position and has a specified length.
    /// @param str string to substring.
    /// @param start_index The zero-based starting character position of a substring in this instance.
    /// @return A string equivalent to the substring of length length that begins at start_index in this instance, or Empty if start_index is equal to the length of this instance and length is zero.
    ustring substring(size_t start_index) const noexcept;
    /// @brief Retrieves a substring from this instance. The substring starts at a specified character position and has a specified length.
    /// @param start_index The zero-based starting character position of a substring in this instance.
    /// @param length The number of characters in the substring.
    /// @return A string equivalent to the substring of length length that begins at start_index in this instance, or Empty if start_index is equal to the length of this instance and length is zero.
    ustring substring(size_t start_index, size_t length) const noexcept;
    
    /// @brief Copies the characters in this instance to a Unicode character array.
    /// @return A character array whose elements are the individual characters of this instance. If this instance is an empty xtd::ustring, the returned array is empty and has a zero length.
    std::vector<value_type> to_array() const noexcept;
    /// @brief Copies the characters in this instance to a Unicode character array starting at specified index.
    /// @param start_index The starting position of string to convert.
    /// @return A character array whose elements are the individual characters of this instance. If this instance is an empty xtd::ustring, the returned array is empty and has a zero length.
    std::vector<value_type> to_array(size_t start_index) const noexcept;
    /// @brief Copies the characters in this instance to a Unicode character array starting at specified index with specified length.
    /// @param start_index The starting position of string to convert.
    /// @param length The length of the string to convert
    /// @return A character array whose elements are the individual characters of this instance. If this instance is an empty xtd::ustring, the returned array is empty and has a zero length.
    std::vector<value_type> to_array(size_t start_index, size_t length) const noexcept;
    
    /// @brief Returns a copy of the current string converted to lowercase.
    /// @return A new string in lowercase.
    ustring to_lower() const noexcept;
    
    //ustring to_string() const noexcept override;
    ustring to_string() const noexcept override;
    
    /// @brief Converts the current string to title case (except for words that are entirely in uppercase, which are considered to be acronyms).
    /// @return A new string in title case.
    ustring to_title_case() const noexcept;
    
    /// @brief Returns a copy of the current string converted to uppercase.
    /// @return A new string in uppercase.
    ustring to_upper() const noexcept;
    
    /// @brief Removes all leading and trailing occurrences of white-space characters from the specified xtd::ustring.
    /// @param str xtd::ustring to trim end.
    /// @param trim_char A character to remove.
    /// @return The xtd::ustring that remains after all occurrences of the character in the trim_char parameter are removed from the start and te and of the specified xtd::ustring.
    ustring trim() const noexcept;
    /// @brief Removes all leading and trailing occurrences of a character specified from the specified xtd::ustring .
    /// @param str xtd::ustring to trim start.
    /// @param trim_char A character to remove.
    /// @return The xtd::ustring that remains after all occurrences of the character in the trim_char parameter are removed from the start and the end of the specified xtd::ustring.
    ustring trim(value_type trim_char) const noexcept;
    /// @brief Removes all leading and trailing occurrences of a set of characters specified in an array from the specified xtd::ustring.
    /// @param str xtd::ustring to trim end.
    /// @param trim_chars An array of characters to remove.
    /// @return The xtd::ustring that remains after all occurrences of the characters in the trim_chars parameter are removed from the start and the edn of the specified xtd::ustring.
    ustring trim(const std::vector<value_type>& trim_chars) const noexcept;
    
    /// @brief Removes all trailing occurrences of white-space characters from the specified xtd::ustring.
    /// @param str xtd::ustring to trim end.
    /// @param trim_char A character to remove.
    /// @return The xtd::ustring that remains after all occurrences of the character in the trim_char parameter are removed from the end of the specified xtd::ustring.
    ustring trim_end() const noexcept;
    /// @brief Removes all trailing occurrences of a character specified from the specified xtd::ustring .
    /// @param str xtd::ustring to trim start.
    /// @param trim_char A character to remove.
    /// @return The xtd::ustring that remains after all occurrences of the character in the trim_char parameter are removed from the end of the specified xtd::ustring.
    ustring trim_end(value_type trim_char) const noexcept;
    /// @brief Removes all trailing occurrences of a set of characters specified in an array from the specified xtd::ustring.
    /// @param str xtd::ustring to trim end.
    /// @param trim_chars An array of characters to remove.
    /// @return The xtd::ustring that remains after all occurrences of the characters in the trim_chars parameter are removed from the end of the specified xtd::ustring.
    ustring trim_end(const std::vector<value_type>& trim_chars) const noexcept;
    
    /// @brief Removes all leading occurrences of white-space characters from the specified xtd::ustring.
    /// @param str xtd::ustring to trim start.
    /// @param trim_char A character to remove.
    /// @return The xtd::ustring that remains after all occurrences of the character in the trim_char parameter are removed from the start of the specified xtd::ustring.
    ustring trim_start() const noexcept;
    /// @brief Removes all leading occurrences of a character specified from the specified xtd::ustring .
    /// @param str xtd::ustring to trim start.
    /// @param trim_char A character to remove.
    /// @return The xtd::ustring that remains after all occurrences of the character in the trim_char parameter are removed from the start of the specified xtd::ustring.
    ustring trim_start(value_type trim_char) const noexcept;
    /// @brief Removes all leading occurrences of a set of characters specified in an array from the specified xtd::ustring.
    /// @param str An xtd::ustring to trim start.
    /// @param trim_chars An array of characters to remove.
    /// @return The xtd::ustring that remains after all occurrences of the characters in the trim_chars parameter are removed from the start of the specified xtd::ustring.
    ustring trim_start(const std::vector<value_type>& trim_chars) const noexcept;
    /// @}
    
    /// @name Public Static Methods
    
    /// @{
    /// @brief Gets the class name of the object_t.
    /// @return The class name of the object_t.
    /// @remarks For example, the name of the ustring type is ustring.
    /// @deprecated Replaced by typeof_<object_t>().name() - Will be removed in version 0.4.0
    template<typename object_t>
    [[deprecated("Replaced by typeof_<object_t>().name() - Will be removed in version 0.4.0")]]
    static ustring class_name() {return get_class_name(full_class_name<object_t>());}
    /// @brief Gets the class name of the specified object.
    /// @return The class name of the specified object.
    /// @remarks For example, the name of the ustring type is ustring.
    /// @deprecated Replaced by typeof_(object).name() - Will be removed in version 0.4.0
    template<typename object_t>
    [[deprecated("Replaced by typeof_(object).name() - Will be removed in version 0.4.0")]]
    static ustring class_name(const object_t& object) {return get_class_name(full_class_name(object));}
    /// @brief Gets the class name of the specified object.
    /// @return The class name of the specified object.
    /// @remarks For example, the name of the ustring type is ustring.
    /// @deprecated Replaced by typeof_(info).name() - Will be removed in version 0.4.0
    [[deprecated("Replaced by typeof_(info).name() - Will be removed in version 0.4.0")]]
    static ustring class_name(const std::type_info& info);
    
    using std::basic_string<value_type>::compare;
    /// @brief Compares two specified string objects and returns an integer that indicates their relative position in the sort order.
    /// @param str_a The first string to compare.
    /// @param str_b The second string to compare.
    /// @return A 32-bit signed integer that indicates the lexical relationship between the two compares.
    /// | Value             | Condition                                                     |
    /// | ----------------- | ------------------------------------------------------------- |
    /// | Less than zero    | str_a precedes str_b in the sort order.                       |
    /// | Zero              | str_a occurs in the same position as str_b in the sort order. |
    /// | Greater than zero | str_a follows str_b in the sort order.                        |
    static int32 compare(const ustring& str_a, const ustring& str_b) noexcept;
    /// @brief Compares two specified string objects, ignoring or honoring their case, and returns an integer that indicates their relative position in the sort order.
    /// @param str_a The first string to compare.
    /// @param str_b The second string to compare.
    /// @param ignore_case true to ignore case during the comparison; otherwise, false.
    /// @return A 32-bit signed integer that indicates the lexical relationship between the two compares.
    /// | Value             | Condition                                                     |
    /// | ----------------- | ------------------------------------------------------------- |
    /// | Less than zero    | str_a precedes str_b in the sort order.                       |
    /// | Zero              | str_a occurs in the same position as str_b in the sort order. |
    /// | Greater than zero | str_a follows str_b in the sort order.                        |
    static int32 compare(const ustring& str_a, const ustring& str_b, bool ignore_case) noexcept;
    /// @brief Compares two specified string objects using the specified rules, and returns an integer that indicates their relative position in the sort order.
    /// @param str_a The first string to compare.
    /// @param str_b The second string to compare.
    /// @param comparison_type One of the enumeration values that specifies the rules to use in the comparison.
    /// @return A 32-bit signed integer that indicates the lexical relationship between the two compares.
    /// | Value             | Condition                                                     |
    /// | ----------------- | ------------------------------------------------------------- |
    /// | Less than zero    | str_a precedes str_b in the sort order.                       |
    /// | Zero              | str_a occurs in the same position as str_b in the sort order. |
    /// | Greater than zero | str_a follows str_b in the sort order.                        |
    static int32 compare(const ustring& str_a, const ustring& str_b, xtd::string_comparison comparison_type) noexcept;
    /// @brief Compares substrings of two specified string objects and returns an integer that indicates their relative position in the sort order.
    /// @param str_a The first string to use in the comparison.
    /// @param index_a The position of the substring within str_a.
    /// @param str_b The second string to use in the comparison.
    /// @param index_b The position of the substring within str_b.
    /// @param length The maximum number of characters in the substrings to compare
    /// @return A 32-bit signed integer that indicates the lexical relationship between the two compares.
    /// | Value             | Condition                                                     |
    /// | ----------------- | ------------------------------------------------------------- |
    /// | Less than zero    | str_a precedes str_b in the sort order.                       |
    /// | Zero              | str_a occurs in the same position as str_b in the sort order. |
    /// | Greater than zero | str_a follows str_b in the sort order.                        |
    static int32 compare(const ustring& str_a, size_t index_a, const ustring& str_b, size_t index_b, size_t length) noexcept;
    /// @brief Compares substrings of two specified string objects, ignoring or honoring their case, and returns an integer that indicates their relative position in the sort order.
    /// @param str_a The first string to use in the comparison.
    /// @param index_a The position of the substring within str_a.
    /// @param str_b The second string to use in the comparison.
    /// @param index_b The position of the substring within str_b.
    /// @param length The maximum number of characters in the substrings to compare
    /// @param ignore_case true to ignore case during the comparison; otherwise, false.
    /// @return A 32-bit signed integer that indicates the lexical relationship between the two compares.
    /// | Value             | Condition                                                     |
    /// | ----------------- | ------------------------------------------------------------- |
    /// | Less than zero    | str_a precedes str_b in the sort order.                       |
    /// | Zero              | str_a occurs in the same position as str_b in the sort order. |
    /// | Greater than zero | str_a follows str_b in the sort order.                        |
    static int32 compare(const ustring& str_a, size_t index_a, const ustring& str_b, size_t index_b, size_t length, bool ignore_case) noexcept;
    /// @brief Compares substrings of two specified string objects using the specified rules, and returns an integer that indicates their relative position in the sort order.
    /// @param str_a The first string to use in the comparison.
    /// @param index_a The position of the substring within str_a.
    /// @param str_b The second string to use in the comparison.
    /// @param index_b The position of the substring within str_b.
    /// @param length The maximum number of characters in the substrings to compare
    /// @param comparison_type One of the enumeration values that specifies the rules to use in the comparison.
    /// @return A 32-bit signed integer that indicates the lexical relationship between the two compares.
    /// | Value             | Condition                                                     |
    /// | ----------------- | ------------------------------------------------------------- |
    /// | Less than zero    | str_a precedes str_b in the sort order.                       |
    /// | Zero              | str_a occurs in the same position as str_b in the sort order. |
    /// | Greater than zero | str_a follows str_b in the sort order.                        |
    static int32 compare(const ustring& str_a, size_t index_a, const ustring& str_b, size_t index_b, size_t length, xtd::string_comparison comparison_type) noexcept;
    
    /// @brief Concatenates four specified instances of string.
    /// @param str_a The first string to concatenate.
    /// @param str_b The second string to concatenate.
    /// @param str_c The third string to concatenate.
    /// @param str_d The fourth string to concatenate.
    /// @return The concatenation of str_a, str_b, str_c and str_d.
    static ustring concat(const ustring& str_a, const ustring& str_b, const ustring& str_c, const ustring& str_d) noexcept;
    /// @brief Concatenates four specified instances of object.
    /// @param obj_a The first object to concatenate.
    /// @param obj_b The second object to concatenate.
    /// @param obj_c The third object to concatenate.
    /// @param obj_d The fourth object to concatenate.
    /// @return The concatenation of obj_a, obj_b, obj_c and obj_d.
    template<typename object_a_t, typename object_b_t, typename object_c_t, typename object_d_t>
    static ustring concat(object_a_t obj_a, object_b_t obj_b, object_c_t obj_c, object_d_t obj_d) noexcept {
      return format("{}{}{}{}", obj_a, obj_b, obj_c, obj_d);
    }
    /// @brief Concatenates three specified instances of string.
    /// @param str_a The first string to concatenate.
    /// @param str_b The second string to concatenate.
    /// @param str_c The third string to concatenate.
    /// @return string The concatenation of str_a, str_b and str_c.
    static ustring concat(const ustring& str_a, const ustring& str_b, const ustring& str_c) noexcept;
    /// @brief Concatenates three specified instances of object.
    /// @param obj_a The first object to concatenate.
    /// @param obj_b The second object to concatenate.
    /// @param obj_c The third object to concatenate.
    /// @return The concatenation of obj_a, obj_b and obj_c.
    template<typename object_a_t, typename object_b_t, typename object_c_t>
    static ustring concat(object_a_t obj_a, object_b_t obj_b, object_c_t obj_c) noexcept {
      return format("{}{}{}", obj_a, obj_b, obj_c);
    }
    /// @brief Concatenates two specified instances of string.
    /// @param str_a The first string to concatenate.
    /// @param str_b The second string to concatenate.
    /// @return string The concatenation of str_a and str_b.
    static ustring concat(const ustring& str_a, const ustring& str_b) noexcept;
    /// @brief Concatenates two specified instances of object.
    /// @param obj_a The first object to concatenate.
    /// @param obj_b The second object to concatenate.
    /// @return The concatenation of obj_a and obj_b.
    template<typename object_a_t, typename object_b_t>
    static ustring concat(object_a_t obj_a, object_b_t obj_b) noexcept {
      return format("{}{}", obj_a, obj_b);
    }
    /// @brief Concatenates the elements of a specified string array.
    /// @param values An array of string instances.
    /// @return The concatenated elements of values.
    static ustring concat(const std::vector<ustring>& values) noexcept;
    /// @cond
    static ustring concat(const std::vector<const value_type*>& values) noexcept;
#if defined(__xtd__cpp_lib_char8_t)
    static ustring concat(const std::vector<const char8*>& values) noexcept;
#endif
    static ustring concat(const std::initializer_list<ustring>& values) noexcept;
    static ustring concat(const std::initializer_list<const value_type*>& values) noexcept;
#if defined(__xtd__cpp_lib_char8_t)
    static ustring concat(const std::initializer_list<const char8*>& values) noexcept;
#endif
    /// @endcond
    /// @brief Concatenates the string representations of the elements in a specified object array.
    /// @param args An object array that contains the elements to concatenate.
    /// @return The concatenated string representations of the values of the elements in args.
    template<typename object_t>
    static ustring concat(const std::vector<object_t>& args) noexcept {
      ustring result;
      for (const auto& arg : args)
        result += format("{}", arg);
      return result;
    }
    /// @cond
    template<typename object_t>
    static ustring concat(const std::initializer_list<object_t>& args) noexcept {
      ustring result;
      for (const auto& arg : args)
        result += format("{}", arg);
      return result;
    }
    /// @endcond
    /// @brief Creates the string representation of a specified object.
    /// @param value The object to represent.
    /// @return The string representation of the value of arg.
    template<typename value_t>
    static ustring concat(value_t value) noexcept {
      return format("{}", value);
    }
    
    /// @brief Gets demangled string of name,.
    /// @param name The name to demangle.
    /// @return The demangled string of name.
    /// @par Examples
    /// The following example shows how to use xtd::ustring::demangle.
    /// ```cpp
    /// #include <xtd/xtd>
    ///
    /// using namespace xtd;
    ///
    /// auto main() -> int {
    ///   console::write_line("name = {}", typeid(xtd::date_time).name());
    ///   console::write_line("demangled name = {}", ustring::demangle(typeid(xtd::date_time).name()));
    /// }
    ///
    /// // This code produces the following output on macOS :
    /// //
    /// // name = N3xtd9date_timeE
    /// // demangled name = xtd::date_time
    /// ```
    static ustring demangle(const ustring& name);
    
    /// @brief Writes the text representation of the specified arguments list, to string using the specified format information.
    /// @param fmt A composite format string.
    /// @param args arguments list to write using format.
    /// @return string formatted.
    /// @ingroup format_parse
    /// @remarks for more information about format see @ref FormatPage "Format".
    template<typename ...args_t>
    static ustring format(const ustring& fmt, args_t&& ... args) {
      ustring result;
      size_t index = 0;
      std::vector<__format_information<char>> formats;
      auto begin_format_iterator = fmt.end();
      auto end_format_iterator = fmt.end();
      for (auto iterator = fmt.begin(); iterator != fmt.end(); ++iterator) {
        if (*iterator == '{') {
          if (++iterator == fmt.end())
            __throw_ustring_format_exception_open_bracket(__FILE__, __LINE__, __func__);
          if (*iterator == '{')
            result += *iterator;
          else {
            begin_format_iterator = iterator;
            while (iterator != fmt.end() && *iterator != '}') ++iterator;
            if (iterator == fmt.end())
              __throw_ustring_format_exception_open_bracket(__FILE__, __LINE__, __func__);
            end_format_iterator = iterator;
            __format_information<char> fi;
            fi.location = result.size();
            std::string format_str {begin_format_iterator, end_format_iterator};
            if (format_str.size() == 0)
              fi.index = index++;
            else {
              size_t index_alignment_separator = ustring(format_str).index_of(',');
              size_t index_format_separator = ustring(format_str).index_of(u':');
              
              if (index_alignment_separator != std::string::npos && index_format_separator != std::string::npos && index_alignment_separator > index_format_separator)
                index_alignment_separator = std::string::npos;
                
              if (index_alignment_separator != std::string::npos)
                fi.alignment = format_str.substr(index_alignment_separator + 1, index_format_separator != std::string::npos ? index_format_separator - index_alignment_separator - 1 : std::string::npos);
                
              if (index_format_separator != std::string::npos)
                fi.format = format_str.substr(index_format_separator + 1);
                
              if (index_alignment_separator == 0 || index_format_separator == 0)
                fi.index = index++;
              else {
                std::string index_str;
                if (index_alignment_separator != std::string::npos)
                  index_str = format_str.substr(0, index_alignment_separator);
                else if (index_format_separator != std::string::npos)
                  index_str = format_str.substr(0, index_format_separator);
                else
                  index_str = std::move(format_str);
                try {
                  for (auto c : index_str)
                    if (!std::isdigit(c)) __throw_ustring_format_exception_start_colon(__FILE__, __LINE__, __func__);
                  fi.index = std::stoi(index_str);
                } catch (...) {
                  __throw_ustring_format_exception_start_colon(__FILE__, __LINE__, __func__);
                }
              }
            }
            formats.push_back(fi);
          }
        } else if (*iterator == '}') {
          if (++iterator == fmt.end()) {
            __throw_ustring_format_exception_close_bracket(__FILE__, __LINE__, __func__);
            break;
          }
          if (*iterator != '}') {
            __throw_ustring_format_exception_close_bracket(__FILE__, __LINE__, __func__);
            break;
          }
          result += *iterator;
        } else
          result += *iterator;
      }
      
      __ustring_extract_format_arg(result, formats, std::forward<args_t>(args)...);
      return result.c_str();
    }
    
    /// @brief Gets the fully qualified class name of the objec_t, including the namespace of the objec_t.
    /// @return The fully qualified class name of the objec_t, including the namespace of the objec_t.
    /// @remarks For example, the fully qualified name of the ustring type is xtd::ustring.
    /// @deprecated Replaced by typeof_<object_t>().full_name() - Will be removed in version 0.4.0
    template<typename object_t>
    [[deprecated("Replaced by typeof_<object_t>().full_name() - Will be removed in version 0.4.0")]]
    static ustring full_class_name() {return demangle(typeid(object_t).name());}
    /// @brief Gets the fully qualified class name of the specified object, including the namespace of the specified object.
    /// @return The fully qualified class name of the objec_t, including the namespace of the specified object.
    /// @remarks For example, the fully qualified name of the ustring type is xtd::ustring.
    /// @deprecated Replaced by typeof_(object).full_name() - Will be removed in version 0.4.0
    template<typename object_t>
    [[deprecated("Replaced by typeof_(object).full_name() - Will be removed in version 0.4.0")]]
    static ustring full_class_name(const object_t& object) {return demangle(typeid(object).name());}
    /// @brief Gets the fully qualified class name of the specified object, including the namespace of the specified object.
    /// @return The fully qualified class name of the objec_t, including the namespace of the specified object.
    /// @remarks For example, the fully qualified name of the ustring type is xtd::ustring.
    /// @deprecated Replaced by typeof_(info).full_name() - Will be removed in version 0.4.0
    [[deprecated("Replaced by typeof_(info).full_name() - Will be removed in version 0.4.0")]]
    static ustring full_class_name(const std::type_info& info);
    
    /// @brief Indicates whether the specifeid string is an empty string ("").
    /// @param string The xtd::ustring to check if empty.
    /// @return true if the value parameter is null or an empty string (""); otherwise, false.
    static bool is_empty(const xtd::ustring& string) noexcept;
    
    /// @brief Concatenates a specified separator string between each element of a specified object array, yielding a single concatenated string.
    /// @param separator A string separator.
    /// @param values An array of Object.
    /// @return A string consisting of the elements of value interspersed with the separator string.
    /// @remarks For example if separator is ", " and the elements of value are "red", "blue", "green", and "yellow", Join(separator, value) returns "red, blue, green, yellow".
    /// @remarks stream << operator is called on each object to generate the content.
    template<typename collection_t>
    static ustring join(const ustring separator, const collection_t& values) noexcept {return join(separator, values, 0, values.size());}
    /// @brief Concatenates a specified separator string between each element of a specified object array, yielding a single concatenated string.
    /// @param separator A string separator.
    /// @param values An array of Object.
    /// @param start_index The first array element in value to use.
    /// @return A string consisting of the elements of value interspersed with the separator string.
    /// @remarks For example if separator is ", " and the elements of value are "red", "blue", "green", and "yellow", Join(separator, value) returns "red, blue, green, yellow".
    /// @remarks stream << operator is called on each object to generate the content.
    template<typename collection_t>
    static ustring join(const ustring& separator, const collection_t& values, size_t index) noexcept {return join(separator, values, index, values.size() - index);}
    /// @brief Concatenates a specified separator string between each element of a specified Object array, yielding a single concatenated string.
    /// @param separator A string separator.
    /// @param values An array of Object.
    /// @param start_index The first array element in value to use.
    /// @param count The number of elements of value to use.
    /// @return A string consisting of the elements of value interspersed with the separator string.
    /// @remarks For example if separator is ", " and the elements of value are "red", "blue", "green", and "yellow", Join(separator, value) returns "red, blue, green, yellow".
    /// @remarks stream << operator is called on each object to generate the content.
    template<typename collection_t>
    static ustring join(const ustring& separator, const collection_t& values, size_t index, size_t count) noexcept {
      size_t i = 0;
      ustring result;
      for (const auto& item : values) {
        if (i >= index) {
          if (i != index) result += separator;
          result += format("{}", item);
        }
        if (++i >= index + count) break;
      }
      return result;
    }
    /// @cond
    template<typename value_t>
    static ustring join(const ustring& separator, const std::initializer_list<value_t>& values) noexcept {return join(separator, std::vector<value_t>(values));}
    template<typename value_t>
    static ustring join(const ustring& separator, const std::initializer_list<value_t>& values, size_t index) noexcept {return join(separator, std::vector<value_t>(values), index);}
    template<typename value_t>
    static ustring join(const ustring& separator, const std::initializer_list<value_t>& values, size_t index, size_t count) noexcept {return join(separator, std::vector<value_t>(values), index, count);}
    /// @endcond
    
    /// @brief Converts a string into a value_t type.
    /// @param str Ax xtd::ustring to convert to value_t
    /// @return The value_t object parsed.
    template<typename value_t>
    static value_t parse(const ustring& str) {
      return xtd::parse<value_t>(str);
    }
    
    /// @brief Writes the text representation of the specified arguments list, to string using the specified format information.
    /// @param fmt A composite format string.
    /// @param args arguments list to write using format.
    /// @return string formatted.
    /// @ingroup format_parse
    /// @remarks A format specifier follows this prototype:
    /// @remarks %[flags][width][.precision][length]specifier
    /// | specifier | Output                                                                                                                                                   | Example      |
    /// | --------- | -------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------ |
    /// | d or i    | Signed decimal integer                                                                                                                                   | 392          |
    /// | u         | Unsigned decimal integer                                                                                                                                 | 7235         |
    /// | o         | Unsigned octal                                                                                                                                           | 610          |
    /// | x         | Unsigned hexadecimal integer                                                                                                                             | 7fa          |
    /// | X         | Unsigned hexadecimal integer (uppercase)                                                                                                                 | 7FA          |
    /// | f         | Decimal floating point, lowercase                                                                                                                        | 392.65       |
    /// | F         | Decimal floating point, lowercase (uppercase)                                                                                                            | 392.65       |
    /// | e         | Scientific notation (mantissa/exponent), lowercase                                                                                                       | 3.9265e+2    |
    /// | E         | Scientific notation (mantissa/exponent), uppercase                                                                                                       | 3.9265E+2    |
    /// | g         | Use the shortest representation: %e or %f                                                                                                                | 392.65       |
    /// | G         | Use the shortest representation: %E or %F                                                                                                                | 392.65       |
    /// | a         | Hexadecimal floating point, lowercase                                                                                                                    | -0xc.90fep-2 |
    /// | A         | Hexadecimal floating point, uppercase                                                                                                                    | -0XC.90FEP-2 |
    /// | c         | Character                                                                                                                                                | a            |
    /// | s         | string of characters                                                                                                                                     | sample       |
    /// | p         | Pointer address                                                                                                                                          | b8000000     |
    /// | n         | Nothing printed. The corresponding argument must be a pointer to a signed int. The number of characters written so far is stored in the pointed location |              |
    /// | %         | A % followed by another % character will write a single % to the stream.                                                                                 | %            |
    /// @remarks The format specifier can also contain sub-specifiers: flags, width, .precision and modifiers (in that order), which are optional and follow these specifications:
    /// | flags   | description                                                                                                                                                                                                                                                                                                 |
    /// | ------- | ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
    /// | -       | Left-justify within the given field width; Right justification is the default (see width sub-specifier).                                                                                                                                                                                                    |
    /// | +       | Forces to prefix the result with a plus or minus sign (+ or -) even for positive numbers. By default, only negative numbers are preceded with a - sign.                                                                                                                                                    |
    /// | (space) | If no sign is going to be written, a blank space is inserted before the value.                                                                                                                                                                                                                              |
    /// | #       | Used with o, x or X specifiers the value is prefixed with 0, 0x or 0X respectively for values different than zero. Used with a, A, e, E, f, F, g or G it forces the written output to contain a decimal point even if no more digits follow. By default, if no digits follow, no decimal point is written. |
    /// | 0       | Left-pads the number with zeroes (0) instead of spaces when padding is specified (see width sub-specifier).                                                                                                                                                                                                 |
    ///
    /// | width    | description                                                                                                                                                                                          |
    /// | -------- | ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
    /// | (number) | Minimum number of characters to be printed. If the value to be printed is shorter than this number, the result is padded with blank spaces. The value is not truncated even if the result is larger. |
    /// | *        | The width is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.                                                        |
    ///
    /// | .precision | description                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              |
    /// | ---------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
    /// | .number    | For integer specifiers (d, i, o, u, x, X): precision specifies the minimum number of digits to be written. If the value to be written is shorter than this number, the result is padded with leading zeros. The value is not truncated even if the result is longer. A precision of 0 means that no character is written for the value 0. For a, A, e, E, f and F specifiers: this is the number of digits to be printed after the decimal point (by default, this is 6). For g and G specifiers: This is the maximum number of significant digits to be printed. For s: this is the maximum number of characters to be printed. By default all characters are printed until the ending null character is encountered. If the period is specified without an explicit value for precision, 0 is assumed. |
    /// | .*         | The precision is not specified in the format string, but as an additional integer value argument preceding the argument that has to be formatted.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        |
    /// @remarks The length sub-specifier modifies the length of the data type. This is a chart showing the types used to interpret the corresponding arguments with and without length specifier (if a different type is used, the proper type promotion or conversion is performed, if allowed):
    /// | length | d i           | u o x X                | f F e E g G a A | c     | s        | p     | n               |
    /// | ------ | ------------- | ---------------------- | --------------- | ----- | -------- | ----- | --------------- |
    /// | (none) | int           | unsigned int           | double          | int   | char8*   | void* | int*            |
    /// | hh     | signed char8  | unsigned char8         |                 |       |          |       | unsigned char8* |
    /// | h      | short int     | unsigned short int     |                 |       |          |       | short int*      |
    /// | l      | long int      | unsigned long int      |                 | win_t | wchar*   |       | long int*       |
    /// | ll     | long long int | unsigned long long int |                 |       |          |       | long long int*  |
    /// | j      | intmax_t      | uintmax_t              |                 |       |          |       | intmax_t*       |
    /// | z      | size_t        | size_t                 |                 |       |          |       | size_t*         |
    /// | t      | ptrdiff_t     | ptrdiff_t              |                 |       |          |       | ptrdiff_t*      |
    /// | L      |               |                        | long double     |       |          |       |                 |
    /// @remarks Note regarding the c specifier: it takes an int (or wint_t) as argument, but performs the proper conversion to a char8 value (or a wchar) before formatting it for output.
    /// @remarks you can use std::string or std::wstring with format param %%s.
    template<typename ... args_t>
    static ustring sprintf(const ustring& fmt, args_t&& ... args) noexcept {return __sprintf(fmt.c_str(), convert_param(std::forward<args_t>(args)) ...);}
    
    /// @brief Try to convert a string into a value_t type.
    /// @param str An xtd::ustring to convert to value_t
    /// @param value The value that will contain the parsed xtd::ustring.
    /// @return true if xtd::ustring:=:try_parse succed; otherwise, false.
    template<typename value_t>
    static bool try_parse(const ustring& str, value_t& value) noexcept {
      try {
        value = parse<value_t>(str);
        return true;
      } catch (...) {
        return false;
      }
    }
    /// @}
    
    /// @cond
    friend std::ostream& operator <<(std::ostream& stream, const ustring& str) {return stream << str.c_str();}
    friend std::istream& operator >>(std::istream& stream, ustring& str) {
      std::string s;
      stream >> s;
      str = s;
      return stream;
    }
    
    friend ustring operator +(const ustring& str_a, const ustring& str_b) {
      ustring result = str_a;
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const std::string& str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const value_type* str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
    
#if defined(__xtd__cpp_lib_char8_t)
    friend ustring operator +(const ustring& str_a, const std::u8string& str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const char8* str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
#endif
    
    friend ustring operator +(const ustring& str_a, const std::u16string& str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const char16* str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const std::u32string& str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const char32* str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const std::wstring& str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const wchar* str_b) {
      ustring result = str_a;
      result.append(ustring(str_b));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, value_type character) {
      ustring result = str_a;
      result.append(ustring(1, character));
      return result;
    }
    
#if defined(__xtd__cpp_lib_char8_t)
    friend ustring operator +(const ustring& str_a, char8 character) {
      ustring result = str_a;
      result.append(ustring(1, character));
      return result;
    }
#endif
    
    friend ustring operator +(const ustring& str_a, char16 character) {
      ustring result = str_a;
      result.append(ustring(1, character));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, char32 character) {
      ustring result = str_a;
      result.append(ustring(1, character));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, wchar character) {
      ustring result = str_a;
      result.append(ustring(1, character));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const std::initializer_list<value_type>& il) {
      ustring result = str_a;
      result.append(ustring(il));
      return result;
    }
    
#if defined(__xtd__cpp_lib_char8_t)
    friend ustring operator +(const ustring& str_a, const std::initializer_list<char8>& il) {
      ustring result = str_a;
      result.append(ustring(il));
      return result;
    }
#endif
    
    friend ustring operator +(const ustring& str_a, const std::initializer_list<char16>& il) {
      ustring result = str_a;
      result.append(ustring(il));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const std::initializer_list<char32>& il) {
      ustring result = str_a;
      result.append(ustring(il));
      return result;
    }
    
    friend ustring operator +(const ustring& str_a, const std::initializer_list<wchar>& il) {
      ustring result = str_a;
      result.append(ustring(il));
      return result;
    }
    
    friend ustring operator +(const std::string& str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const value_type* str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
    
#if defined(__xtd__cpp_lib_char8_t)
    friend ustring operator +(const std::u8string& str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const char8* str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
#endif
    
    friend ustring operator +(const std::u16string& str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const char16* str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const std::u32string& str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const char32* str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const std::wstring& str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const wchar* str_a, const ustring& str_b) {
      ustring result(str_a);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(value_type character, const ustring& str_b) {
      ustring result(1, character);
      result.append(str_b);
      return result;
    }
    
#if defined(__xtd__cpp_lib_char8_t)
    friend ustring operator +(char8 character, const ustring& str_b) {
      ustring result(1, character);
      result.append(str_b);
      return result;
    }
#endif
    
    friend ustring operator +(char16 character, const ustring& str_b) {
      ustring result(1, character);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(char32 character, const ustring& str_b) {
      ustring result(1, character);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(wchar character, const ustring& str_b) {
      ustring result(1, character);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const std::initializer_list<value_type>& il, const ustring& str_b) {
      ustring result(il);
      result.append(str_b);
      return result;
    }
    
#if defined(__xtd__cpp_lib_char8_t)
    friend ustring operator +(const std::initializer_list<char8>& il, const ustring& str_b) {
      ustring result(il);
      result.append(str_b);
      return result;
    }
#endif
    
    friend ustring operator +(const std::initializer_list<char16>& il, const ustring& str_b) {
      ustring result(il);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const std::initializer_list<char32>& il, const ustring& str_b) {
      ustring result(il);
      result.append(str_b);
      return result;
    }
    
    friend ustring operator +(const std::initializer_list<wchar>& il, const ustring& str_b) {
      ustring result(il);
      result.append(str_b);
      return result;
    }
    /// @endcond
    
  private:
    template<typename arg_t>
    static auto convert_param(arg_t&& arg) noexcept {
      if constexpr(std::is_same<std::remove_cv_t<std::remove_reference_t<arg_t>>, std::string>::value) return std::forward<arg_t>(arg).c_str();
#if defined(__xtd__cpp_lib_char8_t)
      else if constexpr(std::is_same<std::remove_cv_t<std::remove_reference_t<arg_t>>, std::u8string>::value) return std::forward<arg_t>(arg).c_str();
#endif
      else if constexpr(std::is_same<std::remove_cv_t<std::remove_reference_t<arg_t>>, std::u16string>::value) return std::forward<arg_t>(arg).c_str();
      else if constexpr(std::is_same<std::remove_cv_t<std::remove_reference_t<arg_t>>, std::u32string>::value) return std::forward<arg_t>(arg).c_str();
      else if constexpr(std::is_same<std::remove_cv_t<std::remove_reference_t<arg_t>>, std::wstring>::value) return std::forward<arg_t>(arg).c_str();
      else if constexpr(std::is_same<std::remove_cv_t<std::remove_reference_t<arg_t>>, xtd::ustring>::value) return std::forward<arg_t>(arg).c_str();
      else return std::forward<arg_t>(arg);
    }
    
    static ustring get_class_name(const ustring& full_name);
    
    static const std::vector<value_type> default_split_separators;
    static const std::vector<value_type> default_trim_chars;

    using std::basic_string<value_type>::assign;
    using std::basic_string<value_type>::reserve;
    using std::basic_string<value_type>::shrink_to_fit;
    using std::basic_string<value_type>::clear;
    using std::basic_string<value_type>::erase;
    using std::basic_string<value_type>::push_back;
    using std::basic_string<value_type>::pop_back;
    using std::basic_string<value_type>::append;
    using std::basic_string<value_type>::replace;
    using std::basic_string<value_type>::resize;
  };
  
  /// @brief Converts a signed integer to xtd::ustring.
  /// @param val A numeric value to convert.
  /// @return A string holding the converted value.
  ustring to_ustring(int val);
  /// @brief Converts an unsigned integer to xtd::ustring.
  /// @param val A numeric value to convert.
  /// @return A string holding the converted value.
  ustring to_ustring(unsigned val);
  /// @brief Converts a signed integer to xtd::ustring.
  /// @param val A numeric value to convert.
  /// @return A string holding the converted value.
  ustring to_ustring(long val);
  /// @brief Converts an unsigned integer to xtd::ustring.
  /// @param val A numeric value to convert.
  /// @return A string holding the converted value.
  ustring to_ustring(unsigned long val);
  /// @brief Converts a signed integer to xtd::ustring.
  /// @param val A numeric value to convert.
  /// @return A string holding the converted value.
  ustring to_ustring(long long val);
  /// @brief Converts an unsigned integer to xtd::ustring.
  /// @param val A numeric value to convert.
  /// @return A string holding the converted value.
  ustring to_ustring(unsigned long long val);
  /// @brief Converts a floating point to xtd::ustring.
  /// @param val A numeric value to convert.
  /// @return A string holding the converted value.
  ustring to_ustring(float val);
  /// @brief Converts a floating point integer to xtd::ustring.
  /// @param val A numeric value to convert.
  /// @return A string holding the converted value.
  ustring to_ustring(double val);
  /// @brief Converts a floating point to xtd::ustring.
  /// @param val A numeric value to convert.
  /// @return A string holding the converted value.
  ustring to_ustring(long double val);
  /// @brief Converts a type_t to xtd::ustring.
  /// @param val A type_t value to convert.
  /// @return A string holding the converted value.
  template <typename type_t>
  ustring to_ustring(type_t val) {
    return ustring::format("{}", val);
  }
}

/// @cond
template<typename arg_t>
void __ustring_extract_format_arg(std::string& fmt, size_t& index, std::vector<__format_information<char>>& formats, arg_t&& arg) {
  size_t offset = 0;
  for (auto& format : formats) {
    format.location += offset;
    if (format.index == index) {
      xtd::ustring arg_str = xtd::to_string(arg, format.format);
      
      if (!format.alignment.empty()) {
        xtd::int32 alignment = 0;
        try {
          alignment = std::stoi(format.alignment);
        } catch (...) {
          __throw_ustring_format_exception(__FILE__, __LINE__, __func__);
        }
        if (alignment > 0) arg_str = arg_str.pad_left(alignment);
        else if (alignment < 0) arg_str = arg_str.pad_right(-alignment);
      }
      fmt.insert(format.location, arg_str);
      offset += arg_str.size();
    }
  }
  ++index;
}

template<typename ...args_t>
void __ustring_extract_format_arg(xtd::ustring& fmt, std::vector<__format_information<char>>& formats, args_t&& ... args) {
  size_t index = 0;
  (__ustring_extract_format_arg(fmt, index, formats, args), ...);
  unused_(index); // workaround to mute gcc warning: unused-but-set-variable
}
/// @endcond

/// @cond
/// Needed for std::format
#if defined(__xtd__cpp_lib_format)
template <>
struct std::formatter<xtd::ustring> : std::formatter<std::string> {
  template <typename object_t, typename format_context_t>
  auto format(const object_t& obj, format_context_t& ctx) const {return std::format_to(ctx.out(), "{}", std::string {obj.to_string()});}
};
#endif
/// @endcond

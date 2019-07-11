/// @file
/// @brief Contains xtd::parse methods.
#pragma once

/// @cond
#ifndef __XTD_STRINGS_INCLUDE__
#error "Do not include this file yourself, use only #include <xtd/xtd.strings>"
#endif
/// @endcond

#include "number_styles.hpp"
#include "xtd.strings.hpp"
#include <string>

#undef max
#undef min

/// @cond
template <typename Char>
inline std::basic_string<Char> __parse_remove_decorations(const std::basic_string<Char>& s, xtd::number_styles styles) {
  std::basic_string<Char> str(s);
  if ((styles & xtd::number_styles::allow_leading_white) == xtd::number_styles::allow_leading_white) str = xtd::strings::trim_start(str);
  if ((styles & xtd::number_styles::allow_trailing_white) == xtd::number_styles::allow_trailing_white) str = xtd::strings::trim_end(str);
  if ((styles & xtd::number_styles::allow_currency_symbol) == xtd::number_styles::allow_currency_symbol && xtd::strings::starts_with(str, std::use_facet<std::moneypunct<Char>>(std::locale()).curr_symbol())) str = xtd::strings::remove(str, 0, std::use_facet<std::moneypunct<Char>>(std::locale()).curr_symbol().size());
  if ((styles & xtd::number_styles::allow_currency_symbol) == xtd::number_styles::allow_currency_symbol && xtd::strings::ends_with(str, std::use_facet<std::moneypunct<Char>>(std::locale()).curr_symbol())) str = xtd::strings::substring(str, 0, str.size() - std::use_facet<std::moneypunct<Char>>(std::locale()).curr_symbol().size());
  if ((styles & xtd::number_styles::allow_binary_specifier) == xtd::number_styles::allow_binary_specifier && (xtd::strings::starts_with(str, "0b") || xtd::strings::starts_with(str, "0B"))) str = xtd::strings::remove(str, 0, 2);
  if ((styles & xtd::number_styles::allow_octal_specifier) == xtd::number_styles::allow_octal_specifier && xtd::strings::starts_with(str, '0')) str = xtd::strings::remove(str, 0, 1);
  if ((styles & xtd::number_styles::allow_hex_specifier) == xtd::number_styles::allow_hex_specifier && (xtd::strings::starts_with(str, "0x") || xtd::strings::starts_with(str, "0X"))) str = xtd::strings::remove(str, 0, 2);
  return str;
}

template <typename Char>
inline int __parse_remove_signs(std::basic_string<Char>& str, xtd::number_styles styles) {
  int sign = 0;
  
  while ((styles & xtd::number_styles::allow_leading_sign) == xtd::number_styles::allow_leading_sign && xtd::strings::starts_with(str, "+")) {
    if (sign != 0) throw std::invalid_argument("Format contains more than one sign");
    str = xtd::strings::substring(str, 1, str.size()-1);
    sign += 1;
  }
  
  while ((styles & xtd::number_styles::allow_leading_sign) == xtd::number_styles::allow_leading_sign && xtd::strings::starts_with(str, "-")) {
    if (sign != 0) throw std::invalid_argument("Format contains more than one sign");
    str = xtd::strings::substring(str, 1, str.size()-1);
    sign -= 1;
  }
  
  while ((styles & xtd::number_styles::allow_trailing_sign) == xtd::number_styles::allow_trailing_sign && xtd::strings::ends_with(str, "+")) {
    if (sign != 0) throw std::invalid_argument("Format contains more than one sign");
    str = xtd::strings::substring(str, 0, str.size()-1);
    sign += 1;
  }
  
  while ((styles & xtd::number_styles::allow_trailing_sign) == xtd::number_styles::allow_trailing_sign && xtd::strings::ends_with(str, "-")) {
    if (sign != 0) throw std::invalid_argument("Format contains more than one sign");
    str = xtd::strings::substring(str, 0, str.size()-1);
    sign -= 1;
  }
  
  while ((styles & xtd::number_styles::allow_parentheses) == xtd::number_styles::allow_parentheses && xtd::strings::starts_with(str, "(") && xtd::strings::ends_with(str, ")")) {
    str = xtd::strings::substring(str, 1, str.size()-2);
    if (sign != 0) throw std::invalid_argument("Format contains more than one sign");
    sign -= 1;
  }
  return sign;
}

template <typename Char>
inline void __parse_check_valid_characters(const std::basic_string<Char>& str, xtd::number_styles styles) {
  std::basic_string<Char> valid_characters = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  if ((styles & xtd::number_styles::allow_binary_specifier) == xtd::number_styles::allow_binary_specifier) valid_characters = xtd::strings::remove(valid_characters, 2);
  if ((styles & xtd::number_styles::allow_octal_specifier) == xtd::number_styles::allow_octal_specifier) valid_characters = xtd::strings::remove(valid_characters, 7);
  if ((styles & xtd::number_styles::allow_hex_specifier) == xtd::number_styles::allow_hex_specifier) valid_characters += std::basic_string<Char> {'A', 'B', 'C', 'D', 'E', 'F', 'a', 'b', 'c', 'd', 'e', 'f'};
  if ((styles & xtd::number_styles::allow_decimal_point) == xtd::number_styles::allow_decimal_point) valid_characters += std::use_facet<std::numpunct<Char>>(std::locale()).decimal_point();
  if ((styles & xtd::number_styles::allow_thousands) == xtd::number_styles::allow_thousands) valid_characters += std::use_facet<std::numpunct<Char>>(std::locale()).thousands_sep();
  if ((styles & xtd::number_styles::allow_exponent) == xtd::number_styles::allow_exponent) valid_characters += std::basic_string<Char> {'E', 'e', '+', '-'};

  for (auto c : str) {
    if (xtd::strings::index_of(valid_characters, c) == std::basic_string<Char>::npos)
      throw std::invalid_argument("invalid character found");
  }
  
  if ((styles & xtd::number_styles::allow_decimal_point) == xtd::number_styles::allow_decimal_point) {
    size_t index = xtd::strings::index_of(str, std::use_facet<std::numpunct<Char>>(std::locale()).decimal_point());
    if (index != std::basic_string<Char>::npos && xtd::strings::index_of(str, std::use_facet<std::numpunct<Char>>(std::locale()).decimal_point(), index + 1) != std::basic_string<Char>::npos)
      throw std::invalid_argument("invalid character found");
  }

  if ((styles & xtd::number_styles::allow_thousands) == xtd::number_styles::allow_thousands) {
    size_t index = 1;
    while((index = xtd::strings::index_of(str, std::use_facet<std::numpunct<Char>>(std::locale()).thousands_sep(), index)) != std::basic_string<Char>::npos) {
      if (str[index - 1] == std::use_facet<std::numpunct<Char>>(std::locale()).thousands_sep())
        throw std::invalid_argument("invalid character found");
      ++index;
    }
  }

  if ((styles & xtd::number_styles::allow_exponent) == xtd::number_styles::allow_exponent) {
    size_t index = xtd::strings::index_of_any(str, std::vector<Char> {'+', '-'});
    if (index != std::basic_string<Char>::npos && str[index - 1] != 'e' && str[index - 1] != 'E')
      throw std::invalid_argument("invalid character found");
  }
}

template <typename Value, typename Char>
inline Value __parse_floating_point(const std::basic_string<Char>& str, int sign, xtd::number_styles styles) {
  long double result;
  if ((styles & xtd::number_styles::allow_thousands) != xtd::number_styles::allow_thousands)
    result = std::stold(str, nullptr);
  else {
    std::stringstream ss(str);
    ss.imbue(std::locale());
    ss >> result;
  }
  
  result = sign < 0 ? -result : result;
  if (result < std::numeric_limits<Value>::min() || result > std::numeric_limits<Value>::max()) throw std::out_of_range("Out of range");
  return static_cast<Value>(result);
}

template <typename Value, typename Char>
inline Value __parse_signed(const std::basic_string<Char>& str, int base, int sign, xtd::number_styles styles) {
  long long result;
  if ((styles & xtd::number_styles::allow_thousands) != xtd::number_styles::allow_thousands)
    result = std::stoll(str, nullptr, base);
  else {
    std::stringstream ss(str);
    ss.imbue(std::locale());
    ss >> result;
  }
  
  result = sign < 0 ? -result : result;
  if (result < std::numeric_limits<Value>::min() || result > std::numeric_limits<Value>::max()) throw std::out_of_range("Out of range");
  return static_cast<Value>(result);
}

template <typename Value, typename Char>
inline Value __parse_unsigned(const std::basic_string<Char>& str, int base, xtd::number_styles styles) {
  unsigned long long result = 0;
  if ((styles & xtd::number_styles::allow_thousands) != xtd::number_styles::allow_thousands)
    result = std::stoull(str, nullptr, base);
  else{
    std::stringstream ss(str);
    ss.imbue(std::locale());
    ss >> result;
  }
  
  if (result > std::numeric_limits<Value>::max()) throw std::out_of_range("Out of range");
  return static_cast<Value>(result);
}

template <typename Value, typename Char>
inline Value __parse_floating_point_number(const std::basic_string<Char>& s, xtd::number_styles styles) {
  if ((styles & xtd::number_styles::binary_number) == xtd::number_styles::binary_number) throw std::invalid_argument("xtd::number_styles::binary_number not supported by floating point");
  if ((styles & xtd::number_styles::octal_number) == xtd::number_styles::octal_number) throw std::invalid_argument("xtd::number_styles::octal_number not supported by floating point");
  if ((styles & xtd::number_styles::hex_number) == xtd::number_styles::hex_number) throw std::invalid_argument("xtd::number_styles::hex_number not supported by floating point");

  std::basic_string<Char> str = __parse_remove_decorations(s, styles);
  int sign = __parse_remove_signs(str, styles);
  
  __parse_check_valid_characters(str, styles);
  
  return __parse_floating_point<Value>(str, sign, styles);
}

template <typename Value, typename Char>
inline Value __parse_number(const std::basic_string<Char>& s, xtd::number_styles styles) {
  if ((styles & xtd::number_styles::allow_binary_specifier) == xtd::number_styles::allow_binary_specifier && (styles - xtd::number_styles::binary_number) != xtd::number_styles::none) throw std::invalid_argument("Invalid xtd::number_styles flags");
  if ((styles & xtd::number_styles::allow_octal_specifier) == xtd::number_styles::allow_octal_specifier && (styles - xtd::number_styles::octal_number) != xtd::number_styles::none) throw std::invalid_argument("Invalid xtd::number_styles flags");
  if ((styles & xtd::number_styles::allow_hex_specifier) == xtd::number_styles::allow_hex_specifier && (styles - xtd::number_styles::hex_number) != xtd::number_styles::none) throw std::invalid_argument("Invalid xtd::number_styles flags");
  
  int base = 10;
  if ((styles & xtd::number_styles::binary_number) == xtd::number_styles::binary_number) base = 2;
  if ((styles & xtd::number_styles::octal_number) == xtd::number_styles::octal_number) base = 8;
  if ((styles & xtd::number_styles::hex_number) == xtd::number_styles::hex_number) base = 16;
  
  std::basic_string<Char> str = __parse_remove_decorations(s, styles);
  int sign = __parse_remove_signs(str, styles);
  
  __parse_check_valid_characters(str, styles);
  
  if (std::is_floating_point<Value>::value || (styles & xtd::number_styles::allow_exponent) == xtd::number_styles::allow_exponent) return __parse_floating_point<Value>(str, sign, styles);
  return __parse_signed<Value>(str, base, sign, styles);
}

template <typename Value, typename Char>
inline Value __parse_unsigned_number(const std::basic_string<Char>& s, xtd::number_styles styles) {
  if ((styles & xtd::number_styles::allow_binary_specifier) == xtd::number_styles::allow_binary_specifier && (styles - xtd::number_styles::binary_number) != xtd::number_styles::none) throw std::invalid_argument("Invalid xtd::number_styles flags");
  if ((styles & xtd::number_styles::allow_octal_specifier) == xtd::number_styles::allow_octal_specifier && (styles - xtd::number_styles::octal_number) != xtd::number_styles::none) throw std::invalid_argument("Invalid xtd::number_styles flags");
  if ((styles & xtd::number_styles::allow_hex_specifier) == xtd::number_styles::allow_hex_specifier && (styles - xtd::number_styles::hex_number) != xtd::number_styles::none) throw std::invalid_argument("Invalid xtd::number_styles flags");
  
  int base = 10;
  if ((styles & xtd::number_styles::binary_number) == xtd::number_styles::binary_number) base = 2;
  if ((styles & xtd::number_styles::octal_number) == xtd::number_styles::octal_number) base = 8;
  if ((styles & xtd::number_styles::hex_number) == xtd::number_styles::hex_number) base = 16;
  
  std::basic_string<Char> str = __parse_remove_decorations(s, styles);
  if (__parse_remove_signs(str, styles) < 0) throw std::invalid_argument("unsigned type can't have minus sign");
  
  __parse_check_valid_characters(str, styles);
  
  if ((styles & xtd::number_styles::allow_exponent) == xtd::number_styles::allow_exponent) return __parse_floating_point<Value>(str, 0, styles);
  return __parse_unsigned<Value>(str, base, styles);
}
/// @endcond

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  template<typename Value>
  inline Value parse(const std::string& str) {throw std::invalid_argument("Parse speciailisation not found");}

  template<typename Value>
  inline Value parse(const std::string& str, const std::string& fmt) {throw std::invalid_argument("Parse speciailisation not found");}

  template<>
  inline std::string parse<std::string>(const std::string& str) {return str;}

  template<typename Value>
  inline Value parse(const std::string& str, number_styles) {throw std::invalid_argument("Parse speciailisation not found");}
  
  template<>
  inline int8_t parse<int8_t>(const std::string& str, number_styles styles) {return __parse_number<int8_t>(str, styles);}
  
  template<>
  inline char parse<char>(const std::string& str, number_styles styles) {return __parse_number<char>(str, styles);}
  
  template<>
  inline unsigned char parse<unsigned char>(const std::string& str, number_styles styles) {return __parse_unsigned_number<unsigned char>(str, styles);}
  
  template<>
  inline short parse<short>(const std::string& str, number_styles styles) {return __parse_number<short>(str, styles);}
  
  template<>
  inline unsigned short parse<unsigned short>(const std::string& str, number_styles styles) {return __parse_unsigned_number<unsigned short>(str, styles);}

  template<>
  inline int parse<int>(const std::string& str, number_styles styles) {return __parse_number<int>(str, styles);}
  
  template<>
  inline unsigned int parse<unsigned int>(const std::string& str, number_styles styles) {return __parse_unsigned_number<unsigned int>(str, styles);}

  template<>
  inline long parse<long>(const std::string& str, number_styles styles) {return __parse_number<long>(str, styles);}
  
  template<>
  inline unsigned long parse<unsigned long>(const std::string& str, number_styles styles) {return __parse_unsigned_number<unsigned long>(str, styles);}

  template<>
  inline long long parse<long long>(const std::string& str, number_styles styles) {return __parse_number<long long>(str, styles);}
  
  template<>
  inline unsigned long long parse<unsigned long long>(const std::string& str, number_styles styles) {return __parse_unsigned_number<unsigned long long>(str, styles);}

  template<>
  inline float parse<float>(const std::string& str, number_styles styles) {return __parse_floating_point_number<float>(str, styles);}

  template<>
  inline double parse<double>(const std::string& str, number_styles styles) {return __parse_floating_point_number<double>(str, styles);}

  template<>
  inline long double parse<long double>(const std::string& str, number_styles styles) {return __parse_floating_point_number<long double>(str, styles);}

  template<>
  inline int8_t parse<int8_t>(const std::string& str) {return parse<int8_t>(str, number_styles::integer);}
  
  template<>
  inline char parse<char>(const std::string& str) {return parse<char>(str, number_styles::integer);}
  
  template<>
  inline unsigned char parse<unsigned char>(const std::string& str) {return parse<unsigned char>(str, number_styles::integer);}

  template<>
  inline short parse<short>(const std::string& str) {return parse<short>(str, number_styles::integer);}
  
  template<>
  inline unsigned short parse<unsigned short>(const std::string& str) {return parse<unsigned short>(str, number_styles::integer);}

  template<>
  inline int parse<int>(const std::string& str) {return parse<int>(str, number_styles::integer);}
  
  template<>
  inline unsigned int parse<unsigned int>(const std::string& str) {return parse<unsigned int>(str, number_styles::integer);}

  template<>
  inline long parse<long>(const std::string& str) {return parse<long>(str, number_styles::integer);}
  
  template<>
  inline unsigned long parse<unsigned long>(const std::string& str) {return parse<unsigned long>(str, number_styles::integer);}

  template<>
  inline long long parse<long long>(const std::string& str) {return parse<long long>(str, number_styles::integer);}

  template<>
  inline unsigned long long parse<unsigned long long>(const std::string& str) {return parse<unsigned long long>(str, number_styles::integer);}

  template<>
  inline float parse<float>(const std::string& str) {return parse<float>(str, number_styles::fixed_point);}

  template<>
  inline double parse<double>(const std::string& str) {return parse<double>(str, number_styles::fixed_point);}

  template<>
  inline long double parse<long double>(const std::string& str) {return parse<long double>(str, number_styles::fixed_point);}

  template<typename Value>
  inline Value parse(const std::wstring& str) {throw std::invalid_argument("Parse speciailisation not found");}

  template<typename Value>
  inline Value parse(const std::u16string& str) {throw std::invalid_argument("Parse speciailisation not found");}

  template<typename Value>
  inline Value parse(const std::u32string& str) {throw std::invalid_argument("Parse speciailisation not found");}

  template<typename Value, typename Char>
  inline bool try_parse(const std::basic_string<Char>& str, Value& value) {
    try {
      value = parse<Value>(str);
      return true;
    } catch(...) {
      return false;
    }
  }
}


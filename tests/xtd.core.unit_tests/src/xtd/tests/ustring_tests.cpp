#include <xtd/ustring>
#include <xtd/null_pointer_exception>
#include <xtd/tunit/assert>
#include <xtd/tunit/collection_assert>
#include <xtd/tunit/test_class_attribute>
#include <xtd/tunit/test_method_attribute>

using namespace std;
using namespace xtd;
using namespace xtd::tunit;

namespace xtd::tests {
  class test_class_(ustring_tests) {
    void test_method_(default_constructor) {
      ustring s;
      assert::is_zero(s.length(), csf_);
      assert::is_true(ustring::is_empty(s), csf_);
    }
    
    void test_method_(constructor_with_ustring) {
      ustring s1 = "test";
      ustring s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
    
    void test_method_(constructor_with_literal) {
      ustring s = "test";
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
    
    void test_method_(constructor_with_string) {
      string s1 = "test";
      ustring s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
    
    void test_method_(constructor_with_w_literal) {
      ustring s = L"test";
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
    
    void test_method_(constructor_with_wstring) {
      wstring s1 = L"test";
      ustring s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
    
    void test_method_(constructor_with_u8_literal) {
      ustring s = u8"test";
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
    
#if defined(__cpp_lib_char8_t)
    void test_method_(constructor_with_u8string) {
      u8string s1 = u8"test";
      ustring s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
#endif
    
    void test_method_(constructor_with_u16_literal) {
      ustring s = u"test";
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
    
    void test_method_(constructor_with_u16string) {
      u16string s1 = u"test";
      ustring s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
    
    void test_method_(constructor_with_u32_literal) {
      ustring s = U"test";
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
    
    void test_method_(constructor_with_u32string) {
      u32string s1 = U"test";
      ustring s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
    
    void test_method_(constructor_with_char_ptr_null) {
      char* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }

    void test_method_(constructor_with_const_char_ptr_null) {
      const char* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }
    
#if defined(__cpp_lib_char8_t)
    void test_method_(constructor_with_char8_ptr_null) {
      char8* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }
    
    void test_method_(constructor_with_const_char8_ptr_null) {
      const char8* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }
#endif
    
    void test_method_(constructor_with_char16_ptr_null) {
      char16* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }
    
    void test_method_(constructor_with_const_char16_ptr_null) {
      const char16* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }
    
    void test_method_(constructor_with_char32_ptr_null) {
      char32* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }
    
    void test_method_(constructor_with_const_char32_ptr_null) {
      const char32* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }
    
    void test_method_(constructor_with_wchar_ptr_null) {
      wchar* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }
    
    void test_method_(constructor_with_const_wchar_ptr_null) {
      const wchar* ptr = nullptr;
      assert::throws<null_pointer_exception>([&]{ustring s = ptr;}, csf_);
    }
    
    void test_method_(operator_equal_with_string) {
      auto s1 = string {"test"};
      ustring s2;
      s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
    
#if defined(__cpp_lib_char8_t)
    void test_method_(operator_equal_with_u8string1) {
      auto s1 = u8string {u8"test"};
      ustring s2;
      s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
#endif
    
    void test_method_(operator_equal_with_u16string1) {
      auto s1 = u16string {u"test"};
      ustring s2;
      s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
    
    void test_method_(operator_equal_with_u32string1) {
      auto s1 = u32string {U"test"};
      ustring s2;
      s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
    
    void test_method_(operator_equal_with_ustring1) {
      auto s1 = ustring {"test"};
      ustring s2;
      s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }
    
    void test_method_(operator_equal_with_wstring1) {
      auto s1 = wstring {L"test"};
      ustring s2;
      s2 = s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("test", s2, csf_);
    }

    void test_method_(operator_equal_with_literal) {
      auto p = "test";
      ustring s;
      s = p;
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }

    void test_method_(operator_equal_with_non_const_literal) {
      auto p = "test";
      ustring s;
      s = const_cast<char*>(p);
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }

    void test_method_(operator_equal_with_u8_literal) {
      auto p = u8"test";
      ustring s;
      s = p;
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
    
#if defined(__cpp_lib_char8_t)
    void test_method_(operator_equal_with_non_const_u8_literal) {
      auto p = u8"test";
      ustring s;
      s = const_cast<char8*>(p);
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
#endif

    void test_method_(operator_equal_with_u16_literal) {
      auto p = u"test";
      ustring s;
      s = p;
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
    
    void test_method_(operator_equal_with_non_const_u16_literal) {
      auto p = u"test";
      ustring s;
      s = const_cast<char16*>(p);
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }

    void test_method_(operator_equal_with_u32_literal) {
      auto p = U"test";
      ustring s;
      s = p;
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
    
    void test_method_(operator_equal_with_non_const_u32_literal) {
      auto p = U"test";
      ustring s;
      s = const_cast<char32*>(p);
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }

    void test_method_(operator_equal_with_w_literal) {
      auto p = L"test";
      ustring s;
      s = p;
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }
    
    void test_method_(operator_equal_with_non_const_w_literal) {
      auto p = L"test";
      ustring s;
      s = const_cast<wchar*>(p);
      assert::are_equal(4_sz, s.length(), csf_);
      assert::are_equal("test", s, csf_);
    }

    void test_method_(operator_equal_with_char_ptr_null) {
      char* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
    
    void test_method_(operator_equal_with_const_char_ptr_null) {
      const char* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
    
#if defined(__cpp_lib_char8_t)
    void test_method_(operator_equal_with_char8_ptr_null) {
      char8* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
    
    void test_method_(operator_equal_with_const_char8_ptr_null) {
      const char8* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
#endif
    
    void test_method_(operator_equal_with_char16_ptr_null) {
      char16* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
    
    void test_method_(operator_equal_with_const_char16_ptr_null) {
      const char16* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
    
    void test_method_(operator_equal_with_char32_ptr_null) {
      char32* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
    
    void test_method_(operator_equal_with_const_char32_ptr_null) {
      const char32* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
    
    void test_method_(operator_equal_with_wchar_ptr_null) {
      wchar* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
    
    void test_method_(operator_equal_with_const_wchar_ptr_null) {
      const wchar* ptr = nullptr;
      ustring s;
      assert::throws<null_pointer_exception>([&]{s = ptr;}, csf_);
    }
    
    void test_method_(operator_plus_equal_with_string) {
      auto s1 = string {"s1"};
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
#if defined(__cpp_lib_char8_t)
    void test_method_(operator_plus_equal_with_u8string) {
      auto s1 = u8string {u8"s1"};
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
#endif
    
    void test_method_(operator_plus_equal_with_u16string) {
      auto s1 = u16string {u"s1"};
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_u32string) {
      auto s1 = u32string {U"s1"};
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_ustring) {
      auto s1 = ustring {"s1"};
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_wstring) {
      auto s1 = wstring {L"s1"};
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_literal) {
      auto s1 = "s1";
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_u8_literal) {
      auto s1 = u8"s1";
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_u16_literal) {
      auto s1 = u"s1";
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_u32_literal) {
      auto s1 = U"s1";
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_w_literal) {
      auto s1 = L"s1";
      ustring s2 = "s2";
      s2 += s1;
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_const_cast_literal) {
      auto s1 = "s1";
      ustring s2 = "s2";
      s2 += const_cast<char*>(s1);
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
#if defined(__cpp_lib_char8_t)
    void test_method_(operator_plus_equal_with_const_cast_u8_literal) {
      auto s1 = u8"s1";
      ustring s2 = "s2";
      s2 += const_cast<char8*>(s1);
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
#endif
    
    void test_method_(operator_plus_equal_with_const_cast_u16_literal) {
      auto s1 = u"s1";
      ustring s2 = "s2";
      s2 += const_cast<char16*>(s1);
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_const_cast_u32_literal) {
      auto s1 = U"s1";
      ustring s2 = "s2";
      s2 += const_cast<char32*>(s1);
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_const_cast_w_literal) {
      auto s1 = L"s1";
      ustring s2 = "s2";
      s2 += const_cast<wchar*>(s1);
      assert::are_equal(4_sz, s2.length(), csf_);
      assert::are_equal("s2s1", s2, csf_);
    }
    
    void test_method_(operator_plus_equal_with_char_ptr_null) {
      char* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }
    
    void test_method_(operator_plus_equal_with_const_char_ptr_null) {
      const char* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }
    
#if defined(__cpp_lib_char8_t)
    void test_method_(operator_plus_equal_with_char8_ptr_null) {
      char8* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }
    
    void test_method_(operator_plus_equal_with_const_char8_ptr_null) {
      const char8* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }
#endif
    
    void test_method_(operator_plus_equal_with_char16_ptr_null) {
      char16* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }
    
    void test_method_(operator_plus_equal_with_const_char16_ptr_null) {
      const char16* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }
    
    void test_method_(operator_plus_equal_with_char32_ptr_null) {
      char32* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }
    
    void test_method_(operator_plus_equal_with_const_char32_ptr_null) {
      const char32* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }
    
    void test_method_(operator_plus_equal_with_wchar_ptr_null) {
      wchar* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }
    
    void test_method_(operator_plus_equal_with_const_wchar_ptr_null) {
      const wchar* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&] {s2 += s1;}, csf_);
    }

    void test_method_(operator_plus_with_string) {
      auto s1 = string {"s1"};
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }
    
#if defined(__cpp_lib_char8_t)
    void test_method_(operator_plus_with_u8string) {
      auto s1 = u8string {u8"s1"};
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }
#endif
    
    void test_method_(operator_plus_with_u16string) {
      auto s1 = u16string {u"s1"};
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }
    
    void test_method_(operator_plus_with_u32string) {
      auto s1 = u32string {U"s1"};
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }
    
    void test_method_(operator_plus_with_ustring) {
      auto s1 = ustring {"s1"};
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }
    
    void test_method_(operator_plus_with_wstring) {
      auto s1 = wstring {L"s1"};
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

    void test_method_(operator_plus_with_literal) {
      auto s1 = "s1";
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

    void test_method_(operator_plus_with_u8_literal) {
      auto s1 = u8"s1";
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

    void test_method_(operator_plus_with_u16_literal) {
      auto s1 = u"s1";
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

    void test_method_(operator_plus_with_u32_literal) {
      auto s1 = U"s1";
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

    void test_method_(operator_plus_with_w_literal) {
      auto s1 = L"s1";
      ustring s2 = "s2";
      ustring s3 = s2 + s1;
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

    void test_method_(operator_plus_with_const_cast_literal) {
      auto s1 = "s1";
      ustring s2 = "s2";
      ustring s3 = s2 + const_cast<char*>(s1);
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

#if defined(__cpp_lib_char8_t)
    void test_method_(operator_plus_with_const_cast_u8_literal) {
      auto s1 = u8"s1";
      ustring s2 = "s2";
      ustring s3 = s2 + const_cast<char8*>(s1);
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }
#endif

    void test_method_(operator_plus_with_const_cast_u16_literal) {
      auto s1 = u"s1";
      ustring s2 = "s2";
      ustring s3 = s2 + const_cast<char16*>(s1);
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

    void test_method_(operator_plus_with_const_cast_u32_literal) {
      auto s1 = U"s1";
      ustring s2 = "s2";
      ustring s3 = s2 + const_cast<char32*>(s1);
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

    void test_method_(operator_plus_with_const_cast_w_literal) {
      auto s1 = L"s1";
      ustring s2 = "s2";
      ustring s3 = s2 + const_cast<wchar*>(s1);
      assert::are_equal(4_sz, s3.length(), csf_);
      assert::are_equal("s2s1", s3, csf_);
    }

    void test_method_(operator_plus_with_char_ptr_null) {
      char* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }
    
    void test_method_(operator_plus_with_const_char_ptr_null) {
      const char* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }

#if defined(__cpp_lib_char8_t)
    void test_method_(operator_plus_with_char8_ptr_null) {
      char8* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }
    
    void test_method_(operator_plus_with_const_char8_ptr_null) {
      const char8* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }
#endif

    void test_method_(operator_plus_with_char16_ptr_null) {
      char16* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }
    
    void test_method_(operator_plus_with_const_char16_ptr_null) {
      const char16* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }

    void test_method_(operator_plus_with_char32_ptr_null) {
      char32* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }
    
    void test_method_(operator_plus_with_const_char32_ptr_null) {
      const char32* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }

    void test_method_(operator_plus_with_wchar_ptr_null) {
      wchar* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }
    
    void test_method_(operator_plus_with_const_wchar_ptr_null) {
      const wchar* s1 = nullptr;
      ustring s2 = "s2";
      assert::throws<null_pointer_exception>([&]{ustring s3 = s2 + s1;}, csf_);
    }

    void test_method_(compare) {
      assert::is_zero(ustring::compare("a", "a"), csf_);
      assert::is_negative(ustring::compare("a", "b"), csf_);
      assert::is_positive(ustring::compare("b", "a"), csf_);
    }
    
    void test_method_(compare_ignore_case_false) {
      assert::is_not_zero(ustring::compare("a", "A", false), csf_);
    }
    
    void test_method_(compare_ignore_case_true) {
      assert::is_zero(ustring::compare("a", "A", true), csf_);
    }
    
    void test_method_(compare_index_length) {
      assert::is_not_zero(ustring::compare("abcde", 1, "debcaf", 1, 2), csf_);
      assert::is_zero(ustring::compare("abcde", 1, "debcaf", 2, 2), csf_);
    }
    
    void test_method_(compare_index_length_ingore_case_false) {
      assert::is_not_zero(ustring::compare("abcde", 1, "DEBCAF", 2, 2, false), csf_);
    }
    
    void test_method_(compare_index_length_ingore_case_true) {
      assert::is_zero(ustring::compare("abcde", 1, "DEBCAF", 2, 2, true), csf_);
    }
    
    void test_method_(concat_char_pointers) {
      assert::are_equal("abcd", ustring::concat("a", "b", "c", "d"), csf_);
    }
    
    void test_method_(concat_strings) {
      assert::are_equal("abcd", ustring::concat("a"s, "b"s, "c"s, "d"s), csf_);
    }
    
    void test_method_(concat_ints) {
      assert::are_equal("124342", ustring::concat(1, 24, 3, 42), csf_);
    }
    
    void test_method_(concat_any) {
      assert::are_equal("12434.2", ustring::concat("1", 24, '3', 4.2), csf_);
    }
    
    void test_method_(concat_initializer_list) {
      assert::are_equal(L"1234", ustring::concat({L"1", L"2", L"3", L"4"}), csf_);
    }
    
    void test_method_(concat_vector) {
      assert::are_equal(L"1234", ustring::concat(std::vector {L"1", L"2", L"3", L"4"}), csf_);
    }
    
    void test_method_(contains) {
      assert::is_true(ustring("abcd").contains("bc"), csf_);
      assert::is_false(ustring("abcd").contains("ad"), csf_);
    }
    
    void test_method_(ends_with_char) {
      assert::is_true(ustring("abcd").ends_with('d'), csf_);
      assert::is_false(ustring("abcd").ends_with('D'), csf_);
      assert::is_false(ustring("abcd").ends_with('B'), csf_);
    }
    
    void test_method_(ends_with_string) {
      assert::is_true(ustring("abcd").ends_with("cd"), csf_);
      assert::is_false(ustring("abcd").ends_with("ab"), csf_);
    }
    
    void test_method_(ends_with_string_ignore_case_false) {
      assert::is_true(ustring("abcd").ends_with("cd", false), csf_);
      assert::is_false(ustring("abcd").ends_with("CD", false), csf_);
      assert::is_false(ustring("abcd").ends_with("AB", false), csf_);
    }
    
    void test_method_(ends_with_string_ignore_case_true) {
      assert::is_true(ustring("abcd").ends_with("cd", true), csf_);
      assert::is_true(ustring("abcd").ends_with("CD", true), csf_);
      assert::is_false(ustring("abcd").ends_with("AB", true), csf_);
    }
    
    void test_method_(string_format_with_automatic_arguments) {
      assert::are_equal("42 str 24", ustring::format("{} {} {}", 42, "str", 24), csf_);
    }
    
    void test_method_(string_format_with_indexed_arguments) {
      assert::are_equal("42 str 24 str 42", ustring::format("{0} {1} {2} {1} {0}", 42, "str", 24), csf_);
    }
    
    void test_method_(string_sprintf_with_one_argument) {
      std::string s = ustring::sprintf("%d", 42);
      assert::are_equal("42", s, csf_);
    }
    
    void test_method_(wstring_sprintf_with_one_argument) {
      assert::are_equal(L"42", ustring::sprintf(L"%d", 42), csf_);
    }
    
    void test_method_(u16string_sprintf_with_one_argument) {
      assert::are_equal(u"42", ustring::sprintf(u"%d", 42), csf_);
    }
    
    void test_method_(u32string_sprintf_with_one_argument) {
      assert::are_equal(U"42", ustring::sprintf(U"%d", 42), csf_);
    }
    
    void test_method_(string_sprintf_with_string_argument) {
      assert::are_equal("str", ustring::sprintf("%s", "str"s), csf_);
    }
    
    /// @todo Debug on Windows
    ///void test_method_(wstring_sprintf_with_string_argument) {
    ///  assert::are_equal(L"str", ustring::sprintf(L"%s", "str"s), csf_);
    ///}
    
    void test_method_(string_sprintf_with_wstring_argument) {
      assert::are_equal("str", ustring::sprintf("%ls", L"str"s), csf_);
    }
    
    void test_method_(wstring_sprintf_with_wstring_argument) {
      assert::are_equal(L"str", ustring::sprintf(L"%ls", L"str"s), csf_);
    }
    
    void test_method_(get_hash_code) {
      assert::are_equal(ustring("01234").get_hash_code(), ustring("01234").get_hash_code(), csf_);
      assert::are_not_equal(ustring("01235").get_hash_code(), ustring("01234").get_hash_code(), csf_);
    }
    
    void test_method_(index_of_char) {
      assert::are_equal(3_sz, ustring("01234").index_of('3'), csf_);
      assert::are_equal(3_sz, ustring("0123434").index_of('3'), csf_);
    }
    
    void test_method_(index_of_string) {
      assert::are_equal(2_sz, ustring("01234").index_of("23"), csf_);
      assert::are_equal(2_sz, ustring("0123423").index_of("23"), csf_);
    }
    
    void test_method_(index_of_char_start_index) {
      assert::are_equal(5_sz, ustring("0123434").index_of('3', 4), csf_);
    }
    
    void test_method_(index_of_string_start_index) {
      assert::are_equal(5_sz, ustring("0123423").index_of("23", 3), csf_);
    }
    
    void test_method_(index_of_char_start_index_count) {
      assert::are_equal(ustring::npos, ustring("012346734").index_of('3', 4, 2), csf_);
    }
    
    void test_method_(index_of_string_start_index_count) {
      assert::are_equal(ustring::npos, ustring("012346723").index_of("23", 3, 2), csf_);
    }
    
    void test_method_(index_of_any) {
      assert::are_equal(2_sz, ustring("01234").index_of_any({'5', '3', '2'}), csf_);
    }
    
    void test_method_(index_of_any_start_index) {
      assert::are_equal(3_sz, ustring("01234").index_of_any({'5', '3', '2'}, 3), csf_);
    }
    
    void test_method_(index_of_any_start_index_and_count) {
      assert::are_equal(2_sz, ustring("01234").index_of_any({'5', '2'}, 2, 1), csf_);
      assert::are_equal(ustring::npos, ustring("01234").index_of_any({'5', '3'}, 0, 2), csf_);
    }
    
    void test_method_(insert) {
      assert::are_equal("012345", ustring("345").insert(0, "012"), csf_);
    }
    
    void test_method_(join_const_char_pointer_array) {
      assert::are_equal("One, Two, Three", ustring::join(", ", {"One", "Two", "Three"}), csf_);
    }
    
    void test_method_(join_int_array) {
      assert::are_equal("1, 2, 3", ustring::join(", ", {1, 2, 3}), csf_);
    }
    
    void test_method_(join_int_array_index) {
      assert::are_equal("2, 3, 4, 5", ustring::join(", ", {1, 2, 3, 4, 5}, 1), csf_);
    }
    
    void test_method_(join_int_array_index_count) {
      assert::are_equal("2, 3", ustring::join(", ", {1, 2, 3, 4, 5}, 1, 2), csf_);
    }
    
    void test_method_(last_index_of_char) {
      assert::are_equal(3_sz, ustring("01234").last_index_of('3'), csf_);
      assert::are_equal(5_sz, ustring("0123434").last_index_of('3'), csf_);
    }
    
    void test_method_(last_index_of_string) {
      assert::are_equal(2_sz, ustring("01234").last_index_of("23"), csf_);
      assert::are_equal(5_sz, ustring("0123423").last_index_of("23"), csf_);
    }
    
    void test_method_(last_index_of_char_start_index) {
      assert::are_equal(5_sz, ustring("0123434").last_index_of('3', 4), csf_);
    }
    
    void test_method_(last_index_of_string_start_index) {
      assert::are_equal(5_sz, ustring("0123423").last_index_of("23", 3), csf_);
    }
    
    void test_method_(last_index_of_char_start_index_count) {
      assert::are_equal(ustring::npos, ustring("012346734").last_index_of('3', 4, 2), csf_);
    }
    
    void test_method_(last_index_of_string_start_index_count) {
      assert::are_equal(ustring::npos, ustring("012346723").last_index_of("23", 3, 2), csf_);
    }
    
    void test_method_(last_index_of_any) {
      assert::are_equal(3_sz, ustring("01234").last_index_of_any({'5', '3', '2'}), csf_);
    }
    
    void test_method_(last_index_of_any_start_index) {
      assert::are_equal(3_sz, ustring("01234").last_index_of_any({'5', '3', '2'}, 3), csf_);
    }
    
    void test_method_(last_index_of_any_start_index_and_count) {
      assert::are_equal(2_sz, ustring("01234").last_index_of_any({'5', '2'}, 2, 1), csf_);
      assert::are_equal(ustring::npos, ustring("01234").last_index_of_any({'5', '3'}, 0, 2), csf_);
    }
    
    void test_method_(pad_left) {
      assert::are_equal("       str", ustring("str").pad_left(10), csf_);
    }
    
    void test_method_(pad_left_mul) {
      assert::are_equal("*******str", ustring("str").pad_left(10, '*'), csf_);
    }
    
    void test_method_(pad_right) {
      assert::are_equal("str       ", ustring("str").pad_right(10), csf_);
    }
    
    void test_method_(pad_right_mul) {
      assert::are_equal("str*******", ustring("str").pad_right(10, '*'), csf_);
    }
    
    void test_method_(remove_start_index) {
      assert::are_equal("012", ustring("0123456").remove(3), csf_);
    }
    
    void test_method_(remove_start_index_count) {
      assert::are_equal("01256", ustring("0123456").remove(3, 2), csf_);
    }
    
    void test_method_(remove_start_index_out_of_range) {
      assert::are_equal("0123456", ustring("0123456").remove(10), csf_);
    }
    
    void test_method_(remove_start_index_count_out_of_range) {
      assert::are_equal("012", ustring("0123456").remove(3, 10), csf_);
    }
    
    void test_method_(replace_char) {
      assert::are_equal("accribuce", ustring("attribute").replace('t', 'c'), csf_);
    }
    
    void test_method_(replace_string) {
      assert::are_equal("ola world and ola me", ustring("hello world and hello me").replace("hello", "ola"), csf_);
    }
    
    void test_method_(split) {
      collection_assert::are_equal({"One", "Two", "Three", "Four", "Five", "Six", "Seven"}, ustring("One Two\vThree\fFour\rFive\nSix\nSeven").split(), csf_);
    }
    
    void test_method_(split_empty_separators) {
      collection_assert::are_equal({"One", "Two", "Three", "Four", "Five", "Six", "Seven"}, ustring("One Two\vThree\fFour\rFive\nSix\nSeven").split({}), csf_);
    }
    
    void test_method_(split_one_separators) {
      collection_assert::are_equal({"One Two", "Three", "Four", "Five", "Six", "Seven"}, ustring("One Two,Three,Four,Five,Six,Seven").split({','}), csf_);
    }
    
    void test_method_(split_separators) {
      collection_assert::are_equal({"One", "Two", "", "Three", "", "Four", "Five", "Six", "Seven"}, ustring("One Two::Three,:Four.Five/Six,Seven").split({' ', ',', ':', '.', '/'}), csf_);
    }
    
    void test_method_(split_separators_split_option_none) {
      collection_assert::are_equal({"One", "Two", "", "Three", "", "Four", "Five", "Six", "Seven"}, ustring("One Two::Three,:Four.Five/Six,Seven").split({' ', ',', ':', '.', '/'}, string_split_options::none), csf_);
    }
    
    void test_method_(split_separators_split_option_remove_empty_entries) {
      collection_assert::are_equal({"One", "Two", "Three", "Four", "Five", "Six", "Seven"}, ustring("One      Two::Three,:Four......Five/Six,,,,,,,Seven").split({' ', ',', ':', '.', '/'}, string_split_options::remove_empty_entries), csf_);
    }
    
    void test_method_(split_separators_count_split_option_remove_empty_entries) {
      collection_assert::are_equal({"One", "Two", "Three,:Four......Five/Six,,,,,,,Seven"}, ustring("One      Two::Three,:Four......Five/Six,,,,,,,Seven").split({' ', ',', ':', '.', '/'}, 3, string_split_options::remove_empty_entries), csf_);
    }
    
    void test_method_(start_with_char) {
      assert::is_true(ustring("Hello, World!").starts_with('H'), csf_);
      assert::is_false(ustring("Hello, World!").starts_with('h'), csf_);
    }
    
    void test_method_(start_with_char_ignore_case_false) {
      assert::is_true(ustring("Hello, World!").starts_with('H', false), csf_);
      assert::is_false(ustring("Hello, World!").starts_with('h', false), csf_);
    }
    
    void test_method_(start_with_char_ignore_case_true) {
      assert::is_true(ustring("Hello, World!").starts_with('H', true), csf_);
      assert::is_true(ustring("Hello, World!").starts_with('h', true), csf_);
    }
    
    void test_method_(start_with_string) {
      assert::is_true(ustring("Hello, World!").starts_with("Hello"), csf_);
      assert::is_false(ustring("Hello, World!").starts_with("hello"), csf_);
    }
    
    void test_method_(start_with_string_ignore_case_false) {
      assert::is_true(ustring("Hello, World!").starts_with("Hello", false), csf_);
      assert::is_false(ustring("Hello, World!").starts_with("hello", false), csf_);
    }
    
    void test_method_(start_with_string_ignore_case_true) {
      assert::is_true(ustring("Hello, World!").starts_with("Hello", true), csf_);
      assert::is_true(ustring("Hello, World!").starts_with("hello", true), csf_);
    }
    
    void test_method_(substring) {
      assert::are_equal("23456", ustring("0123456").substring(2), csf_);
    }
    
    void test_method_(substring_length) {
      assert::are_equal("234", ustring("0123456").substring(2, 3), csf_);
    }
    
    void test_method_(substring_start_index_out_of_range) {
      assert::is_empty(ustring("0123456").substring(10), csf_);
    }
    
    void test_method_(substring_count_out_of_range) {
      assert::are_equal("23456", ustring("0123456").substring(2, 10), csf_);
    }
    
    void test_method_(to_array) {
      collection_assert::are_equal({'0', '1', '2', '3', '4', '5', '6'}, ustring("0123456").to_array(), csf_);
    }
    
    void test_method_(to_array_start_index) {
      collection_assert::are_equal({'2', '3', '4', '5', '6'}, ustring("0123456").to_array(2), csf_);
    }
    
    void test_method_(to_array_start_index_length) {
      collection_assert::are_equal({'2', '3', '4'}, ustring("0123456").to_array(2, 3), csf_);
    }
    
    void test_method_(to_array_start_index_out_of_range) {
      collection_assert::are_equal(std::vector<char> {}, ustring("0123456").to_array(10), csf_);
    }
    
    void test_method_(to_array_start_index_length_out_of_range) {
      collection_assert::are_equal({'2', '3', '4', '5', '6'}, ustring("0123456").to_array(2, 10), csf_);
    }
    
    void test_method_(to_lower) {
      assert::are_equal("abcdef", ustring("ABCDEF").to_lower(), csf_);
    }
    
    void test_method_(to_title_case) {
      assert::are_equal("Abc DEF Ghi Jkl Mno", ustring("abc DEF gHi JKl mnO").to_title_case(), csf_);
    }
    
    void test_method_(to_upper) {
      assert::are_equal("ABCDEF", ustring("abcdef").to_upper(), csf_);
    }
    
    void test_method_(trim_end) {
      assert::are_equal("abcdef", ustring("abcdef   ").trim_end(), csf_);
    }
    
    void test_method_(trim_end_char) {
      assert::are_equal("abcdef", ustring("abcdef***").trim_end('*'), csf_);
    }
    
    void test_method_(trim_end_chars) {
      assert::are_equal("abcdef", ustring("abcdef****   +++").trim_end({'*', ' ', '+'}), csf_);
    }
    
    void test_method_(trim_start) {
      assert::are_equal("abcdef", ustring("   abcdef").trim_start(), csf_);
    }
    
    void test_method_(trim_start_char) {
      assert::are_equal("abcdef", ustring("***abcdef").trim_start('*'), csf_);
    }
    
    void test_method_(trim_start_chars) {
      assert::are_equal("abcdef", ustring("****   +++abcdef").trim_start({'*', ' ', '+'}), csf_);
    }
    
    void test_method_(trim) {
      assert::are_equal("abcdef", ustring("   abcdef     ").trim(), csf_);
    }
    
    void test_method_(trim_char) {
      assert::are_equal("abcdef", ustring("***abcdef******").trim('*'), csf_);
    }
    
    void test_method_(trim_chars) {
      assert::are_equal("abcdef", ustring("****   +++abcdef** ++++++    **").trim({'*', ' ', '+'}), csf_);
    }
  };
}

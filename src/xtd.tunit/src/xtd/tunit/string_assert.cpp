#include "../../../include/xtd/tunit/string_assert.h"

using namespace xtd;
using namespace xtd::diagnostics;
using namespace xtd::tunit;

void string_assert::are_equal_ignoring_case(const xtd::string& expected, const xtd::string& actual) {
  are_equal_ignoring_case(expected, actual, string::empty_string, stack_frame::empty());
}

void string_assert::are_equal_ignoring_case(const xtd::string& expected, const xtd::string& actual, const stack_frame& stack_frame) {
  are_equal_ignoring_case(expected, actual, string::empty_string, stack_frame);
}

void string_assert::are_equal_ignoring_case(const xtd::string& expected, const xtd::string& actual, const xtd::string& message) {
  are_equal_ignoring_case(expected, actual, message, stack_frame::empty());
}

void string_assert::are_equal_ignoring_case(const xtd::string& expected, const xtd::string& actual, const xtd::string& message, const stack_frame& stack_frame) {
  if (actual.to_lower() == expected.to_lower())
    assert::succeed(message, stack_frame);
  else
    fail(to_string(expected) + ", ignoring case", to_string(actual), message, stack_frame);
}

void string_assert::are_not_equal_ignoring_case(const xtd::string& expected, const xtd::string& actual) {
  are_not_equal_ignoring_case(expected, actual, string::empty_string, stack_frame::empty());
}

void string_assert::are_not_equal_ignoring_case(const xtd::string& expected, const xtd::string& actual, const stack_frame& stack_frame) {
  are_not_equal_ignoring_case(expected, actual, string::empty_string, stack_frame);
}

void string_assert::are_not_equal_ignoring_case(const xtd::string& expected, const xtd::string& actual, const xtd::string& message) {
  are_not_equal_ignoring_case(expected, actual, message, stack_frame::empty());
}

void string_assert::are_not_equal_ignoring_case(const xtd::string& expected, const xtd::string& actual, const xtd::string& message, const stack_frame& stack_frame) {
  if (actual.to_lower() != expected.to_lower())
    assert::succeed(message, stack_frame);
  else
    fail("not " + to_string(expected) + ", ignoring case", to_string(actual), message, stack_frame);
}

void string_assert::contains(const xtd::string& item, const xtd::string& string) {
  contains(item, string, string::empty_string, stack_frame::empty());
}

void string_assert::contains(const xtd::string& item, const xtd::string& string, const stack_frame& stack_frame) {
  contains(item, string, string::empty_string, stack_frame);
}

void string_assert::contains(const xtd::string& item, const xtd::string& string, const xtd::string& message) {
  contains(item, string, message, stack_frame::empty());
}

void string_assert::contains(const xtd::string& item, const xtd::string& string, const xtd::string& message, const stack_frame& stack_frame) {
  if (string.find(item) != string::npos)
    assert::succeed(message, stack_frame);
  else
    fail("string containing " + to_string(item), to_string(string), message, stack_frame);
}

void string_assert::does_not_contain(const xtd::string& item, const xtd::string& string) {
  does_not_contain(item, string, string::empty_string, stack_frame::empty());
}

void string_assert::does_not_contain(const xtd::string& item, const xtd::string& string, const stack_frame& stack_frame) {
  does_not_contain(item, string, string::empty_string, stack_frame);
}

void string_assert::does_not_contain(const xtd::string& item, const xtd::string& string, const xtd::string& message) {
  does_not_contain(item, string, message, stack_frame::empty());
}

void string_assert::does_not_contain(const xtd::string& item, const xtd::string& string, const xtd::string& message, const stack_frame& stack_frame) {
  if (string.find(item) == string::npos)
    assert::succeed(message, stack_frame);
  else
    fail("not string containing " + to_string(item), to_string(string), message, stack_frame);
}

void string_assert::does_not_end_with(const xtd::string& item, const xtd::string& string) {
  does_not_end_with(item, string, string::empty_string, stack_frame::empty());
}

void string_assert::does_not_end_with(const xtd::string& item, const xtd::string& string, const stack_frame& stack_frame) {
  does_not_end_with(item, string, string::empty_string, stack_frame);
}

void string_assert::does_not_end_with(const xtd::string& item, const xtd::string& string, const xtd::string& message) {
  does_not_end_with(item, string, message, stack_frame::empty());
}

void string_assert::does_not_end_with(const xtd::string& item, const xtd::string& string, const xtd::string& message, const stack_frame& stack_frame) {
  if (string.rfind(item) + item.size() != string.size())
    assert::succeed(message, stack_frame);
  else
    fail("not string ending with " + to_string(item), to_string(string), message, stack_frame);
}

void string_assert::does_not_match(const xtd::string& regex_pattern, const xtd::string& actual) {
  does_not_match(regex_pattern, actual, string::empty_string, stack_frame::empty());
}

void string_assert::does_not_match(const xtd::string& regex_pattern, const xtd::string& actual, const stack_frame& stack_frame) {
  does_not_match(regex_pattern, actual, string::empty_string, stack_frame);
}

void string_assert::does_not_match(const xtd::string& regex_pattern, const xtd::string& actual, const xtd::string& message) {
  does_not_match(regex_pattern, actual, message, stack_frame::empty());
}

void string_assert::does_not_match(const xtd::string& regex_pattern, const xtd::string& actual, const xtd::string& message, const stack_frame& stack_frame) {
  std::string pattern(regex_pattern);
  std::regex r(pattern);
  std::smatch m;
  std::string act(actual);
  if (std::regex_search(act, m, r) == false)
    assert::succeed(message, stack_frame);
  else
    fail("not string matching " + to_string(regex_pattern), to_string(actual), message, stack_frame);
}

void string_assert::does_not_start_with(const xtd::string& item, const xtd::string& string) {
  does_not_start_with(item, string, string::empty_string, stack_frame::empty());
}

void string_assert::does_not_start_with(const xtd::string& item, const xtd::string& string, const stack_frame& stack_frame) {
  does_not_start_with(item, string, string::empty_string, stack_frame);
}

void string_assert::does_not_start_with(const xtd::string& item, const xtd::string& string, const xtd::string& message) {
  does_not_start_with(item, string, message, stack_frame::empty());
}

void string_assert::does_not_start_with(const xtd::string& item, const xtd::string& string, const xtd::string& message, const stack_frame& stack_frame) {
  if (string.find(item) != 0)
    assert::succeed(message, stack_frame);
  else
    fail("not string starting with " + to_string(item), to_string(string), message, stack_frame);
}

void string_assert::ends_with(const xtd::string& item, const xtd::string& string) {
  ends_with(item, string, string::empty_string, stack_frame::empty());
}

void string_assert::ends_with(const xtd::string& item, const xtd::string& string, const stack_frame& stack_frame) {
  ends_with(item, string, string::empty_string, stack_frame);
}

void string_assert::ends_with(const xtd::string& item, const xtd::string& string, const xtd::string& message) {
  ends_with(item, string, message, stack_frame::empty());
}

void string_assert::ends_with(const xtd::string& item, const xtd::string& string, const xtd::string& message, const stack_frame& stack_frame) {
  if (string.rfind(item) + item.size() == string.size())
    assert::succeed(message, stack_frame);
  else
    fail("string ending with " + to_string(item), to_string(string), message, stack_frame);
}

void string_assert::matches(const xtd::string& regex_pattern, const xtd::string& actual) {
  matches(regex_pattern, actual, string::empty_string, stack_frame::empty());
}

void string_assert::matches(const xtd::string& regex_pattern, const xtd::string& actual, const stack_frame& stack_frame) {
  matches(regex_pattern, actual, string::empty_string, stack_frame);
}

void string_assert::matches(const xtd::string& regex_pattern, const xtd::string& actual, const xtd::string& message) {
  matches(regex_pattern, actual, message, stack_frame::empty());
}

void string_assert::matches(const xtd::string& regex_pattern, const xtd::string& actual, const xtd::string& message, const stack_frame& stack_frame) {
  std::string pattern(regex_pattern);
  std::regex r(pattern);
  std::smatch m;
  std::string act(actual);
  if (std::regex_search(act, m, r) == true)
    assert::succeed(message, stack_frame);
  else
    fail("string matching " + to_string(regex_pattern), to_string(actual), message, stack_frame);
}

void string_assert::starts_with(const xtd::string& item, const xtd::string& string) {
  starts_with(item, string, string::empty_string, stack_frame::empty());
}

void string_assert::starts_with(const xtd::string& item, const xtd::string& string, const stack_frame& stack_frame) {
  starts_with(item, string, string::empty_string, stack_frame);
}

void string_assert::starts_with(const xtd::string& item, const xtd::string& string, const xtd::string& message) {
  starts_with(item, string, message, stack_frame::empty());
}

void string_assert::starts_with(const xtd::string& item, const xtd::string& string, const xtd::string& message, const stack_frame& stack_frame) {
  if (string.find(item) == 0)
    assert::succeed(message, stack_frame);
  else
    fail("string starting with " + to_string(item), to_string(string), message, stack_frame);
}

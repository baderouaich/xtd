#include "../../include/xtd/time_span.h"
#include "../../include/xtd/as.h"
#include "../../include/xtd/double_object.h"
#include "../../include/xtd/int64_object.h"
#include "../../include/xtd/math.h"

using namespace xtd;

const time_span time_span::max_value {xtd::int64_object::max_value};
const time_span time_span::min_value {xtd::int64_object::min_value};
const time_span time_span::zero {0};

time_span::time_span() : ticks_(0) {
}

time_span::time_span(int64 ticks) : ticks_(ticks) {
}

time_span::time_span(xtd::ticks ticks) : ticks_(ticks.count()) {
}

time_span::time_span(int32 hours, int32 minutes, int32 seconds) : time_span(0, hours, minutes, seconds, 0, 0)  {
}

time_span::time_span(int32 days, int32 hours, int32 minutes, int32 seconds) : time_span(days, hours, minutes, seconds, 0, 0)  {
}

time_span::time_span(int32 days, int32 hours, int32 minutes, int32 seconds, int32 millisocnds) : time_span(days, hours, minutes, seconds, millisocnds, 0)  {
}

time_span::time_span(int32 days, int32 hours, int32 minutes, int32 seconds, int32 millisocnds, int32) : ticks_((ticks_per_day * days + ticks_per_hour * hours + ticks_per_minute * minutes + ticks_per_second * seconds + ticks_per_microsecond * millisocnds + ticks_per_microsecond * ticks_per_microsecond))  {
}

time_span::time_span(uint32 hours, uint32 minutes, uint32 seconds) : time_span(0u, hours, minutes, seconds, 0u, 0u)  {
}

time_span::time_span(uint32 days, uint32 hours, uint32 minutes, uint32 seconds) : time_span(days, hours, minutes, seconds, 0u, 0u)  {
}

time_span::time_span(uint32 days, uint32 hours, uint32 minutes, uint32 seconds, uint32 millisocnds) : time_span(days, hours, minutes, seconds, millisocnds, 0u)  {
}

time_span::time_span(uint32 days, uint32 hours, uint32 minutes, uint32 seconds, uint32 millisocnds, uint32 nanoseconds) : ticks_((ticks_per_day * days + ticks_per_hour * hours + ticks_per_minute * minutes + ticks_per_second * seconds + ticks_per_microsecond * millisocnds + ticks_per_microsecond * ticks_per_microsecond) + nanoseconds / nanoseconds_per_tick)  {
}

time_span& time_span::operator +=(const time_span& value) {
  ticks_ += value.ticks_;
  return *this;
}

time_span& time_span::operator -=(const time_span& value) {
  ticks_ -= value.ticks_;
  return *this;
}

time_span time_span::operator +(const time_span& value) {
  time_span result = *this;
  result += value;
  return result;
}

time_span time_span::operator -(const time_span& value) {
  time_span result = *this;
  result -= value;
  return result;
}

time_span& time_span::operator ++() {
  ++ticks_;
  return *this;
}

time_span time_span::operator ++(int) {
  return time_span(ticks_++);
}

time_span& time_span::operator --() {
  --ticks_;
  return *this;
}

time_span time_span::operator --(int) {
  return time_span(ticks_--);
}

int32 time_span::days() const noexcept {
  return as<int32>(ticks_ / ticks_per_day);
}

int32 time_span::hours() const noexcept {
  return as<int32>(ticks_ % ticks_per_day / ticks_per_hour);
}

int32 time_span::microseconds() const noexcept {
  return as<int32>(ticks_ % ticks_per_day % ticks_per_hour % ticks_per_minute % ticks_per_second % ticks_per_milliecond / ticks_per_microsecond);
}

int32 time_span::milliseconds() const noexcept {
  return as<int32>(ticks_ % ticks_per_day % ticks_per_hour % ticks_per_minute % ticks_per_second / ticks_per_milliecond);
}

int32 time_span::minutes() const noexcept {
  return as<int32>(ticks_ % ticks_per_day % ticks_per_hour / ticks_per_minute);
}

int32 time_span::nanoseconds() const noexcept {
  return as<int32>(ticks_ % ticks_per_day % ticks_per_hour % ticks_per_minute % ticks_per_second % ticks_per_milliecond % ticks_per_microsecond * nanoseconds_per_tick);
}

int32 time_span::seconds() const noexcept {
  return as<int32>(ticks_ % ticks_per_day % ticks_per_hour % ticks_per_minute / ticks_per_second);
}

int64 time_span::ticks() const noexcept {
  return ticks_;
}

xtd::ticks time_span::ticks_duration() const noexcept {
  return xtd::ticks {ticks_};
}

double time_span::total_days() const noexcept {
  return as<double>(ticks_) / ticks_per_day;
}

std::chrono::days time_span::total_days_duration() const noexcept {
  return std::chrono::duration_cast<std::chrono::days>(ticks_duration());
}

double time_span::total_hours() const noexcept {
  return as<double>(ticks_) / ticks_per_day;
}

std::chrono::hours time_span::total_hours_duration() const noexcept {
  return std::chrono::duration_cast<std::chrono::hours>(ticks_duration());
}

double time_span::total_microseconds() const noexcept {
  return as<double>(ticks_) / ticks_per_microsecond;
}

std::chrono::microseconds time_span::total_microseconds_duration() const noexcept {
  return std::chrono::duration_cast<std::chrono::microseconds>(ticks_duration());
}

double time_span::total_milliseconds() const noexcept {
  return as<double>(ticks_) / ticks_per_milliecond;
}

std::chrono::milliseconds time_span::total_milliseconds_duration() const noexcept {
  return std::chrono::duration_cast<std::chrono::milliseconds>(ticks_duration());
}

double time_span::total_minutes() const noexcept {
  return as<double>(ticks_) / ticks_per_minute;
}

std::chrono::minutes time_span::total_minutes_duration() const noexcept {
  return std::chrono::duration_cast<std::chrono::minutes>(ticks_duration());
}

double time_span::total_nanoseconds() const noexcept {
  return as<double>(ticks_);
}

std::chrono::nanoseconds time_span::total_nanoseconds_duration() const noexcept {
  return std::chrono::duration_cast<std::chrono::nanoseconds>(ticks_duration());
}

double time_span::total_seconds() const noexcept {
  return as<double>(ticks_) / ticks_per_second;
}

std::chrono::seconds time_span::total_seconds_duration() const noexcept {
  return std::chrono::duration_cast<std::chrono::seconds>(ticks_duration());
}

int32 time_span::compare_to(const time_span& value) const noexcept {
  return ticks_ < value.ticks_ ? -1 : ticks_ > value.ticks_ ? 1 : 0;
}

bool time_span::equals(const time_span& value) const noexcept {
  return ticks_ == value.ticks_;
}

time_span time_span::from_days(double days) {
  if (double_object::is_NaN(days)) throw argument_exception {csf_};
  if (double_object::is_infinity(days) || days < as<double>(time_span::min_value.total_days()) || days > as<double>(time_span::max_value.total_days())) throw overflow_exception {csf_};
  return from_ticks(as<int64>(days * ticks_per_day / ticks_per_milliecond) * ticks_per_milliecond);
}

time_span time_span::from_days(std::chrono::days days) {
  return from_ticks(std::chrono::duration_cast<xtd::ticks>(days));
}

time_span time_span::from_hours(double hours) {
  return from_ticks(hours * ticks_per_hour);
}

time_span time_span::from_hours(std::chrono::hours hours) {
  return from_ticks(std::chrono::duration_cast<xtd::ticks>(hours));
}

time_span time_span::from_microseconds(double microseconds) {
  return from_ticks(microseconds * ticks_per_microsecond);
}

time_span time_span::from_microseconds(std::chrono::microseconds microseconds) {
  return from_ticks(std::chrono::duration_cast<xtd::ticks>(microseconds));
}

time_span time_span::from_milliseconds(double milliseconds) {
  return from_ticks(milliseconds * ticks_per_milliecond);
}

time_span time_span::from_milliseconds(std::chrono::milliseconds milliseconds) {
  return from_ticks(std::chrono::duration_cast<xtd::ticks>(milliseconds));
}

time_span time_span::from_minutes(double minutes) {
  return from_nanoseconds(minutes * ticks_per_minute);
}

time_span time_span::from_minutes(std::chrono::minutes minutes) {
  return from_ticks(std::chrono::duration_cast<xtd::ticks>(minutes));
}

time_span time_span::from_nanoseconds(double nanoseconds) {
  time_span result;
  result.ticks_ = as<int64>(nanoseconds);
  return result;
}

time_span time_span::from_nanoseconds(std::chrono::nanoseconds nanoseconds) {
  return from_ticks(nanoseconds.count() / nanoseconds_per_tick);
}

time_span time_span::from_seconds(double seconds) {
  return from_ticks(seconds * ticks_per_second);
}

time_span time_span::from_seconds(std::chrono::seconds seconds) {
  return from_ticks(std::chrono::duration_cast<xtd::ticks>(seconds));
}

time_span time_span::from_ticks(int64 ticks) {
  return time_span {ticks};
}

time_span time_span::from_ticks(xtd::ticks ticks) {
  return time_span {ticks.count()};
}

xtd::ustring time_span::to_string() const noexcept {
  return to_string("G");
}

ustring time_span::to_string(const ustring& format) const {
  auto fmt = format;
  if (fmt.empty()) fmt =  "G";
  if (fmt.size() > 1) throw format_exception("Invalid format"_t, csf_);
  
  switch (fmt[0]) {
    case 'c': return make_string_from_duration(true);
    case 'd': return ustring::format("{}", math::abs(days()));
    case 'D': return ustring::format("{:d2}", math::abs(days()));
    case 'f': return ustring::format("{}{}:{}:{:d2}:{:d2}.{:d3}{:d4}", ticks() < 0 ? "-" : "", math::abs(days()), math::abs(hours()), math::abs(minutes()), math::abs(seconds()), math::abs(milliseconds()), math::abs(ticks() % ticks_per_milliecond));
    case 'F': return ustring::format("{}{}:{:d2}:{:d2}:{:d2}.{:d3}{:d4}", ticks() < 0 ? "-" : "", math::abs(days()), math::abs(hours()), math::abs(minutes()), math::abs(seconds()), math::abs(milliseconds()), math::abs(ticks() % ticks_per_milliecond));
    case 'g': return make_string_from_duration(false);
    case 'G': return make_string_from_duration(true);
    case 'h': return ustring::format("{}", math::abs(hours()));
    case 'H': return ustring::format("{:d2}", math::abs(hours()));
    case 'l': return ustring::format("{}", math::abs(milliseconds()));
    case 'L': return ustring::format("{:d3}", math::abs(milliseconds()));
    case 'm': return ustring::format("{}", math::abs(minutes()));
    case 'M': return ustring::format("{:d2}", math::abs(minutes()));
    case 'o': return ustring::format("{}", ticks() < 0 ? "-" : "");
    case 'O': return ustring::format("{}", ticks() < 0 ? "-" : "+");
    case 's': return ustring::format("{}", math::abs(seconds()));
    case 'S': return ustring::format("{:d2}", math::abs(seconds()));
    case 't': return ustring::format("{:d3}{:d4}", math::abs(milliseconds()), math::abs(ticks() % ticks_per_milliecond));
    case 'T': return ustring::format("{:d3}{:d4}", math::abs(milliseconds()), math::abs(ticks() % ticks_per_milliecond));
    default: __format_exception("Invalid format"); return {};
  }
}

ustring time_span::make_string_from_duration(bool constant) const {
  ustring result;
  if (ticks() < 0) result += '-';
  if (days()) result += ustring::format("{}.", math::abs(days()));
  result += ustring::format(constant ? "{:d2}:{:d2}:{:d2}" : "{:d}:{:d2}:{:d2}", math::abs(hours()), math::abs(minutes()), math::abs(seconds()));
  if (ticks() % ticks_per_second) result += ustring::format(".{:d3}{:d4}", math::abs(milliseconds()), math::abs(ticks() % ticks_per_milliecond));
  return result;
}

#include "../../../include/xtd/timers/timer.h"
#include "../../../include/xtd/threading/auto_reset_event.h"
#include "../../../include/xtd/threading/thread_pool.h"
#include "../../../include/xtd/threading/wait_callback.h"
#include "../../../include/xtd/object_closed_exception.h"

using namespace xtd;
using namespace xtd::threading;
using namespace xtd::timers;

struct timer::data {
  bool auto_reset {true};
  bool closed {false};
  bool enabled {false};
  wait_callback timer_proc = wait_callback {[&](std::any arg) {
    as<timer*>(arg)->data_->event.reset();
    thread::sleep(interval);
    while (enabled) {
      as<timer*>(arg)->on_elpased(elapsed_event_args(date_time::now()));
      thread::sleep(interval);
      if (!auto_reset) enabled = false;
    }
    as<timer*>(arg)->data_->event.set();
  }};
  auto_reset_event event {true};
  time_span interval {100};
  isynchronize_invoke* synchronizing_object = nullptr;
  std::any state{this};
};

timer::timer() : timer(100) {
}

timer::timer(double interval) : timer(time_span::from_milliseconds(interval)) {
}

timer::timer(const time_span& interval) : data_(std::make_shared<data>()) {
  data_->interval = interval;
}

timer::timer(const timer& timer) : data_(timer.data_) {
}

timer& timer::operator=(const timer& timer) {
  if (data_.use_count() == 1) close();
  data_ = timer.data_;
  return *this;
}

timer::~timer() {
  if (data_.use_count() == 1 && !data_->closed && data_->enabled)
    close();
}

bool timer::auto_reset() const noexcept {
  return data_->auto_reset;
}

timer& timer::auto_reset(bool value) {
  data_->auto_reset = value;
  return *this;
}

bool timer::enabled() const noexcept {
  return data_->enabled;
}

timer& timer::enabled(bool value) {
  if (data_->closed) throw object_closed_exception {csf_};
  if (data_->enabled == value) return *this;
  data_->enabled = value;
  if (data_->enabled) thread_pool::queue_user_work_item(data_->timer_proc, this);
  return *this;
}

double timer::interval() const noexcept {
  return data_->interval.total_milliseconds();
}

timer& timer::interval(double value) {
  if (data_->closed) throw object_closed_exception {csf_};
  data_->interval = time_span::from_milliseconds(value);
  return *this;
}

std::optional<std::reference_wrapper<isynchronize_invoke>> timer::synchronizing_object() const noexcept {
  if (!data_->synchronizing_object) return {};
  return std::optional<std::reference_wrapper<isynchronize_invoke>> {*data_->synchronizing_object};
}

timer& timer::synchronizing_object(isynchronize_invoke& value) {
  data_->synchronizing_object = &value;
  return *this;
}
timer& timer::synchronizing_object(std::nullptr_t value) {
  data_->synchronizing_object = nullptr;
  return *this;
}

void timer::close() {
  if (data_->closed) throw object_closed_exception {csf_};
  stop();
  data_->event.wait_one();
  data_->closed = true;
}

void timer::start() {
  enabled(true);
}

void timer::stop() {
  enabled(false);
}

void timer::on_elpased(const elapsed_event_args& e) {
  if (data_->synchronizing_object) data_->synchronizing_object->invoke([&] {elapsed(*this, e);});
  else elapsed(*this, e);
}

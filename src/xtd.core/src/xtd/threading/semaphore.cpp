#include "named_semaphore.h"
#include "unnamed_semaphore.h"
#include "../../../include/xtd/argument_out_of_range_exception.h"
#include "../../../include/xtd/object_closed_exception.h"
#include "../../../include/xtd/io/io_exception.h"
#include "../../../include/xtd/io/path_too_long_exception.h"
#include "../../../include/xtd/threading/abandoned_mutex_exception.h"

using namespace xtd;
using namespace xtd::threading;

semaphore::semaphore() : semaphore(0, int32_object::max_value) {
}

semaphore::semaphore(const ustring& name) : semaphore(0, int32_object::max_value, name) {
}

semaphore::semaphore(const ustring& name, bool& created_new) : semaphore(0, int32_object::max_value, name, created_new) {
}

semaphore::semaphore(int32 initial_count) : semaphore(initial_count, int32_object::max_value, "") {
}

semaphore::semaphore(int32 initial_count, const ustring& name) : semaphore(initial_count, int32_object::max_value, name) {
}

semaphore::semaphore(int32 initial_count, const ustring& name, bool& created_new) : semaphore(initial_count, int32_object::max_value, name, created_new) {
}

semaphore::semaphore(int32 initial_count, int32 maximum_count) : semaphore(initial_count, maximum_count, "") {
}

semaphore::semaphore(int32 initial_count, int32 maximum_count, const ustring& name) : name_(name) {
  bool created_new = false;
  create(initial_count, maximum_count, created_new);
}

semaphore::semaphore(int32 initial_count, int32 maximum_count, const ustring& name, bool& created_new) : name_(name) {
  if (name.size() > native::named_semaphore::max_name_size()) throw io::path_too_long_exception {csf_};
  if (initial_count > maximum_count) throw argument_exception {csf_};
  if (maximum_count < 1 || initial_count < 0) throw argument_out_of_range_exception {csf_};
  create(initial_count, maximum_count, created_new);
}

semaphore::~semaphore() {
  close();
}

intptr semaphore::handle() const noexcept {
  return semaphore_ ? semaphore_->handle() : invalid_handle;
}

void semaphore::handle(intptr value) {
  semaphore_->handle(value);
}

void semaphore::close() {
  if (semaphore_.use_count() == 1) {
    semaphore_->destroy();
    semaphore_.reset();
  }
}

int32 semaphore::compare_to(const semaphore& value) const noexcept {
  return handle() < value.handle() ? - 1 : handle() > value.handle() ? 1 : 0;
}

bool semaphore::equals(const semaphore& value) const noexcept {
  return handle() == value.handle();
}

semaphore semaphore::open_existing(const ustring& name) {
  if (name.empty()) throw argument_exception {csf_};
  if (name.size() > native::named_semaphore::max_name_size()) throw io::path_too_long_exception {csf_};
  auto result = semaphore{};
  if (!try_open_existing(name, result)) throw io::io_exception {csf_};
  return result;
}

int32 semaphore::release() {
  return release(1);
}

int32 semaphore::release(int32 release_count) {
  if (release_count < 1) throw argument_out_of_range_exception {csf_};
  if (!semaphore_) throw object_closed_exception {csf_};
  if (count_ + release_count > maximum_count_) throw semaphore_full_exception {csf_};
  bool io_error = false;
  int32 previous_count = -1;
  semaphore_->signal(io_error, release_count, previous_count);
  if (previous_count != -1) interlocked::exchange(count_, previous_count);
  if (io_error) throw io::io_exception {csf_};
  interlocked::exchange(previous_count, count_);
  interlocked::exchange(count_, count_ + release_count);
  return previous_count;
}

bool semaphore::try_open_existing(const ustring& name, semaphore& result) noexcept {
  result.close();
  if (ustring::is_empty(name)) return false;
  if (name.size() > native::named_semaphore::max_name_size()) return false;
  auto new_semaphore = semaphore {};
  new_semaphore.name_ = name;
  new_semaphore.semaphore_ = std::make_shared<semaphore::named_semaphore>();
  if (!new_semaphore.semaphore_->open(new_semaphore.name_)) return false;
  result = new_semaphore;
  return true;
}

bool semaphore::signal() {
  release();
  return true;
}

bool semaphore::wait(int32 milliseconds_timeout) {
  if (!semaphore_) throw object_closed_exception {csf_};
  if (milliseconds_timeout < -1) throw argument_out_of_range_exception {csf_};
  auto result = semaphore_->wait(milliseconds_timeout);
  if (result == 0xFFFFFFFF) throw io::io_exception {csf_};
  if (result == 0x00000080) throw abandoned_mutex_exception {csf_};
  if (result == 0x00000102) return false;
  interlocked::decrement(count_);
  return true;
}

void semaphore::create(int32 initial_count, int32 maximum_count, bool& created_new) {
  interlocked::exchange(count_, initial_count);
  maximum_count_ = maximum_count;
  created_new = true;
  if (name_.empty()) {
    semaphore_ = std::make_shared<semaphore::unnamed_semaphore>();
    if (!semaphore_->create(initial_count, maximum_count)) throw io::io_exception(csf_);
  } else {
    semaphore_ = std::make_shared<semaphore::named_semaphore>();
    created_new = semaphore_->create(initial_count, maximum_count, name_);
    if (!created_new && !semaphore_->open(name_)) throw io::io_exception(csf_);
  }
}

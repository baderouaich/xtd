#pragma once
#include "semaphore_base.h"
#include <condition_variable>
#define __XTD_CORE_COUNTING_SEMAPHORE_INTERNAL__
#include "../../../include/xtd/internal/__counting_semaphore.h"
#undef __XTD_CORE_COUNTING_SEMAPHORE_INTERNAL__
#include "../../../include/xtd/invalid_operation_exception.h"

class xtd::threading::semaphore::unnamed_semaphore : public semaphore_base {
public:
  ~unnamed_semaphore() {destroy();}

  intptr handle() const noexcept override {
    return handle_ ? reinterpret_cast<intptr>(handle_.get()) : invalid_handle;
  }
  
  void handle(intptr value) override {
    throw invalid_operation_exception {csf_};
  }

  bool create(int32 initial_count, int32 maximum_count) override {
    handle_ = std::make_shared<data>();
    handle_->maximum_count = maximum_count;
    handle_->semaphore.release(static_cast<std::ptrdiff_t>(initial_count));
    handle_->count += initial_count;
    return true;
  }
  
  bool create(int32 initial_count, int32 maximum_count, const ustring& name) override {
    throw invalid_operation_exception {csf_};
  }

  void destroy() override {
    if (!handle_) return;
    handle_.reset();
  }
  
  bool open(const ustring& name) override {
    throw invalid_operation_exception {csf_};
  }

  bool signal(bool& io_error, int32 release_count, int32& previous_count) override {
    if (handle_->count + release_count >= handle_->maximum_count) return false;
    previous_count = handle_->count;
    handle_->semaphore.release(static_cast<std::ptrdiff_t>(release_count));
    handle_->count += release_count;
    return true;
  }

  uint32 wait(int32 milliseconds_timeout) override {
    if (milliseconds_timeout == -1) {
      handle_->semaphore.acquire();
      handle_->count--;
      return 0x00000000;
    }
    if (handle_->semaphore.try_acquire_for(std::chrono::milliseconds {milliseconds_timeout}) == false) return 0x00000102;
    handle_->count--;
    return 0x00000000;
  }
  
private:
  struct data {
    int count = 0;
    int maximum_count = std::numeric_limits<int>::max();
    std::counting_semaphore<std::numeric_limits<std::ptrdiff_t>::max()> semaphore {0};
  };
  std::shared_ptr<data> handle_;
};

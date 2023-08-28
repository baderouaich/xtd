#include "../../../include/xtd/threading/barrier.h"
#include "../../../include/xtd/threading/semaphore.h"
#include "../../../include/xtd/argument_out_of_range_exception.h"
#include "../../../include/xtd/as.h"
#include "../../../include/xtd/int32_object.h"
#include "../../../include/xtd/invalid_operation_exception.h"
#include "../../../include/xtd/lock.h"

using namespace xtd;
using namespace xtd::threading;

struct barrier::data : object {
  const threading::cancellation_token* cancellation_token = nullptr;
  int32 current_phase_number = 0;
  int32 participant_count = 0;
  int32 participants_remaining = 0;
  action<barrier&> post_phase_action;
  bool run_post_phase_action = false;
  semaphore phase_semaphore;
  bool throw_barrier_post_phase_exception = false;
};

barrier::barrier() : barrier(0) {
}

barrier::barrier(int32 participant_count) : barrier(participant_count, {}) {
}

barrier::barrier(int32 participant_count, action<barrier&> post_phase_action) : data_(std::make_shared<data>()) {
  if (participant_count < 0) throw argument_out_of_range_exception {csf_};
  data_->participant_count = participant_count;
  data_->participants_remaining = participant_count;
  data_->post_phase_action = post_phase_action;
}

int32 barrier::current_phase_number() const noexcept {
  return data_->current_phase_number;
}

int32 barrier::participant_count() const noexcept {
  return data_->participant_count;
}

int32 barrier::participants_remaining() const noexcept {
  return data_->participants_remaining;
}

int32 barrier::add_participant() {
  return add_participants(1);
}

int32 barrier::add_participants(int32 participant_count) {
  lock_(*data_) {
    if (participant_count < 0 || as<int64>(data_->participant_count) + participant_count > as<int64>(int32_object::max_value)) throw argument_out_of_range_exception {csf_};
    if (data_->run_post_phase_action) throw invalid_operation_exception(csf_);
    data_->participant_count += participant_count;
    data_->participants_remaining += participant_count;
    return data_->current_phase_number;
  }
  return data_->current_phase_number;
}

void barrier::close() {
  // to do...
}

int32 barrier::remove_participant() {
  return remove_participants(1);
}

int32 barrier::remove_participants(int32 participant_count) {
  lock_(*data_) {
    if (participant_count < 0) throw argument_out_of_range_exception {csf_};
    if (data_->participant_count == 0 || data_->run_post_phase_action || data_->participants_remaining < data_->participant_count - participant_count) throw invalid_operation_exception {csf_};
    if (data_->participant_count < participant_count) throw argument_out_of_range_exception {csf_};
    data_->participant_count -= participant_count;
    data_->participants_remaining -= participant_count;
    return data_->current_phase_number;
  }
  return data_->current_phase_number;
}

void barrier::signal_and_wait() {
  signal_and_wait(timeout::infinite);
}

bool barrier::signal_and_wait(int32 milliseconds_timeout) {
  lock_(*data_) {
    data_->participants_remaining--;
    
    if (data_->participants_remaining == 0) {
      data_->run_post_phase_action = true;
      try {
        if (!data_->post_phase_action.is_empty()) data_->post_phase_action(*this);
      } catch(...) {
        data_->throw_barrier_post_phase_exception = true;
      }
      data_->run_post_phase_action = false;

      data_->current_phase_number++;
      data_->participants_remaining = data_->participant_count;
      
      for (int i = 0; i < data_->participant_count; i++)
        data_->phase_semaphore.release();
    }
  }
  auto result = data_->phase_semaphore.wait_one(milliseconds_timeout);
  if (data_->throw_barrier_post_phase_exception) throw barrier_post_phase_exception {csf_};
  return result;
}

bool barrier::signal_and_wait(const cancellation_token& cancellation_token) {
  return signal_and_wait(timeout::infinite, cancellation_token);
}

bool barrier::signal_and_wait(const time_span& timeout) {
  return signal_and_wait(as<int32>(timeout.total_milliseconds()));
}

bool barrier::signal_and_wait(int32 milliseconds_timeout, const cancellation_token& cancellation_token) {
  data_->cancellation_token = &cancellation_token;
  return signal_and_wait(milliseconds_timeout);
}

bool barrier::signal_and_wait(const time_span& timeout, const cancellation_token& cancellation_token) {
  return signal_and_wait(as<int32>(timeout.total_milliseconds()), cancellation_token);
}

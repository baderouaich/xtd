#pragma once
#include "../../../include/xtd/threading/mutex.h"
#include "../../../include/xtd/abstract.h"

class xtd::threading::mutex::mutex_base abstract_ {
public:
  virtual intptr handle() const noexcept = 0;
  virtual void handle(intptr value) = 0;
  virtual bool create(bool initially_owned) = 0;
  virtual bool create(bool initially_owned, const string& name) = 0;
  virtual void destroy() = 0;
  virtual bool open(const string& name) = 0;
  virtual bool signal(bool& io_error) = 0;
  virtual uint32 wait(int32 milliseconds_timeout) = 0;
};

#pragma once
#include "component.h"

#include <xtd/delegate.h>
#include <xtd/ustring.h>
#include <xtd/drawing/icon.h>
#include <xtd/event.h>
#include <xtd/event_args.h>
#include <xtd/not_implemented_exception.h>
#include <xtd/forms/layout/arranged_element_collection.h>
#include "notifier_style.h"
#include "message_notifier_button.h"
#include "iwin32_window.h"
#include <chrono>
#include <optional>

// TODO: Documentation

namespace xtd {
  namespace forms {

  // TODO: IMPL + move to seperate file
    class notifier_button_click_event_args : public xtd::event_args {
    public:
      //...
        notifier_button_click_event_args(const message_notifier_button& button)
            : button_(button)
        {}

        xtd::forms::message_notifier_button button() const {
            return button_;
        }
    private:
        message_notifier_button button_;
      //...
    };
    using notifier_button_click_event_handler = delegate<void(object& sender, const notifier_button_click_event_args& e)>;


    // TODO: IMPL + move to seperate file
    class notifier_closed_event_args : public xtd::event_args {
    public:
        notifier_closed_event_args(const std::optional<xtd::forms::message_notifier_button>& button)
            :
        button_(button){}

    public:
        std::optional<xtd::forms::message_notifier_button> button() const noexcept {
            return button_;
        }
        bool close_on_timeout() const noexcept {
            return close_on_timeout_;
        }
        bool close_on_click_message() const noexcept{
            return close_on_click_message_;
        }

    public:
        bool close_on_timeout_ = false;
        bool close_on_click_message_ = false;
        std::optional<xtd::forms::message_notifier_button> button_ = std::nullopt;
      //...
    };
    using notifier_closed_event_handler = delegate<void(object& sender, const notifier_closed_event_args& e)>;
    

    class forms_export_ message_notifier final : public component {
    public:
        /// @name Alias
      using message_notifier_button_collection = xtd::forms::layout::arranged_element_collection<message_notifier_button_ref>;

      message_notifier() = default;
      
      /// Properties

      const message_notifier_button_collection& buttons() const noexcept { return buttons_; }
      message_notifier_button_collection& buttons() noexcept { return buttons_; }

      std::optional<xtd::forms::message_notifier_button> notifier_button_clicked() const noexcept { return notifier_button_clicked_; }

      xtd::ustring title() const noexcept { return title_; }
      message_notifier& title(const xtd::ustring& title) noexcept { title_ = title; return *this; }
      
      xtd::ustring message() const noexcept { return message_; }
      message_notifier& message(const xtd::ustring& message) noexcept { message_ = message; return *this; }
      
      const xtd::drawing::image& icon() const noexcept { return icon_; }
      message_notifier& icon(const xtd::drawing::image& icon) noexcept { icon_ = icon; return *this; }
      message_notifier& icon(const xtd::drawing::icon& icon)  noexcept { icon_ = icon.to_bitmap(); return *this; }

      bool close_timeout_enabled() const noexcept { return close_timeout_enabled_; }
      message_notifier& close_timeout_enabled(bool value) noexcept { close_timeout_enabled_ = value; return *this; }
      
      std::chrono::milliseconds close_timeout_interval() const noexcept { return close_timeout_interval_; }
      message_notifier& close_timeout_interval(std::chrono::milliseconds value) noexcept { close_timeout_interval_ = value; return *this;}
      message_notifier& close_timeout_interval_milliseconds(int32_t value) noexcept { close_timeout_interval_ = std::chrono::milliseconds(value); return *this; }
      
      xtd::forms::notifier_style notifier_style() const noexcept {return notifier_style_; }
      message_notifier& notifier_style(xtd::forms::notifier_style notifier_style) noexcept { notifier_style_ = notifier_style; return *this; }
            
      void reset();
      
      void show();
      void show(const iwin32_window& owner);
      
    public: /** Events */
      event<message_notifier, xtd::forms::notifier_closed_event_handler> notifier_closed;
      event<message_notifier, xtd::forms::notifier_button_click_event_handler> button_click;

    protected:
      virtual void on_notifier_closed(const xtd::forms::notifier_closed_event_args& e) {
         notifier_closed(*this, e);
      }
      virtual void on_button_click(const xtd::forms::notifier_button_click_event_args& e) {
         button_click(*this, e);
      }

    private:
      xtd::ustring title_;
      xtd::ustring message_;
      xtd::drawing::image icon_ = xtd::drawing::image::empty;
      bool close_timeout_enabled_ = false;
      std::chrono::milliseconds close_timeout_interval_ = std::chrono::milliseconds(10'000);
      message_notifier_button_collection buttons_;
      std::optional<xtd::forms::message_notifier_button> notifier_button_clicked_ = std::nullopt;
      xtd::forms::notifier_style notifier_style_ = xtd::forms::notifier_style::standard;

    };
  }
}

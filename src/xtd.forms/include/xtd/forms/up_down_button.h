/// @file
/// @brief Contains xtd::forms::up_down_button control.
/// @copyright Copyright (c) 2023 Gammasoft. All rights reserved.
#pragma once
#include "button_base"
#include "orientation"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief Represents a standard Windows up down button.
    /// @code
    /// class forms_export_ up_down_button : public xtd::forms::button_base
    /// @endcode
    /// @par Inheritance
    /// xtd::object → xtd::forms::component → xtd::forms::control → xtd::forms::button_base → xtd::forms::up_down_button
    /// @par Header
    /// @code #include <xtd/forms/up_down_button> @endcode
    /// @par Namespace
    /// xtd::forms
    /// @par Library
    /// xtd.forms
    /// @ingroup xtd_forms controls
    /// @par Appearance
    /// |       | Windows                                     | macOS                                       | Gnome                                       |
    /// | ----- | ------------------------------------------- | ------------------------------------------- | ------------------------------------------- |
    /// | Light |  @image html control_up_down_button_w.png   |  @image html control_up_down_button_m.png   |  @image html control_up_down_button_g.png   |
    /// | Dark  |  @image html control_up_down_button_wd.png  |  @image html control_up_down_button_md.png  |  @image html control_up_down_button_gd.png  |
    /// @par Examples
    /// The following code example demonstrates the use of up down button control.
    /// @include up_down_button.cpp
    class forms_export_ up_down_button : public button_base {
      struct data;
      
    public:
      /// @name Constructors
      
      /// @{
      /// @brief Initializes a new instance of up_down_button class.
      up_down_button();
      /// @}
      
      /// @name Properties
      
      /// @{
      /// @brief Gets the maximum value for the up_down_button control.
      /// @return The maximum value for the up down button. The default value is 100.
      /// @remarks When the maximum property is set, the minimum property is evaluated and the update_edit_text method is called. If the minimum property is greater than the new maximum property, the minimum property value is set equal to the maximum value. If the current Value is greater than the new Maximum value. the value property value is set equal to the maximum value.
      virtual int32 maximum() const noexcept;
      /// @brief Sets the maximum value for the up_down_button control.
      /// @param value The maximum value for the up down button. The default value is 100.
      /// @return Current numeric_up_down.
      /// @remarks When the maximum property is set, the minimum property is evaluated and the update_edit_text method is called. If the minimum property is greater than the new maximum property, the minimum property value is set equal to the maximum value. If the current Value is greater than the new Maximum value. the value property value is set equal to the maximum value.
      virtual up_down_button& maximum(int32 value);
      
      /// @brief Gets the minimum allowed value for the up_down_button control.
      /// @return The minimum allowed value for the up down button. The default value is 0.
      /// @remarks When the maximum property is set, the minimum property is evaluated and the update_edit_text method is called. If the minimum property is greater than the new maximum property, the minimum property value is set equal to the maximum value. If the current Value is greater than the new Maximum value. the value property value is set equal to the maximum value.
      virtual int32 minimum() const noexcept;
      /// @brief Sets the minimum allowed value for the up_down_button control.
      /// @param value The minimum allowed value for the up down button. The default value is 0.
      /// @return Current numeric_up_down.
      /// @remarks When the maximum property is set, the minimum property is evaluated and the update_edit_text method is called. If the minimum property is greater than the new maximum property, the minimum property value is set equal to the maximum value. If the current Value is greater than the new Maximum value. the value property value is set equal to the maximum value.
      virtual up_down_button& minimum(int32 value);
      
      /// @brief Gets a value indicating the horizontal or vertical orientation of the up down button.
      /// @return One of the orientation values.
      virtual forms::orientation orientation() const noexcept;
      /// @brief Sets a value indicating the horizontal or vertical orientation of the up down button
      /// @param orientation One of the orientation values.
      /// @param When the orientation property is set to orientation::horizontal, the scroll box moves from left to right as the value increases. When the orientation property is set to orientation::vertical, the scroll box moves from bottom to top as the Value increases.
      virtual up_down_button& orientation(forms::orientation orientation);
      
      /// @brief Gets the value assigned to the up_down_button control.
      /// @return The numeric value of the up down button control.
      /// @remarks When the value property is set, the new value is validated to be between the minimum and maximum values. Following this, the update_edit_text method is called to update the spin box's display with the new value in the appropriate format.
      virtual int32 value() const noexcept;
      /// @brief Sets the value assigned to the up_down_button control.
      /// @param value The numeric value of the up down button control.
      /// @return Current numeric_up_down.
      /// @remarks When the value property is set, the new value is validated to be between the minimum and maximum values. Following this, the update_edit_text method is called to update the spin box's display with the new value in the appropriate format.
      virtual up_down_button& value(int32 value);
      
      /// @brief Gets a value indicate if value can be wrapped.
      /// @return true if value can be wrapped; otherwise false. The default is false.
      virtual bool wrapped() const noexcept;
      /// @brief Sets a value indicate if value can be wrapped.
      /// @param value true if value can be wrapped; otherwise false. The default is false.
      /// @return Current numeric_up_down.
      virtual up_down_button& wrapped(bool value);
      /// @}
      
      /// @name Methods
      
      /// @{
      /// @brief Sets the minimum and maximum values for a track_bar.
      /// @param min_value The lower limit of the range of the track bar.
      /// @param max_value The upper limit of the range of the track bar.
      /// @remarks You can use this method to set the entire range for the track_bar at the same time. To set the minimum or maximum values individually, use the minimum and maximum properties. If the min_value parameter is greater than the max_value parameter, max_value is set equal to min_value.
      void set_range(int32 min_value, int32 max_value);
      
      /// @brief Returns a string that represents the track_bar control.
      /// @return A string that represents the current progress_bar.
      /// @remarks The return string includes the type and the values for the minimum, maximum, and value properties.
      xtd::ustring to_string() const noexcept override;
      /// @}
      
      /// @name Events
      
      /// @{
      /// @brief Occurs when either a mouse or keyboard action moves the scroll box.
      /// @remarks For more information about handling events, see <a href="https://gammasoft71.github.io/xtd/docs/documentation/Guides/xtd.core/Events/overview">Handling and Raising Events</a>.
      event<up_down_button, event_handler> scroll;
      
      /// @brief Occurs when the value of the value property changes.
      /// @remarks For more information about handling events, see <a href="https://gammasoft71.github.io/xtd/docs/documentation/Guides/xtd.core/Events/overview">Handling and Raising Events</a>.
      event<up_down_button, event_handler> value_changed;
      /// @}
      
    protected:
    
      /// @name Protected properties
      
      /// @{
      forms::create_params create_params() const noexcept override;
      /// @}
      
      /// @name Protected methods
      
      /// @{
      /// @brief Overrides control::on_handle_created(const event_args&)
      /// @param e A EventArgs that contains the event data.
      void on_handle_created(const event_args& e) override;
      
      /// @brief Raises the up_down_button::scroll event.
      /// @param e An event_args that contains the event data.
      /// @remarks You can use the OnScroll event to update other controls as the position of the scroll box changes.
      /// @remarks Raising an event invokes the event handler through a delegate.
      /// @remarks The on_scroll method also allows derived classes to handle the event without attaching a delegate. This is the preferred technique for handling the event in a derived class.
      /// @par Notes to Inheritors
      /// @remarks When overriding on_scroll(const event_args&) in a derived class, be sure to call the base class' on_scroll(const event_args&) method so that registered delegates receive the event.
      virtual void on_scroll(const event_args& e);
      
      /// @brief Raises the up_down_button::value_changed event.
      /// @param e An event_args that contains the event data.
      virtual void on_value_changed(const event_args& e);
      
      /// @brief Processes Windows messages.
      /// @param m The Windows Message to process.
      /// @remarks All messages are sent to the wnd_proc method after getting filtered through the pre_process_message method.
      void wnd_proc(message& message) override;
      /// @}
      
    private:
      void wm_scroll_control(message& message);
      
      std::shared_ptr<data> data_;
    };
  }
}

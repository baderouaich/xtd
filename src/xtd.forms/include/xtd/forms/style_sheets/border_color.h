/// @file
/// @brief Contains xtd::forms::style_sheets::border_color class.
/// @copyright Copyright (c) 2022 Gammasoft. All rights reserved.
#pragma once
#include <xtd/ustring.h>
#include "color_data.h"

/// @brief The xtd namespace contains all fundamental classes to access Hardware, Os, System, and more.
namespace xtd {
  /// @brief The xtd::forms namespace contains classes for creating Windows-based applications that take full advantage of the rich user interface features available in the Microsoft Windows operating system, Apple macOS and Linux like Ubuntu operating system.
  namespace forms {
    /// @brief The xtd::forms::style_sheets namespace contains various properties, states, and subcontrols that make it possible to customize the look of control.
    namespace style_sheets {
      /// @brief The xtd::forms::style_sheets::border_color is used to set the color of the borders.
      /// @code
      /// class forms_export_ border_color : public xtd::object
      /// @endcode
      /// @par Inheritance
      /// xtd::object → xtd::forms::style_sheets::border_color
      /// @par Namespace
      /// xtd::forms::style_sheets
      /// @par Library
      /// xtd.forms
      /// @ingroup xtd_forms style_sheets
      class forms_export_ border_color : public xtd::object {
      public:
        /// @name Fields
        
        /// @{
        /// @brief Provides an empty xtd::forms::style_sheets::border_color object.
        static const border_color empty;
        /// @}
        
        /// @name Constructors
        
        /// @{
        /// @brief Initializes a new instance of the xtd::forms::style_sheets::border_color class.
        border_color() = default;
        
        /// @brief Initializes a new instance of the xtd::forms::style_sheets::border_color class using the supplied border_color for all edges.
        /// @param all The xtd::forms::style_sheets::color_data to be used for border_color for all edges.
        /// @remarks This constructor sets the right, left, bottom, top and all properties to the value of the all parameter.
        border_color(color_data all) : all_(true), left_(all), top_(all), right_(all), bottom_(all) {}
        
        /// @brief Initializes a new instance of the xtd::forms::style_sheets::border_color class using a separate border_color for each edge.
        /// @param left The border_color for the left edge.
        /// @param top The border_color for the top edge.
        /// @param right The border_color for the right edge.
        /// @param bottom The border_color for the bottom edge.
        /// @remarks If all of the parameter values are equal, then the all property will reflect this common value.
        border_color(color_data left, color_data top, color_data right, color_data bottom) : all_(left == top && left == right && left == bottom), left_(left), top_(top), right_(right), bottom_(bottom) {}
        /// @}
        
        /// @cond
        border_color(const border_color&) = default;
        border_color& operator=(const border_color&) = default;
        bool operator==(const border_color& value) {return all_ == value.all_ && left_ == value.left_ && top_ == value.top_ && right_ == value.right_ && bottom_ == value.bottom_;}
        bool operator!=(const border_color& value) {return !operator==(value);}
        /// @endcond
        
        /// @name Peorperties
        
        /// @{
        /// @brief Gets the xtd::forms::style_sheets::border_color value for all the edges.
        /// @return The xtd::forms::style_sheets::border_color for all edges if the same; otherwise, xtd::forms::style_sheets::color_data::empty.
        /// @remarks When retrieving this property, if all the edges use the same border_color value, then this common value is returned. Otherwise, xtd::forms::style_sheets::color_data::empty is returned to indicate that all the xtd::forms::style_sheets::border_color values are not equal.
        color_data all() const {return all_ ? top_ : color_data::empty;}
        /// @brief Sets the xtd::forms::style_sheets::border_color value for all the edges.
        /// @param all The xtd::forms::style_sheets::border_color for all edges if the same; otherwise, xtd::forms::style_sheets::color_data::empty.
        /// @remarks When retrieving this property, if all the edges use the same border_color value, then this common value is returned. Otherwise, xtd::forms::style_sheets::color_data::empty is returned to indicate that all the xtd::forms::style_sheets::border_color values are not equal.
        void all(color_data all) {
          if (!all_ || left_ != all) {
            all_ = true;
            left_ = top_ = right_ = bottom_ = all;
          }
        }
        
        /// @brief Gets the xtd::forms::style_sheets::border_color value for the bottom edge.
        /// @return The xtd::forms::style_sheets::border_color for the bottom edge.
        /// @remarks Setting this value can also alter the all property.
        color_data bottom() const {return bottom_;}
        /// @brief Sets the xtd::forms::style_sheets::border_color value for the bottom edge.
        /// @param bottom The xtd::forms::style_sheets::border_color for the bottom edge.
        /// @remarks Setting this value can also alter the all property.
        void bottom(color_data bottom) {
          if (all_ || bottom_ != bottom) {
            all_ = false;
            bottom_ = bottom;
          }
        }
        
        /// @brief Gets the xtd::forms::style_sheets::border_color value for the left edge.
        /// @return The xtd::forms::style_sheets::border_color for the left edge.
        /// @remarks Setting this value can also alter the all property.
        color_data left() const {return left_;}
        /// @brief Sets the xtd::forms::style_sheets::border_color value for the left edge.
        /// @param left The xtd::forms::style_sheets::border_color for the left edge.
        /// @remarks Setting this value can also alter the all property.
        void left(color_data left) {
          if (all_ || left_ != left) {
            all_ = false;
            left_ = left;
          }
        }
        
        /// @brief Gets the xtd::forms::style_sheets::border_color value for the right edge.
        /// @return The xtd::forms::style_sheets::border_color for the right edge.
        /// @remarks Setting this value can also alter the all property.
        color_data right() const {return right_;}
        /// @brief Sets the xtd::forms::style_sheets::border_color value for the right edge.
        /// @param right The xtd::forms::style_sheets::border_color for the right edge.
        /// @remarks Setting this value can also alter the all property.
        void right(color_data right) {
          if (all_ || right_ != right) {
            all_ = false;
            right_ = right;
          }
        }
        
        /// @brief Gets the xtd::forms::style_sheets::border_color value for the top edge.
        /// @return The xtd::forms::style_sheets::border_color for the top edge.
        /// @remarks Setting this value can also alter the all property.
        color_data top() const {return top_;}
        /// @brief Sets the xtd::forms::style_sheets::border_color value for the top edge.
        /// @param top The xtd::forms::style_sheets::border_color for the top edge.
        /// @remarks Setting this value can also alter the all property.
        void top(color_data top) {
          if (all_ || top_ != top) {
            all_ = false;
            top_ = top;
          }
        }
        /// @}
        
        /// @name Methods
        
        /// @{
        /// @brief Returns a string that represents the current xtd::forms::style_sheets::border_color.
        /// @return A string that represents the current xtd::forms::style_sheets::border_color.
        /// @remarks This method returns a string containing the labeled values of the xtd::forms::style_sheets::border_color for all four edges.
        xtd::ustring to_string() const noexcept override {return xtd::ustring::format("border_color [all={}, left={}, top={}, right={}, bottom={}]", all_, left_, top_, right_, bottom_);}
        /// @}
        
        /// @cond
        bool operator==(const border_color& p) const {return all_ == p.all_ && left_ == p.left_ && top_ == p.top_ && right_ == p.right_ && bottom_ == p.bottom_;}
        friend std::ostream& operator<<(std::ostream& os, const xtd::forms::style_sheets::border_color& border_color) noexcept {return os << border_color.to_string();}
        /// @endcond
        
      private:
        bool all_ = true;
        color_data left_;
        color_data top_;
        color_data right_;
        color_data bottom_;
      };
    }
  }
}

#include "Rectangle.hpp"

Rectangle::Rectangle(double height, double width) : m_height(height), m_width(width) {
}

double Rectangle::area() const {
  return m_height * m_width;
}

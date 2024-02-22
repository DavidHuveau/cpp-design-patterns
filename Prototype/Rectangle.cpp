#include "Rectangle.hpp"

#include <iostream>

using namespace std;

Rectangle::Rectangle(const int x, const int y, const string color, const int width, const int height) : Shape(x, y, color), m_width(width), m_height(height) {
};

Shape* Rectangle::clone() const {
  return new Rectangle(*this);
};

void Rectangle::draw() const {
  cout << "Drawing Rectangle with x: " << m_x << ", y: " << m_y << ", color: " << m_color;
  cout << ", width: " << m_width << ", height: " << m_height << endl;
};

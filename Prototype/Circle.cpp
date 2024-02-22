#include "Circle.hpp"

#include <iostream>

using namespace std;
Circle::Circle(const int x, const int y, const string color, const int radius) : Shape(x, y, color), m_radius(radius) {
};

Shape* Circle::clone() const {
  return new Circle(*this);
};

void Circle::draw() const {
  cout << "Drawing Circle with x: " << m_x << ", y: " << m_y << ", color: " << m_color;
  cout << ", radius: " << m_radius << endl;
};

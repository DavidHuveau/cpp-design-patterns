#ifndef RECTANGLE_HPP_INCLUDED
#define RECTANGLE_HPP_INCLUDED

#include "Shape.hpp"

class Rectangle : public Shape {
protected:
  int m_width;
  int m_height;

public:
  Rectangle(const int x, const int y, const std::string color, const int width, const int height);
  Shape* clone() const override;
  void   draw() const override;
};

#endif  // RECTANGLE_HPP_INCLUDED

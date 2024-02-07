#ifndef RECTANGLE_HPP_INCLUDED
#define RECTANGLE_HPP_INCLUDED

#include "ShapeInterface.hpp"

class Rectangle : public ShapeInterface {
public:
  Rectangle(double height, double width);
  double area() const override;
private:
  double m_height;
  double m_width;
};

#endif  // RECTANGLE_HPP_INCLUDED

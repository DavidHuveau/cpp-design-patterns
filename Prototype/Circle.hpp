#ifndef CIRCLE_HPP_INCLUDED
#define CIRCLE_HPP_INCLUDED

#include "Shape.hpp"

class Circle : public Shape {
protected:
  int m_radius;

public:
  Circle(const int x, const int y, const std::string color, const int radius);
  Shape* clone() const override;
  void   draw() const override;
};

#endif  // CIRCLE_HPP_INCLUDED

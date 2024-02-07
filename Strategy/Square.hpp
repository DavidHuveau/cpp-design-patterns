#ifndef SQUARE_HPP_INCLUDED
#define SQUARE_HPP_INCLUDED

#include "ShapeInterface.hpp"

class Square : public ShapeInterface {
public:
  Square(double height);
  double area() const override;
private:
  double m_height;
};

#endif  // SQUARE_HPP_INCLUDED

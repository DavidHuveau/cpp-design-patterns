#ifndef SHAPE_HPP_INCLUDED
#define SHAPE_HPP_INCLUDED

#include <string>

class Shape {
protected:
  int         m_x;
  int         m_y;
  std::string m_color;

public:
  Shape(const int x, const int y, const std::string color);
  virtual Shape* clone() const = 0;
  virtual void   draw() const  = 0;
};

#endif  // SHAPE_HPP_INCLUDED
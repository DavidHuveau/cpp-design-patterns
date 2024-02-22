#include "prototypeClientCode.hpp"

#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Shape.hpp"

void prototypeClientCode() {
  Rectangle prototypeRectangle(10, 10, "red", 200, 50);
  Shape* clonedRectangle1 = prototypeRectangle.clone();
  Shape* clonedRectangle2 = prototypeRectangle.clone();
  clonedRectangle1->draw();
  clonedRectangle2->draw();

  Circle prototypeCircle(10, 10, "blue", 120);
  Shape* clonedCircle1 = prototypeCircle.clone();
  clonedCircle1->draw();
};

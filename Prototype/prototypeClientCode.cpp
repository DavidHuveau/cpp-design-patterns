#include "prototypeClientCode.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Shape.hpp"

using namespace std; 

void prototypeClientCode() {
  Rectangle prototypeRectangle(10, 10, "red", 200, 50);
  Shape* clonedRectangle1 = prototypeRectangle.clone();
  Shape* clonedRectangle2 = prototypeRectangle.clone();

  Circle prototypeCircle(10, 10, "blue", 120);
  Shape* clonedCircle1 = prototypeCircle.clone();

  vector<Shape*> shapes = {clonedRectangle1, clonedRectangle2, clonedCircle1};

  vector<Shape*> shapesCopy;
  for (short int i(0); i < shapes.size(); i++) {
    shapesCopy.push_back(shapes[i]->clone());
  }

  for (int i = 0; i < shapesCopy.size(); ++i) {
    shapesCopy[i]->draw();
  }
};

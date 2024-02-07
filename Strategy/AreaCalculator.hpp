#ifndef AREA_CALCULATOR_HPP_INCLUDED
#define AREA_CALCULATOR_HPP_INCLUDED

#include <vector>

#include "ShapeInterface.hpp"

class AreaCalculator {
public:
  AreaCalculator(const std::vector<ShapeInterface *> &shapes);
  double sum() const;

private:
  std::vector<ShapeInterface *> m_shapes;
};

#endif  // AREA_CALCULATOR_HPP_INCLUDED

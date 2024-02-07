#include "AreaCalculator.hpp"

#include <vector>

#include "ShapeInterface.hpp"

using namespace std;

AreaCalculator::AreaCalculator(const vector<ShapeInterface *> &shapes) : m_shapes(shapes){};

double AreaCalculator::sum() const {
  double total = 0.0;
  for (int i(0); i < m_shapes.size(); i++) {
    total += m_shapes[i]->area();
  }
  return total;
}
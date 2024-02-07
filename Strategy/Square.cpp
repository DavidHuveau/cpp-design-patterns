#include <cmath>

#include "Square.hpp"

using namespace std;

Square::Square(double height): m_height(height) {
}

double Square::area() const {
  return pow(m_height, 2);
}

#include "SubtractionExpression.hpp"

SubtractionExpression::SubtractionExpression(ExpressionInterface* left, ExpressionInterface* right) : BinaryExpression(left, right) {};

int SubtractionExpression::interpret() {
  return m_left->interpret() - m_right->interpret();
};

#include "AdditionExpression.hpp"

AdditionExpression::AdditionExpression(ExpressionInterface* left, ExpressionInterface* right): BinaryExpression(left, right) {};

int AdditionExpression::interpret() {
  return m_left->interpret() + m_right->interpret();
};
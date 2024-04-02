#ifndef BINARY_EXPRESSION_HPP_INCLUDED
#define BINARY_EXPRESSION_HPP_INCLUDED

#include "ExpressionInterface.hpp"

// Non-terminal expression to represent a binary operation
class BinaryExpression : public ExpressionInterface {
protected:
  ExpressionInterface* m_left;
  ExpressionInterface* m_right;

public:
  BinaryExpression(ExpressionInterface* left, ExpressionInterface* right);
};

#endif  // BINARY_EXPRESSION_HPP_INCLUDED

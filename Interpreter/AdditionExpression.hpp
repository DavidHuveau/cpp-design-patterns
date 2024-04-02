#ifndef ADDITION_EXPRESSION_HPP_INCLUDED
#define ADDITION_EXPRESSION_HPP_INCLUDED

#include "BinaryExpression.hpp"

class AdditionExpression : public BinaryExpression {
public:
  AdditionExpression(ExpressionInterface* left, ExpressionInterface* right);
  int interpret() override;
};

#endif  // ADDITION_EXPRESSION_HPP_INCLUDED

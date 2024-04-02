#ifndef SUBSTRACTION_EXPRESSION_HPP_INCLUDED
#define SUBSTRACTION_EXPRESSION_HPP_INCLUDED

#include "BinaryExpression.hpp"

class SubtractionExpression : public BinaryExpression {
public:
  SubtractionExpression(ExpressionInterface* left, ExpressionInterface* right);
  int interpret() override;
};

#endif  // SUBSTRACTION_EXPRESSION_HPP_INCLUDED

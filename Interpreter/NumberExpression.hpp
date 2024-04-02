#ifndef HEADER_NAME_HPP_INCLUDED
#define HEADER_NAME_HPP_INCLUDED

#include "ExpressionInterface.hpp"

// Terminal expression to represent a constant
class NumberExpression : public ExpressionInterface {
private:
  int m_value;

public:
  NumberExpression(int value);
  int interpret() override;
};

#endif  // HEADER_NAME_HPP_INCLUDED
#include "NumberExpression.hpp"

NumberExpression::NumberExpression(int value) : m_value(value) {};

int NumberExpression::interpret() {
  return m_value;
};

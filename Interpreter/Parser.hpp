#ifndef PARSER_HPP_INCLUDED
#define PARSER_HPP_INCLUDED

#include <sstream>
#include <stack>

#include "ExpressionInterface.hpp"

using namespace std;

class Parser {
private:
  stack<ExpressionInterface*> m_expressionStack;
  bool                        isOperator(const string& token) const;
  ExpressionInterface*        getOperator(const string& token, ExpressionInterface* left, ExpressionInterface* right) const;

public:
  void parse(const string& expression);
  int  evaluate();
};

#endif  // PARSER_HPP_INCLUDED

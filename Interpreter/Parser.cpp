#include "Parser.hpp"

#include "AdditionExpression.hpp"
#include "NumberExpression.hpp"
#include "SubtractionExpression.hpp"

bool Parser::isOperator(const string& token) const {
  return (token == "+" || token == "-");
};

ExpressionInterface* Parser::getOperator(const string& token, ExpressionInterface* left, ExpressionInterface* right) const {
  if (token == "+") {
    return new AdditionExpression(left, right);
  } else if (token == "-") {
    return new SubtractionExpression(left, right);
  }
  return nullptr;
};

void Parser::parse(const string& expression) {
  istringstream iss(expression);
  string        token;

  while (getline(iss, token, ' ')) {
    if (isOperator(token)) {
      ExpressionInterface* right = m_expressionStack.top();
      m_expressionStack.pop();
      ExpressionInterface* left = m_expressionStack.top();
      m_expressionStack.pop();
      m_expressionStack.push(getOperator(token, left, right));
    } else {
      m_expressionStack.push(new NumberExpression(stoi(token)));
    }
  }
};

int Parser::evaluate() {
  return m_expressionStack.top()->interpret();
};

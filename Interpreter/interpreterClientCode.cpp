#include "Parser.hpp"

#include <iostream>

using namespace std;

void parse() {
  Parser parser;
  parser.parse("5 3 + 7 -");
  cout << "Result: " << parser.evaluate() << endl;
};

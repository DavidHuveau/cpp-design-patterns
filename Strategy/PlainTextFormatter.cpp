#include "PlainTextFormatter.hpp"

#include <iostream>

using namespace std;

void PlainTextFormatter::output_report(const string title, const vector<string> text) const {
  cout << "***** " << title << " *****" << endl;
  for (int i(0); i < text.size(); i++) {
    cout << text[i] << endl;
  }
};

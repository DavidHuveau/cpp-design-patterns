#include "HTMLFormatter.hpp"

#include <iostream>

using namespace std;

void HTMLFormatter::output_report(const string title, const vector<string> text) const {
  cout << "<html>" << endl;
  cout << " <head>" << endl;
  cout << "<title>" << title << "</title>" << endl;
  cout << " </head>" << endl;
  cout << " <body>" << endl;

  for (int i(0); i < text.size(); i++) {
    cout << "<p>" << text[0] << "</p>" << endl;
  }

  cout << " </body>" << endl;
  cout << "</html>" << endl;
};

#include "menu.hpp"

#include <iostream>

using namespace std;

void showMenu(short int& choiceNumber) {
  cout << "1 - Repository" << endl;
  cout << "2 - Strategy" << endl;
  cout << "3 - Adapter" << endl;
  cin >> choiceNumber;
}

#include "menu.hpp"

#include <iostream>

using namespace std;

void showMenu(short int& choiceNumber) {
  cout << "1 - Repository" << endl;
  cout << "2 - Strategy" << endl;
  cout << "3 - Adapter" << endl;
  cout << "4 - Abstract Factory" << endl;
  cout << "5 - Factory Method" << endl;
  cout << "6 - Builder" << endl;
  cout << "7 - Singleton" << endl;
  cout << "8 - Prototype" << endl;
  cout << "9 - Bridge" << endl;
  cout << "10 - Composite" << endl;
  cout << "11 - Decorator" << endl;
  cout << "12 - Facade" << endl;
  cin >> choiceNumber;
}

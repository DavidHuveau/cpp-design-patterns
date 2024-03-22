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
  cout << "13 - Flyweight" << endl;
  cout << "14 - Proxy" << endl;
  cout << "15 - ChainOfResponsibility" << endl;
  cout << "16 - Command" << endl;
  cout << "17 - Iterator" << endl;
  cout << "18 - Mediator" << endl;
  cout << "19 - Memento" << endl;
  cout << "20 - Observer" << endl;
  cout << "21 - State" << endl;
  cout << "22 - Template" << endl;
  cin >> choiceNumber;
}

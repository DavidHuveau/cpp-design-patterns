#include <iostream>

#include "menu.hpp"

using namespace std;

int main() {
  short int choiceNumber;
  showMenu(choiceNumber);

  switch (choiceNumber) {
  case 1:
    cout << "hello";
    break;
  }

  return 0;
}

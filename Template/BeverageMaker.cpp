#include "BeverageMaker.hpp"

#include <iostream>

using namespace std;

void BeverageMaker::makeBeverage() {
  boilWater();
  brew();
  pourInCup();
  addCondiments();
};

void BeverageMaker::boilWater() {
  cout << "Boiling water" << endl;
};

void BeverageMaker::pourInCup() {
  cout << "Pouring into cup" << endl;
};

#include "TemplateClientCode.hpp"

#include <iostream>

#include "CoffeeMaker.hpp"
#include "TeaMaker.hpp"

using namespace std;

void makeBeverage() {
  cout << "Making tea:" << endl;
  TeaMaker teaMaker;
  teaMaker.makeBeverage();

  cout << endl << "Making coffee:" << endl;
  CoffeeMaker coffeeMaker;
  coffeeMaker.makeBeverage();
};

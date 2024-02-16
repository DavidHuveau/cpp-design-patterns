#include "Meal.hpp"

#include <iostream>

using namespace std;

void Meal::setDrink(const string& drink) {
  m_drink = drink;
};

void Meal::setBurger(const string& burger) {
  m_burger = burger;
};

void Meal::setSideDish(const string& sideDish) {
  m_sideDish = sideDish;
};

void Meal::setToy(const string& toy) {
  m_toy = toy;
};

void Meal::display() const {
  cout << "Meal consists of: " << m_burger << ", " << m_sideDish << ", " << m_drink;
  if (m_toy != "") {
    cout << ", and " << m_toy;
  }
  cout << "." << endl;
};

#include "HappyMealBuilder.hpp"

using namespace std;

HappyMealBuilder::HappyMealBuilder() {
    this->reset();
};

void HappyMealBuilder::buildDrink(const string& drink) {
  m_meal->setDrink(drink);
};

void HappyMealBuilder::buildBurger() const {
  m_meal->setBurger("Cheeseburger");
};

void HappyMealBuilder::buildSideDish(const string& sideDish) {
  m_meal->setSideDish(sideDish);
};

void HappyMealBuilder::buildToy() {
  m_meal->setToy("Coloured Pencils");
};

Meal* HappyMealBuilder::getMeal() {
  return m_meal;
};

void HappyMealBuilder::reset() {
  m_meal = new Meal;
};

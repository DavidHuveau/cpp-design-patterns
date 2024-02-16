#include "RoyalBaconBuilder.hpp"

using namespace std;

RoyalBaconBuilder::RoyalBaconBuilder() {
  this->reset();
};

void RoyalBaconBuilder::buildDrink(const string& drink) {
  m_meal->setDrink(drink);
};

void RoyalBaconBuilder::buildBurger() const {
  m_meal->setBurger("Royal Bacon");
};

void RoyalBaconBuilder::buildSideDish(const string& sideDish) {
  m_meal->setSideDish(sideDish);
};

void RoyalBaconBuilder::buildToy() {
};

Meal* RoyalBaconBuilder::getMeal() {
  return m_meal;
};

void RoyalBaconBuilder::reset() {
  m_meal = new Meal;
};

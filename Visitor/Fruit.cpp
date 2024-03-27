#include "Fruit.hpp"

using namespace std;

Fruit::Fruit(const string& name, double pricePerKg, double weight) : m_name(name), m_pricePerKg(pricePerKg), m_weight(weight) {};

double Fruit::accept(VisitorInterface* visitor){
  return visitor->visit(this);
};

string Fruit::getName() const {
  return m_name;
};

double Fruit::getPricePerKg() const {
  return m_pricePerKg;
};

double Fruit::getWeight() const {
  return m_weight;
};

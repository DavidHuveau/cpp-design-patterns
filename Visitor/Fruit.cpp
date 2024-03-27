#include "Fruit.hpp"

Fruit::Fruit(const std::string& name, double pricePerKg, double weight) : name(name), pricePerKg(pricePerKg), weight(weight) {};

double Fruit::accept(VisitorInterface* visitor){
  return visitor->visit(this);
};

std::string Fruit::getName() const {
  return name;
};

double Fruit::getPricePerKg() const {
  return pricePerKg;
};

double Fruit::getWeight() const {
  return weight;
};

#ifndef FRUIT_HPP_INCLUDED
#define FRUIT_HPP_INCLUDED

#include <string>

#include "Element.hpp"
#include "ShoppingCartVisitor.hpp"

class Fruit : public Element {
private:
  std::string name;
  double      pricePerKg;
  double      weight;

public:
  Fruit(const std::string& name, double pricePerKg, double weight);
  double      accept(ShoppingCartVisitor* visitor) override;
  std::string getName() const;
  double      getPricePerKg() const;
  double      getWeight() const;
};

#endif  // FRUIT_HPP_INCLUDED

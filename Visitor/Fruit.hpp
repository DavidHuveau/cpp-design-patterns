#ifndef FRUIT_HPP_INCLUDED
#define FRUIT_HPP_INCLUDED

#include <string>

#include "ElementInterface.hpp"
#include "VisitorInterface.hpp"

class Fruit : public ElementInterface {
private:
  std::string name;
  double      pricePerKg;
  double      weight;

public:
  Fruit(const std::string& name, double pricePerKg, double weight);
  double      accept(VisitorInterface* visitor) override;
  std::string getName() const;
  double      getPricePerKg() const;
  double      getWeight() const;
};

#endif  // FRUIT_HPP_INCLUDED

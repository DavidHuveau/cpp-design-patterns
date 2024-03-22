#ifndef COFFEE_MAKER_HPP_INCLUDED
#define COFFEE_MAKER_HPP_INCLUDED

#include "BeverageMaker.hpp"

class CoffeeMaker : public BeverageMaker {
public:
  void brew() override;
  void addCondiments() override;
};

#endif  // COFFEE_MAKER_HPP_INCLUDED

#ifndef ROYAL_BACON_BUILDER_HPP_INCLUDED
#define ROYAL_BACON_BUILDER_HPP_INCLUDED

#include "MealBuilderInterface.hpp"

class RoyalBaconBuilder : public MealBuilderInterface {
public:
  RoyalBaconBuilder();
  void  buildDrink(const std::string& drink) override;
  void  buildBurger() const override;
  void  buildSideDish(const std::string& sideDish) override;
  void  buildToy() override;
  Meal* getMeal() override;
  void  reset() override;

private:
  Meal* m_meal;
};

#endif  // ROYAL_BACON_BUILDER_HPP_INCLUDED

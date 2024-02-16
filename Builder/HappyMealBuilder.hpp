#ifndef HAPPY_MEAL_BUILDER_HPP_INCLUDED
#define HAPPY_MEAL_BUILDER_HPP_INCLUDED

#include "MealBuilderInterface.hpp"

class HappyMealBuilder : public MealBuilderInterface {
public:
  HappyMealBuilder();
  void  buildDrink(const std::string& drink) override;
  void  buildBurger() const override;
  void  buildSideDish(const std::string& sideDish) override;
  void  buildToy() override;
  Meal* getMeal() override;
  void  reset() override;

private:
  Meal* m_meal;
};

#endif  // HAPPY_MEAL_BUILDER_HPP_INCLUDED

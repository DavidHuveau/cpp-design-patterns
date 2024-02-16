#ifndef MEAL_BUILDER_INTERFACE_HPP_INCLUDED
#define MEAL_BUILDER_INTERFACE_HPP_INCLUDED

#include "Meal.hpp"

class MealBuilderInterface {
public:
  virtual void  buildDrink(const std::string& drink)       = 0;
  virtual void  buildBurger() const                        = 0;
  virtual void  buildSideDish(const std::string& sideDish) = 0;
  virtual void  buildToy()                                 = 0;
  virtual Meal* getMeal()                                  = 0;
  virtual void  reset()                                    = 0;
};

#endif  // MEAL_BUILDER_INTERFACE_HPP_INCLUDED

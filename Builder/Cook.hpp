#ifndef COOK_HPP_INCLUDED
#define COOK_HPP_INCLUDED

#include "MealBuilderInterface.hpp"

class Cook {
public:
  Cook(MealBuilderInterface* builder);
  Meal* make(std::string const type = "");
  void  changeBuilder(MealBuilderInterface* builder);

private:
  MealBuilderInterface* m_builder;
};

#endif  // COOK_HPP_INCLUDED

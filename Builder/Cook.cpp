#include "Cook.hpp"

Cook::Cook(MealBuilderInterface* builder) : m_builder(builder){
  m_builder->buildBurger();
  m_builder->buildDrink("Coca L size");
  m_builder->buildSideDish("French Fries L");
  m_builder->buildToy();
};

Meal* Cook::make() {
  return m_builder->getMeal();
};

void Cook::changeBuilder(MealBuilderInterface* builder) {
  m_builder = builder;
};

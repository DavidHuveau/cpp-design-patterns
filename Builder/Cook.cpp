#include "Cook.hpp"

Cook::Cook(MealBuilderInterface* builder) : m_builder(builder){
};

Meal* Cook::make() {
  m_builder->reset();

  m_builder->buildBurger();
  m_builder->buildDrink("Coca L size");
  m_builder->buildSideDish("French Fries L");
  m_builder->buildToy();

  return m_builder->getMeal();
};

void Cook::changeBuilder(MealBuilderInterface* builder) {
  m_builder = builder;
};

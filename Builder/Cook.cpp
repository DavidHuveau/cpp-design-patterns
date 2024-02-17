#include "Cook.hpp"

using namespace std;

Cook::Cook(MealBuilderInterface* builder) : m_builder(builder){};

Meal* Cook::make(string const type) {
  m_builder->reset();

  if (type == "with-supplement") {
    m_builder->buildDrink("Coca L size");
    m_builder->buildSideDish("French Fries L size");
  } else {
    m_builder->buildDrink("Coca M size");
    m_builder->buildSideDish("French Fries M size");
  }
  m_builder->buildBurger();
  m_builder->buildToy();

  return m_builder->getMeal();
};

void Cook::changeBuilder(MealBuilderInterface* builder) {
  m_builder = builder;
};

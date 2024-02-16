#ifndef MEAL_INTERFACE_HPP_INCLUDED
#define MEAL_INTERFACE_HPP_INCLUDED

#include <string>

class Meal {
private:
  std::string m_drink;
  std::string m_burger;
  std::string m_sideDish;
  std::string m_toy;

public:
  void setDrink(const std::string& drink);
  void setBurger(const std::string& burger);
  void setSideDish(const std::string& sideDish);
  void setToy(const std::string& toy);
  void display() const;
};

#endif  // MEAL_INTERFACE_HPP_INCLUDED

#include "ShoppingCartVisitor.hpp"

#include "Book.hpp"
#include "Fruit.hpp"

#include <iostream>

double ShoppingCartVisitor::visit(Book* book) {
  double cost = book->getPrice();
  // apply 5$ discount if book price is greater than 50
  if (cost > 50.0) {
    cost -= 5.0;
  }
  std::cout << "Book ISBN::" + book->getName() << " cost = " << cost << std::endl;
  return cost;
}

double ShoppingCartVisitor::visit(Fruit* fruit) {
  double cost = fruit->getPricePerKg() * fruit->getWeight();
  std::cout << fruit->getName() << " cost = " << cost << std::endl;
  return cost;
}

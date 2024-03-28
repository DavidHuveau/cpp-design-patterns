#include "ShoppingCartVisitor.hpp"

#include <iostream>

#include "Book.hpp"
#include "Fruit.hpp"

using namespace std;

double ShoppingCartVisitor::visit(Book* book) {
  double cost = book->getPrice();
  // apply 5$ discount if book price is greater than 50
  if (cost > 50.0) {
    cost -= 5.0;
  }
  cout << "Book: " + book->getName() << " cost = " << cost << endl;
  return cost;
}

double ShoppingCartVisitor::visit(Fruit* fruit) {
  double cost = fruit->getPricePerKg() * fruit->getWeight();
  cout << "Fruit: " << fruit->getName() << " cost = " << cost << endl;
  return cost;
}

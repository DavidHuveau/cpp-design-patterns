#include "ShoppingCartVisitorImpl.hpp"

#include "Book.hpp"
#include "Fruit.hpp"

double ShoppingCartVisitorImpl::visit(Book* book) {
  double cost = book->getPrice();
  // Appliquer une réduction de 5 $ si le prix du livre est supérieur à 50 $
  if (cost > 50.0) {
    cost -= 5.0;
  }
  return cost;
}

double ShoppingCartVisitorImpl::visit(Fruit* fruit) {
  return fruit->getPricePerKg() * fruit->getWeight();
}
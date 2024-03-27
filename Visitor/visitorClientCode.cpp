#include "visitorClientCode.hpp"

#include <iostream>
#include <vector>

#include "Book.hpp"
#include "Fruit.hpp"
#include "ShoppingCartVisitor.hpp"
#include "ShoppingCartVisitorImpl.hpp"

void calculateTheCart() {
  std::vector<Element*> items = {
      new Book("Book 1", 20.0),
      new Fruit("Banana", 2.0, 1.5),
      new Book("Book 2", 30.0),
      new Fruit("Apple", 3.0, 2.0),
      new Book("Book 3", 25.0)};

  ShoppingCartVisitor* visitor = new ShoppingCartVisitorImpl();

  double totalPrice = 0;
  for (Element* item : items) {
    totalPrice += item->accept(visitor);
  }

  std::cout << "Total Price: " << totalPrice << std::endl;
};
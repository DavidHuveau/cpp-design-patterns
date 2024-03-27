#include "visitorClientCode.hpp"

#include <iostream>
#include <vector>

#include "Book.hpp"
#include "Fruit.hpp"
#include "VisitorInterface.hpp"
#include "ShoppingCartVisitor.hpp"

using namespace std;

void calculateTheCart() {
  std::vector<ElementInterface*> items = {
      new Book("Book 1", 20.0),
      new Fruit("Banana", 2.0, 1.5),
      new Book("Book 2", 30.0),
      new Fruit("Apple", 3.0, 2.0),
      new Book("Book 3", 25.0)};

  VisitorInterface* visitor = new ShoppingCartVisitor();

  double totalPrice = 0;
  for (ElementInterface* item : items) {
    NewFunction(totalPrice, item->accept(visitor));
  }

  cout << "Total Price: " << totalPrice << endl;
}

void NewFunction(double& totalPrice, double price) {
  totalPrice += price;
};

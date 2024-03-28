#include "visitorClientCode.hpp"

#include <iostream>
#include <vector>

#include "Book.hpp"
#include "Fruit.hpp"
#include "ShoppingCartVisitor.hpp"
#include "VisitorInterface.hpp"

using namespace std;

double calculatePrice(vector<ElementInterface*> items) {
  VisitorInterface* visitor = new ShoppingCartVisitor();

  double sum = 0;
  for (ElementInterface* item : items) {
    sum = sum + item->accept(visitor);
  }
  return sum;
};

void calculateTheCart() {
  vector<ElementInterface*> items = {
      new Book("Book 1", 20.0),
      new Fruit("Banana", 2.0, 1.5),
      new Book("Book 2", 30.0),
      new Fruit("Apple", 3.0, 2.0),
      new Book("Book 3", 25.0)};

  double total = calculatePrice(items);
  cout << "Total Price: " << total << endl;
}

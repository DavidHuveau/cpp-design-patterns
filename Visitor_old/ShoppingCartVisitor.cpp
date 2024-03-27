// #include "ShoppingCartVisitor.hpp"

// #include <iostream>

// #include "Book.hpp"
// #include "Fruit.hpp"

// using namespace std;

// int visit(Book* book) {
//   int cost = 0;

//   // apply 5$ discount if book price is greater than 50
//   if (book->getPrice() > 50) {
//     cost = book->getPrice() - 5;
//   } else {
//     cost = book->getPrice();
//   }

//   cout << "Book ISBN::" + book->getIsbnNumber() << " cost = " << cost << endl;
//   return cost;
// };

// int visit(Fruit* fruit) {
//   int cost = fruit->getPricePerKg() * fruit->getWeight();
//   cout << fruit->getName() << " cost = " << cost << endl;
//   return cost;
// };

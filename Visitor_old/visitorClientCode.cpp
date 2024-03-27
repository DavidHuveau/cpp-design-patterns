// #include "visitorClientCode.hpp"

// #include <iostream>
// #include <vector>

// #include "ElementInterface.hpp"
// #include "ShoppingCartVisitor.hpp"
// #include "VisitorInterface.hpp"
// #include "Book.hpp"
// #include "Fruit.hpp"

// using namespace std;

// int calculatePrice(vector<ElementInterface*> items) {
//   VisitorInterface* visitor = new ShoppingCartVisitor();
//   int               sum     = 0;
//   for (ElementInterface* item : items) {
//     sum = sum + item->accept(visitor);
//   }
//   return sum;
// };

// void calculateTheCart() {
//   vector<ElementInterface*> items = {new Book(20, "1234"),
//                                      new Book(100, "5678"),
//                                      new Fruit(10, 2, "Banana"),
//                                      new Fruit(5, 5, "Apple")};

//   int total = calculatePrice(items);
//   cout << "Total Cost = " << total << endl;
// };

// // voir ref circulaire et comment le résoudre

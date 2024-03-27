#ifndef SHOPPING_CART_VISITOR_HPP_INCLUDED
#define SHOPPING_CART_VISITOR_HPP_INCLUDED

class Book;
class Fruit;

class ShoppingCartVisitor {
public:
  virtual double visit(Book* book)   = 0;
  virtual double visit(Fruit* fruit) = 0;
};

#endif  // SHOPPING_CART_VISITOR_HPP_INCLUDED

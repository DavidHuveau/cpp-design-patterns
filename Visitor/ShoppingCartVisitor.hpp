#ifndef SHOPPING_CART_VISITOR_HPP_INCLUDED
#define SHOPPING_CART_VISITOR_HPP_INCLUDED

#include "VisitorInterface.hpp"

class ShoppingCartVisitor : public VisitorInterface {
public:
  double visit(Book* book) override;
  double visit(Fruit* fruit) override;
};

#endif  // SHOPPING_CART_VISITOR_HPP_INCLUDED

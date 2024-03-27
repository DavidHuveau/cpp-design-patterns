#ifndef SHOPPING_CART_VISITOR_IMPL_HPP_INCLUDED
#define SHOPPING_CART_VISITOR_IMPL_HPP_INCLUDED

#include "ShoppingCartVisitor.hpp"

class ShoppingCartVisitorImpl : public ShoppingCartVisitor {
public:
  double visit(Book* book) override;
  double visit(Fruit* fruit) override;
};

#endif  // SHOPPING_CART_VISITOR_IMPL_HPP_INCLUDED

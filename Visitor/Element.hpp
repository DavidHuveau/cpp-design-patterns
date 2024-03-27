#ifndef ELEMENT_HPP_INCLUDED
#define ELEMENT_HPP_INCLUDED

class ShoppingCartVisitor;

class Element {
public:
  virtual double accept(ShoppingCartVisitor* visitor) = 0;
};

#endif  // ELEMENT_HPP_INCLUDED

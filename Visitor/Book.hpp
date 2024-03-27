#ifndef BOOK_HPP_INCLUDED
#define BOOK_HPP_INCLUDED

#include <string>

#include "Element.hpp"
#include "ShoppingCartVisitor.hpp"

class Book : public Element {
private:
  std::string name;
  double      price;

public:
  Book(const std::string& name, double price);
  double      accept(ShoppingCartVisitor* visitor) override;
  std::string getName() const;
  double      getPrice() const;
};

#endif  // BOOK_HPP_INCLUDED

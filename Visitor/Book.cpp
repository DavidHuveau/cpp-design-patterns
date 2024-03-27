#include "Book.hpp"

Book::Book(const std::string& name, double price) : name(name), price(price) {};

double Book::accept(ShoppingCartVisitor* visitor){
  visitor->visit(this);
};

std::string Book::getName() const {
  return name;
};

double Book::getPrice() const {
  return price;
};

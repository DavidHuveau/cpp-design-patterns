#include "Book.hpp"
#include "VisitorInterface.hpp"

using namespace std;

Book::Book(const string& name, double price) : m_name(name), m_price(price){};

double Book::accept(VisitorInterface* visitor) {
  return visitor->visit(this);
};

string Book::getName() const {
  return m_name;
};

double Book::getPrice() const {
  return m_price;
};

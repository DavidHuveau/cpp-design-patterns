#ifndef BOOK_HPP_INCLUDED
#define BOOK_HPP_INCLUDED

#include <string>

#include "ElementInterface.hpp"
#include "VisitorInterface.hpp"

class Book : public ElementInterface {
private:
  std::string name;
  double      price;

public:
  Book(const std::string& name, double price);
  double      accept(VisitorInterface* visitor) override;
  std::string getName() const;
  double      getPrice() const;
};

#endif  // BOOK_HPP_INCLUDED

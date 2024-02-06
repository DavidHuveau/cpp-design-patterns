#ifndef BOOK_REPOSITORY_INTERFACE_HPP_INCLUDED
#define BOOK_REPOSITORY_INTERFACE_HPP_INCLUDED

#include "Book.hpp"

class BookRepositoryInterface {
public:
  virtual void addBook(const Book& book) = 0;
};

#endif  // BOOK_REPOSITORY_INTERFACE_HPP_INCLUDED

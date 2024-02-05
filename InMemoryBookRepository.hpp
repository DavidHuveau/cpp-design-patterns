
#ifndef IN_MEMORY_BOOK_REPOSITORY_HPP_INCLUDED
#define IN_MEMORY_BOOK_REPOSITORY_HPP_INCLUDED

#include "BookRepositoryInterface.hpp"
#include "Book.hpp"

class InMemoryBookRepository : public BookRepositoryInterface {
public:
  void addBook(const Book& book) override;
};

#endif  // IN_MEMORY_BOOK_REPOSITORY_HPP_INCLUDED

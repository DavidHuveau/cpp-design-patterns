#include "InMemoryBookRepository.hpp"

#include <iostream>

void InMemoryBookRepository::addBook(const Book& book) {
  std::cout << "Book saved in the database." << std::endl;
}

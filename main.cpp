#include <iostream>

#include "menu.hpp"
#include "Book.hpp"
#include "InMemoryBookRepository.hpp"

using namespace std;

int main() {
  short int choiceNumber;
  showMenu(choiceNumber);

  switch (choiceNumber) {
  case 1:
    Book book("John Doe", "C++ Programming");
    InMemoryBookRepository bookRepository;
    bookRepository.addBook(book);

    break;
  }

  return 0;
}

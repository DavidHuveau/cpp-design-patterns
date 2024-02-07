#include <iostream>

#include "menu.hpp"
#include "Repository/Book.hpp"
#include "Repository/InMemoryBookRepository.hpp"
#include "Strategy/Rectangle.hpp"
#include "Strategy/Square.hpp"

using namespace std;

int main() {
  short int choiceNumber;
  showMenu(choiceNumber);

  switch (choiceNumber) {
  case 1: {
    Book book("John Doe", "C++ Programming");
    InMemoryBookRepository bookRepository;
    bookRepository.addBook(book);

    break;
  }
  case 2: {
    Rectangle table(10, 20);
    cout << table.area() << endl;

    Square chair(10);
    cout << chair.area() << endl;
    break;
  }
  }

  return 0;
}

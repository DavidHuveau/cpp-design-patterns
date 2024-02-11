#include <iostream>

#include "menu.hpp"
#include "Repository/Book.hpp"
#include "Repository/InMemoryBookRepository.hpp"
#include "Strategy/ReportGenerator.hpp"
#include "Strategy/HTMLFormatter.hpp"
#include "Strategy/PlainTextFormatter.hpp"
#include "Adapter/PrinterAdapter.hpp"
#include "Adapter/adapterClientCode.hpp"
#include "Adapter/NewPrinter.hpp"
#include "AbstractFactory/abstractFactoryClientCode.hpp"
#include "AbstractFactory/MacFactory.hpp"
#include "AbstractFactory/WinFactory.hpp"

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
    PlainTextFormatter plainTextFormatter;
    ReportGenerator report1(&plainTextFormatter);
    report1.output_report();
    cout << endl;

    HTMLFormatter htmlFormatter;
    report1.set_formatter(&htmlFormatter);
    report1.output_report();
    break;
  }
  case 3: {
    NewPrinter newPrinter;
    adapterClientCode(newPrinter);
    cout << endl;

    PrinterAdapter printerAdapter;
    adapterClientCode(printerAdapter);
    break;
  }
  case 4: {
    MacFactory macFactory;
    abstractFactoryClientCode(macFactory);
    cout << endl;
    WinFactory winFactory;
    abstractFactoryClientCode(winFactory);
    break;
  }
  }

  return 0;
}

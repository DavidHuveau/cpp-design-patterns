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
#include "FactoryMethod/TruckTransportCreator.hpp"
#include "FactoryMethod/ShipTransportCreator.hpp"
#include "FactoryMethod/factoryMethodClientCode.hpp"


#include "Builder/Cook.hpp"
#include "Builder/MealBuilderInterface.hpp"
#include "Builder/RoyalBaconBuilder.hpp"
#include "Builder/HappyMealBuilder.hpp"


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
  case 5: {
    TruckTransportCreator truckTransportCreator;
    factoryMethodClientCode(truckTransportCreator);
    cout << endl;
    ShipTransportCreator shipTransportCreator;
    factoryMethodClientCode(shipTransportCreator);
    break;
  }
  case 6: {
    MealBuilderInterface* builder = new RoyalBaconBuilder();
    Cook cook(builder);
    Meal* meal = cook.make();
    meal->display();
    cout << endl;

    MealBuilderInterface* builder2 = new HappyMealBuilder();
    // cook.changeBuilder(builder2);
    Cook cook2(builder2);
    Meal* meal2 = cook2.make();
    meal2->display();

    break;
  }
  }

  return 0;
}

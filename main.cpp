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
#include "Singleton/Singleton.hpp"
#include "Prototype/prototypeClientCode.hpp"
#include "Bridge/Chair.hpp"
#include "Bridge/Wood.hpp"
#include "Bridge/Metal.hpp"
#include "Composite/compositeClientCode.hpp"
#include "Decorator/SMSDecorator.hpp"
#include "Decorator/FacebookDecorator.hpp"
#include "Decorator/Notifier.hpp"
#include "Facade/facadeClientCode.hpp"
#include "Flyweight/Forest.hpp"
#include "Proxy/BankAccountInterface.hpp"
#include "Proxy/BankAccountProxy.hpp"
#include "ChainOfResponsibility/chainOfResponsibilityClientCode.hpp"
#include "Command/commandClientCode.hpp"
#include "Iterator/iteratorClientCode.hpp"
#include "Mediator/mediatorClientCode.hpp"
#include "Memento/mementoClientCode.hpp"
#include "Observer/observerClientCode.hpp"
#include "State/stateClientCode.hpp"
#include "Template/TemplateClientCode.hpp"

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
    MealBuilderInterface* royalBaconBuilder = new RoyalBaconBuilder();
    Cook cook(royalBaconBuilder);
    Meal* meal = cook.make("with-supplement");
    meal->display();
    cout << endl;

    MealBuilderInterface* happyMealBuilder = new HappyMealBuilder();
    cook.changeBuilder(happyMealBuilder);
    Meal* meal2 = cook.make();
    meal2->display();
    break;
  }
  case 7: {
    Singleton* s1 = Singleton::getInstance(10);
    s1->printUniqueID();
    cout << "Memory location: " << s1 << endl;
    Singleton* s2 = Singleton::getInstance(5);
    s2->printUniqueID();
    cout << "Memory location: " << s2 << endl;
    break;
  }
  case 8: {
    prototypeClientCode();
    break;
  }
  case 9: {
    Wood* woodMaterial = new Wood();
    Chair wooddenChair(woodMaterial);
    wooddenChair.produce();

    Metal* metalMaterial = new Metal();
    Chair metalChair(metalMaterial);
    metalChair.produce();
    break;
  }
  case 10: {
    compositeClientCode();
    break;
  }
  case 11: {
    NotificationInterface* notifyStack = new Notifier();
		notifyStack = new SMSDecorator(notifyStack);
    notifyStack = new FacebookDecorator(notifyStack);
    notifyStack->sendMessage("Hello Medium");

    break;
  }
  case 12: {
    facadeClientCode();
    break;
  }
  case 13: {
    Forest forest;
    forest.plantTree("Oak", "Green", 10, 20);
    forest.plantTree("Pine", "Blue", 30, 40);
    forest.draw();
    break;
  }
  case 14: {
    BankAccountInterface* account = new BankAccountProxy();
    account->deposit(100);
    account->withdraw(50);
    account->withdraw(70); // Should print "Insufficient funds."
    delete account;
    break;
  }
  case 15: {
    createSuppportChain();
    break;
  }
  case 16: {
    controlAnElectronicDevice();
    break;
  }
  case 17: {
    sendsMessagesToAllFacebookContacts();
    break;
  }
  case 18: {
    manageAirTraffic();
    break;
  }
  case 19: {
    writeDocument();
    break;
  }
  case 20: {
    weatherStation();
    break;
  }
  case 21: {
    testMediaPlayer();
    break;
  }
  case 22: {
    makeBeverage();
    break;
  }
  }

  return 0;
}

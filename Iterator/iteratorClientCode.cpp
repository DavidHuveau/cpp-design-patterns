#include "iteratorClientCode.hpp"

#include <iostream>

#include "FacebookContact.hpp"
#include "FacebookContactList.hpp"
#include "IteratorInterface.hpp"
using namespace std;

void sendsMessagesToAllFacebookContacts() {
  FacebookContactList contactList;
  contactList.addContact(new FacebookContact("John Doe"));
  contactList.addContact(new FacebookContact("Alice Smith"));
  contactList.addContact(new FacebookContact("Bob Johnson"));

  // int a = contactList.size();
  // FacebookContact* test = contactList.get(0);
  // std::string res = test->getName();

  IteratorInterface<FacebookContact>* iterator = contactList.createIterator();

  while (iterator->hasNext()) {
    FacebookContact* contact = iterator->getNext();
    cout << "Sending message to: " << contact->getName() << endl;
  }
};

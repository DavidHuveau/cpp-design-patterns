#include "Singleton.hpp"

#include <iostream>

using namespace std;

Singleton::Singleton(const int id) {
  s_uniqueId = id;
};

Singleton* Singleton::getInstance(const int id) {
  if (s_oneAndOnlyInstance == nullptr) {
    cout << "Creating a new instance" << endl;
    s_oneAndOnlyInstance = new Singleton(id);
  }
  cout << "Returning instance with unique id: " << s_uniqueId << endl;
  return s_oneAndOnlyInstance;
};

void Singleton::printUniqueID() {
  cout << "Current Instance's unique id: " << s_uniqueId << endl;
};

Singleton* Singleton::s_oneAndOnlyInstance = nullptr;
int        Singleton::s_uniqueId           = 0;

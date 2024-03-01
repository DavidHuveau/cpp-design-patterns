#include "Notifier.hpp"

#include <iostream>

using namespace std;

void Notifier::sendMessage(string message) const {
  cout << message << ", message sent in email" << endl;
};

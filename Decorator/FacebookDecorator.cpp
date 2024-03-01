#include "FacebookDecorator.hpp"

#include <iostream>

using namespace std;

FacebookDecorator::FacebookDecorator(NotificationInterface* wrappee) : BaseDecorator(wrappee){};

void FacebookDecorator::sendMessage(string message) const {
  BaseDecorator::sendMessage(message);
  sendFacebook(message);
};

void FacebookDecorator::sendFacebook(string message) const {
  cout << message << ", message sent in Facebook" << endl;
};

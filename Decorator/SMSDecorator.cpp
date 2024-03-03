#include "SMSDecorator.hpp"

#include <iostream>

using namespace std;

SMSDecorator::SMSDecorator(NotificationInterface* wrappee) : BaseDecorator(wrappee){};

void SMSDecorator::sendMessage(string message) const {
  BaseDecorator::sendMessage(message);
  this->sendSMS(message);
};

void SMSDecorator::sendSMS(string message) const {
  cout << message << ", message sent in SMS" << endl;
};

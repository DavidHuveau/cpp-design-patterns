#include "BaseDecorator.hpp"

using namespace std;

BaseDecorator::BaseDecorator(NotificationInterface* wrappee) : m_wrappee(wrappee){};

void BaseDecorator::sendMessage(string message) const {
  m_wrappee->sendMessage(message);
};

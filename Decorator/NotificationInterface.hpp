#ifndef NOTIFICATION_INTERFACE_HPP_INCLUDED
#define NOTIFICATION_INTERFACE_HPP_INCLUDED

#include <string>

class NotificationInterface {
public:
  virtual void sendMessage(std::string message) const = 0;
};

#endif  // NOTIFICATION_INTERFACE_HPP_INCLUDED

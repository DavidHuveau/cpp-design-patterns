#ifndef NOTIFIER_HPP_INCLUDED
#define NOTIFIER_HPP_INCLUDED

#include "NotificationInterface.hpp"

class Notifier : public NotificationInterface {
public:
  void sendMessage(std::string message) const override;
};

#endif  // NOTIFIER_HPP_INCLUDED

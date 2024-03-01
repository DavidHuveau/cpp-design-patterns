#ifndef SMS_DECORATOR_HPP_INCLUDED
#define SMS_DECORATOR_HPP_INCLUDED

#include "BaseDecorator.hpp"

class SMSDecorator : public BaseDecorator {
private:
  void sendSMS(std::string message) const;

public:
  SMSDecorator(NotificationInterface* wrappee);
  void sendMessage(std::string message) const override;
};

#endif  // SMS_DECORATOR_HPP_INCLUDED

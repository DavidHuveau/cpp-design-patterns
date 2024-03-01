#ifndef BASE_DECORATOR_HPP_INCLUDED
#define BASE_DECORATOR_HPP_INCLUDED

#include "NotificationInterface.hpp"

class BaseDecorator : public NotificationInterface {
protected:
  NotificationInterface* m_wrappee;

public:
  BaseDecorator(NotificationInterface* wrappee);
  void sendMessage(std::string message) const override;
};

#endif  // BASE_DECORATOR_HPP_INCLUDED

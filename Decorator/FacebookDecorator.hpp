#ifndef FACEBOOK_DECORATOR_HPP_INCLUDED
#define FACEBOOK_DECORATOR_HPP_INCLUDED

#include "BaseDecorator.hpp"

class FacebookDecorator : public BaseDecorator {
private:
  void sendFacebook(std::string message) const;

public:
  FacebookDecorator(NotificationInterface* wrappee);
  void sendMessage(std::string message) const override;
};

#endif  // FACEBOOK_DECORATOR_HPP_INCLUDED

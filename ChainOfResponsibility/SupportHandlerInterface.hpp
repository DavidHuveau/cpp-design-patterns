#ifndef SUPPORT_HANDLER_INTERFACE_HPP_INCLUDED
#define SUPPORT_HANDLER_INTERFACE_HPP_INCLUDED

#include <string>

class SupportHandlerInterface {
public:
  virtual void setNextHandler(SupportHandlerInterface* nextHandler) = 0;
  virtual void handleRequest(const std::string& request) const      = 0;
};

#endif  // SUPPORT_HANDLER_INTERFACE_HPP_INCLUDED

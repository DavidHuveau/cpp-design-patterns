#ifndef LEVEL1_SUPPPORT_HANDLER_HPP_INCLUDED
#define LEVEL1_SUPPPORT_HANDLER_HPP_INCLUDED

#include "SupportHandlerInterface.hpp"

class Level1SupportHandler : public SupportHandlerInterface {
private:
  SupportHandlerInterface* m_nextHandler;

public:
  void setNextHandler(SupportHandlerInterface* nextHandler) override;
  void handleRequest(const std::string& request) const override;
};

#endif  // LEVEL1_SUPPPORT_HANDLER_HPP_INCLUDED

#ifndef LEVEL3_SUPPPORT_HANDLER_HPP_INCLUDED
#define LEVEL3_SUPPPORT_HANDLER_HPP_INCLUDED

#include "SupportHandlerInterface.hpp"

class Level3SupportHandler : public SupportHandlerInterface {
private:
  SupportHandlerInterface* m_nextHandler;

public:
  void setNextHandler(SupportHandlerInterface* nextHandler) override;
  void handleRequest(const std::string& request) const override;
};

#endif  // LEVEL3_SUPPPORT_HANDLER_HPP_INCLUDED

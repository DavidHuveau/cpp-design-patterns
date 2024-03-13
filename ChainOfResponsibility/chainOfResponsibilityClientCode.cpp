#include "chainOfResponsibilityClientCode.hpp"

#include "Level1SupportHandler.hpp"
#include "Level2SupportHandler.hpp"
#include "Level3SupportHandler.hpp"


void createSuppportChain() {
  SupportHandlerInterface* level1Handler = new Level1SupportHandler();
  SupportHandlerInterface* level2Handler = new Level2SupportHandler();
  SupportHandlerInterface* level3Handler = new Level3SupportHandler();

  level1Handler->setNextHandler(level2Handler);
  level2Handler->setNextHandler(level3Handler);
  level1Handler->handleRequest("level_1");
  level1Handler->handleRequest("level_3");
  level1Handler->handleRequest("level_99");
};

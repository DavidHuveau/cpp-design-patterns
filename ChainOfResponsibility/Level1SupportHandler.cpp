#include "Level1SupportHandler.hpp"

#include "iostream"

using namespace std;

void Level1SupportHandler::setNextHandler(SupportHandlerInterface* nextHandler) {
  m_nextHandler = nextHandler;
};

void Level1SupportHandler::handleRequest(const std::string& request) const {
  if (request == "level_1") {
    cout << "Level 1 Support handled the request." << endl;
  } else if (m_nextHandler != nullptr) {
    m_nextHandler->handleRequest(request);
  } else {
    cout << "Invalid level!" << endl;
  }
};

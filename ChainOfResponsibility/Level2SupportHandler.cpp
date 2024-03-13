#include "Level2SupportHandler.hpp"

#include "iostream"

using namespace std;

void Level2SupportHandler::setNextHandler(SupportHandlerInterface* nextHandler) {
  m_nextHandler = nextHandler;
};

void Level2SupportHandler::handleRequest(const std::string& request) const {
  if (request == "level_2") {
    cout << "Level 2 Support handled the request." << endl;
  } else if (m_nextHandler != nullptr) {
    m_nextHandler->handleRequest(request);
  } else {
    cout << "Invalid level!" << endl;
  }
};

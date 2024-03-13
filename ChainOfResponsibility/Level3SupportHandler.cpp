#include "Level3SupportHandler.hpp"

#include "iostream"

using namespace std;

void Level3SupportHandler::setNextHandler(SupportHandlerInterface* nextHandler) {
  m_nextHandler = nextHandler;
};

void Level3SupportHandler::handleRequest(const std::string& request) const {
  if (request == "level_3") {
    cout << "Level 3 Support handled the request." << endl;
  } else if (m_nextHandler != nullptr) {
    m_nextHandler->handleRequest(request);
  } else {
    cout << "Invalid level!" << endl;
  }
};

#include "History.hpp"

void History::addMemento(DocumentMemento* memento) {
  m_mementos.push_back(memento);
};

DocumentMemento* History::getMemento(int index) const {
  if (index >= 0 && index < m_mementos.size()) {
    return m_mementos[index];
  } else {
    return nullptr;
  }
};

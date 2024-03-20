#ifndef HISTORY_HPP_INCLUDED
#define HISTORY_HPP_INCLUDED

#include <vector>

#include "DocumentMemento.hpp"

// Caretaker
class History {
private:
  std::vector<DocumentMemento*> m_mementos;

public:
  // History();
  void             addMemento(DocumentMemento* memento);
  DocumentMemento* getMemento(int index) const;
};

#endif  // HISTORY_HPP_INCLUDED

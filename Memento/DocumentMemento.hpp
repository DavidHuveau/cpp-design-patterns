#ifndef DOCUMENT_MEMENTO_HPP_INCLUDED
#define DOCUMENT_MEMENTO_HPP_INCLUDED

#include "MementoInterface.hpp"

class DocumentMemento : public MementoInterface {
private:
  std::string m_state;

public:
  DocumentMemento(const std::string& state);
  std::string getState() const override;
};

#endif  // DOCUMENT_MEMENTO_HPP_INCLUDED

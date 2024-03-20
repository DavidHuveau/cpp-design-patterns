#ifndef DOCUMENT_HPP_INCLUDED
#define DOCUMENT_HPP_INCLUDED

#include <string>

#include "DocumentMemento.hpp"

// Originator
class Document {
private:
  std::string m_content;

public:
  Document(const std::string& newContent);
  std::string      getContent() const;
  void             write(const std::string& text);
  DocumentMemento* createMemento() const;
  void             restoreFromMemento(const DocumentMemento* memento);
};

#endif  // DOCUMENT_HPP_INCLUDED

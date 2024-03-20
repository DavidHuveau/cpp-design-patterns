#include "Document.hpp"

using namespace std;

Document::Document(const string& initialContent) : m_content(initialContent){};

string Document::getContent() const {
  return m_content;
};

void Document::write(const string& text) {
  m_content += text;
};

DocumentMemento* Document::createMemento() const {
  return new DocumentMemento(m_content);
};

void Document::restoreFromMemento(const DocumentMemento* memento) {
  m_content = memento->getState();
};

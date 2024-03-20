#include "mementoClientCode.hpp"

#include <iostream>

#include "Document.hpp"
#include "History.hpp"

using namespace std;

void writeDocument() {
  Document* document = new Document("Initial content\n");

  History history;

  document->write("Additional content\n");
  history.addMemento(document->createMemento());

  document->write("More content\n");
  history.addMemento(document->createMemento());

  cout << document->getContent() << endl;

  // Restore to previous state
  document->restoreFromMemento(history.getMemento(0));

  cout << document->getContent() << endl;
};

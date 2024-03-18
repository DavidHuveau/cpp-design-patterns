#include "FacebookContactIterator.hpp"

FacebookContactIterator::FacebookContactIterator(FacebookContactList* contactList) : m_contactList(contactList), m_currentIndex(0) {};

FacebookContact* FacebookContactIterator::getNext() {
  return m_contactList->get(m_currentIndex++);
};

bool FacebookContactIterator::hasNext() {
  return m_currentIndex < m_contactList->size();
};

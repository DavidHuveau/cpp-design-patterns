#include "FacebookContactList.hpp"
#include "FacebookContactIterator.hpp"

void FacebookContactList::addContact(FacebookContact* contact) {
  m_contacts.push_back(contact);
};

IteratorInterface<FacebookContact>* FacebookContactList::createIterator() {
  return new FacebookContactIterator(this);
};

int FacebookContactList::size() const {
  return m_contacts.size();
};

FacebookContact* FacebookContactList::get(int index) const {
  return m_contacts[index];
};

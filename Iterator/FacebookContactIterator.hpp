#ifndef FACEBOOK_CONTACT_ITERATOR_HPP_INCLUDED
#define FACEBOOK_CONTACT_ITERATOR_HPP_INCLUDED

#include "IteratorInterface.hpp"
#include "FacebookContact.hpp"
#include "FacebookContactList.hpp"

class FacebookContactIterator : public IteratorInterface<FacebookContact>{
private:
  FacebookContactList* m_contactList;
  int m_currentIndex;

public:
  FacebookContactIterator(FacebookContactList* contactList);
  FacebookContact* getNext() override;
  bool hasNext() override;
};

#endif  // FACEBOOK_CONTACT_ITERATOR_HPP_INCLUDED

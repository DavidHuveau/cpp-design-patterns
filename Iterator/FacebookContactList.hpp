#ifndef FACEBOOK_CONTACT_LIST_HPP_INCLUDED
#define FACEBOOK_CONTACT_LIST_HPP_INCLUDED

#include <vector>

#include "FacebookContact.hpp"
#include "IteratorInterface.hpp"

class FacebookContactList {
private:
  std::vector<FacebookContact*> m_contacts;

public:
  void                                addContact(FacebookContact* contact);
  IteratorInterface<FacebookContact>* createIterator();
  int                                 size() const;
  FacebookContact*                    get(int index) const;
};

#endif  // FACEBOOK_CONTACT_LIST_HPP_INCLUDED

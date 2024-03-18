#ifndef FACEBOOK_CONTACT_HPP_INCLUDED
#define FACEBOOK_CONTACT_HPP_INCLUDED

#include <string>

class FacebookContact {
private:
  std::string m_name;

public:
  FacebookContact(const std::string& name);
  std::string getName() const;
};

#endif  // FACEBOOK_CONTACT_HPP_INCLUDED

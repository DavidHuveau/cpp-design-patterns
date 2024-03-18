#include "FacebookContact.hpp"

using namespace std;

FacebookContact::FacebookContact(const string& name) : m_name(name) {};

string FacebookContact::getName() const {
  return m_name;
};

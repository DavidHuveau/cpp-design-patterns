#include "DocumentMemento.hpp"

using namespace std;

DocumentMemento:: DocumentMemento(const string& state) : m_state(state) {};

string DocumentMemento:: getState() const {
  return m_state;
};

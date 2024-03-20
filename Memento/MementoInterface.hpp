#ifndef MOMENTO_INTERFACE_HPP_INCLUDED
#define MOMENTO_INTERFACE_HPP_INCLUDED

#include <string>

class MementoInterface {
public:
  virtual std::string getState() const = 0;
};

#endif  // MOMENTO_INTERFACE_HPP_INCLUDED

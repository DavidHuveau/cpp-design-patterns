#ifndef ELEMENT_HPP_INCLUDED
#define ELEMENT_HPP_INCLUDED

class VisitorInterface; // Advanced declaration to avoid circular dependency

class ElementInterface {
public:
  virtual double accept(VisitorInterface* visitor) = 0;
};

#endif  // ELEMENT_HPP_INCLUDED

#ifndef VISITOR_INTERFACE_HPP_INCLUDED
#define VISITOR_INTERFACE_HPP_INCLUDED

class Book; // Advanced declaration to avoid circular dependency
class Fruit; // Advanced declaration to avoid circular dependency

class VisitorInterface {
public:
  virtual double visit(Book* book)   = 0;
  virtual double visit(Fruit* fruit) = 0;
};

#endif  // VISITOR_INTERFACE_HPP_INCLUDED

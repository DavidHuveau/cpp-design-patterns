#ifndef ITERATOR_INTERFACE_HPP_INCLUDED
#define ITERATOR_INTERFACE_HPP_INCLUDED

template <typename T>
class IteratorInterface {
public:
  virtual T*    getNext() = 0;
  virtual bool hasNext() = 0;
};

#endif  // ITERATOR_INTERFACE_HPP_INCLUDED

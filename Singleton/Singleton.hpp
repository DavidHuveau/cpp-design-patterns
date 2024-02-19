#ifndef SINGLETON_HPP_INCLUDED
#define SINGLETON_HPP_INCLUDED

// What we have created so far is not thread safe, meaning that if two different threads are both calling
// the get_instance() function, there is a possibility that two Singleton’s will be created due to race condition.
// We can put a std::lockguard inside the get_instance() function
class Singleton {
private:
  Singleton(const int id);
  static Singleton* s_oneAndOnlyInstance;
  static int        s_uniqueId;

public:
  static Singleton* getInstance(const int id);
  void              operator=(const Singleton&) = delete;
  Singleton(Singleton& other)                   = delete;
  void printUniqueID();
};

#endif  // SINGLETON_HPP_INCLUDED





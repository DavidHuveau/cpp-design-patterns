#ifndef SINGLETON_HPP_INCLUDED
#define SINGLETON_HPP_INCLUDED

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

#ifndef BOOK_HPP_INCLUDED
#define BOOK_HPP_INCLUDED

#include <string>

class Book {
public:
  Book(const std::string author, const std::string title);
  std::string getAuthor() const;
  std::string getTitle() const;

private:
  std::string m_author;
  std::string m_title;
};

#endif  // BOOK_HPP_INCLUDED

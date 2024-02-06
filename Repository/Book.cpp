#include "Book.hpp"

#include <string>

using namespace std;

Book::Book(string author, string title): m_author(author), m_title(title) {
}

string Book::getAuthor() const {
  return m_author;
}

string Book::getTitle() const {
  return m_title;
}

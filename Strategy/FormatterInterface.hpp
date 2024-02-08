#ifndef FORMATTER_INTERFACE_HPP_INCLUDED
#define FORMATTER_INTERFACE_HPP_INCLUDED

#include <string>
#include <vector>

class FormatterInterface {
public:
  virtual void output_report(const std::string title, const std::vector<std::string> text) const = 0;
};

#endif  // FORMATTER_INTERFACE_HPP_INCLUDED

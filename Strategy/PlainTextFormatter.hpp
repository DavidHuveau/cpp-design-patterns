#ifndef PLAIN_TEXT_FORMATTER_HPP_INCLUDED
#define PLAIN_TEXT_FORMATTER_HPP_INCLUDED

#include <string>
#include <vector>

#include "FormatterInterface.hpp"

class PlainTextFormatter : public FormatterInterface {
public:
  void output_report(std::string title, std::vector<std::string> text) const override;
};

#endif  // PLAIN_TEXT_FORMATTER_HPP_INCLUDED

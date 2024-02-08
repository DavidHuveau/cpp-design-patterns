#ifndef PLAIN_TEXT_FORMATTER_HPP_INCLUDED
#define PLAIN_TEXT_FORMATTER_HPP_INCLUDED

#include <string>
#include <vector>

#include "FormatterInterface.hpp"

class PlainTextFormatter : public FormatterInterface {
public:
  void output_report(const std::string title, const std::vector<std::string> text) const override;
};

#endif  // PLAIN_TEXT_FORMATTER_HPP_INCLUDED

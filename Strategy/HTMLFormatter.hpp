#ifndef HTML_FORMATTER_HPP_INCLUDED
#define HTML_FORMATTER_HPP_INCLUDED

#include <string>
#include <vector>

#include "FormatterInterface.hpp"

class HTMLFormatter : public FormatterInterface {
public:
  void output_report(std::string title, std::vector<std::string> text) const override;
};

#endif  // HTML_FORMATTER_HPP_INCLUDED

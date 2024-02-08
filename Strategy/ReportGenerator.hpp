#ifndef REPORT_GENERATOR_HPP_INCLUDED
#define REPORT_GENERATOR_HPP_INCLUDED

#include <string>
#include <vector>

#include "FormatterInterface.hpp"

class ReportGenerator {
public:
  ReportGenerator(FormatterInterface* formatter);
  void set_formatter(FormatterInterface* formatter);
  void output_report() const;
private:
  std::string              m_title;
  std::vector<std::string> m_text;
  FormatterInterface*      m_formatter;
};

#endif  // REPORT_GENERATOR_HPP_INCLUDED

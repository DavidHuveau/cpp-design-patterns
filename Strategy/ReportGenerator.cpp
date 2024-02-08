#include "ReportGenerator.hpp"

ReportGenerator::ReportGenerator(FormatterInterface* formatter) : m_formatter(formatter) {
  m_title = "Nostromo Final Report";
  m_text  = {"Things are going", "really, really well."};
};

void ReportGenerator::output_report() const {
  if (m_formatter) {
    m_formatter->output_report(m_title, m_text);
  }
};

void ReportGenerator::set_formatter(FormatterInterface* formatter) {
  m_formatter = formatter;
};

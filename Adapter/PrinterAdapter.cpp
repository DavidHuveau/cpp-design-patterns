#include "PrinterAdapter.hpp"

void PrinterAdapter::print() const {
  legacyPrinter.printDocument();
};

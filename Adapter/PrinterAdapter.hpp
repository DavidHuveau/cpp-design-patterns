#ifndef PRINTER_ADAPTER_HPP_INCLUDED
#define PRINTER_ADAPTER_HPP_INCLUDED

#include "PrinterInterface.hpp"
#include "LegacyPrinter.hpp"

class PrinterAdapter : public PrinterInterface {
public:
  void print() const override;
private:
  LegacyPrinter legacyPrinter;
};

#endif  // PRINTER_ADAPTER_HPP_INCLUDED

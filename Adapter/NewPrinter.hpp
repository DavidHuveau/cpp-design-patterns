#ifndef NEW_PRINTER_HPP_INCLUDED
#define NEW_PRINTER_HPP_INCLUDED

#include "PrinterInterface.hpp"

class NewPrinter : public PrinterInterface {
public:
  void print() const override;
};

#endif  // NEW_PRINTER_HPP_INCLUDED

#ifndef BANK_ACCOUNT_INTERFACE_HPP_INCLUDED
#define BANK_ACCOUNT_INTERFACE_HPP_INCLUDED

class BankAccountInterface {
public:
  virtual void deposit(int amount)  = 0;
  virtual void withdraw(int amount) = 0;
  virtual int  getBalance()         = 0;
};

#endif  // BANK_ACCOUNT_INTERFACE_HPP_INCLUDED

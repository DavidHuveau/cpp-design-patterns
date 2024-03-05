#ifndef REAL_BANK_ACCOUNT_HPP_INCLUDED
#define REAL_BANK_ACCOUNT_HPP_INCLUDED

#include "BankAccountInterface.hpp"

class RealBankAccount : public BankAccountInterface {
private:
  int m_balance;

public:
  RealBankAccount();
  void deposit(int amount) override;
  void withdraw(int amount) override;
  int  getBalance() override;
};

#endif  // REAL_BANK_ACCOUNT_HPP_INCLUDED

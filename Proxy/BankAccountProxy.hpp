#ifndef BANK_ACCOUNT_PROXY_HPP_INCLUDED
#define BANK_ACCOUNT_PROXY_HPP_INCLUDED

#include "BankAccountInterface.hpp"
#include "RealBankAccount.hpp"

class BankAccountProxy : public BankAccountInterface {
private:
  RealBankAccount* m_realAccount;

public:
  BankAccountProxy();
  ~BankAccountProxy();
  void deposit(int amount) override;
  void withdraw(int amount) override;
  int  getBalance() override;
};

#endif  // BANK_ACCOUNT_PROXY_HPP_INCLUDED

#include "BankAccountProxy.hpp"

#include <iostream>

using namespace std;

BankAccountProxy::BankAccountProxy() : m_realAccount(nullptr){};

BankAccountProxy::~BankAccountProxy() {
  if (m_realAccount) {
    delete m_realAccount;
  }
};

void BankAccountProxy::deposit(int amount) {
  if (!m_realAccount) {
    m_realAccount = new RealBankAccount();
  }
  m_realAccount->deposit(amount);
};

void BankAccountProxy::withdraw(int amount) {
  if (!m_realAccount) {
    cout << "Please deposit funds first." << endl;
  } else {
    m_realAccount->withdraw(amount);
  }
};

int BankAccountProxy::getBalance() {
  if (!m_realAccount) {
    return 0;
  } else {
    return m_realAccount->getBalance();
  }
};

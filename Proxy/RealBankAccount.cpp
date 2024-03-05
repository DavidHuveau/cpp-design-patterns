#include "RealBankAccount.hpp"

#include <iostream>

using namespace std;

RealBankAccount::RealBankAccount() : m_balance(0) {};

void RealBankAccount::deposit(int amount) {
  m_balance += amount;
  cout << amount << " deposited. Current balance: " << m_balance << endl;
};

void RealBankAccount::withdraw(int amount) {
  if (m_balance >= amount) {
    m_balance -= amount;
    cout << amount << " withdrawn. Current balance: " << m_balance << endl;
  } else {
    cout << "Insufficient funds." << endl;
  }
};

int  RealBankAccount::getBalance() {
  return m_balance;
};

#pragma once
#include "Account.h"

// Responsibility: an Account that earns interest and may restrict withdrawals.
class SavingsAccount : public Account {
private:
    double interestRate;    // annual, e.g. 0.04

public:
    SavingsAccount(const std::string& name, double openingBalance, double interestRate);
    void addTransaction(const Transaction& t) override;
    void applyMonthlyInterest();
};

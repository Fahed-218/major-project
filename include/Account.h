#pragma once
#include <string>
#include <vector>
#include "Transaction.h"

// Responsibility: a money account (e.g. checking). Owns its transactions
// and keeps the balance in sync with them.
class Account {
protected:
    std::string name;
    double balance;
    std::vector<Transaction> transactions;

public:
    Account(const std::string& name, double openingBalance);
    virtual ~Account() = default;

    virtual void addTransaction(const Transaction& t);
    double getBalance() const;
    std::string getName() const;
    const std::vector<Transaction>& getTransactions() const;
    double totalSpentInCategory(const Category& c) const;
};
